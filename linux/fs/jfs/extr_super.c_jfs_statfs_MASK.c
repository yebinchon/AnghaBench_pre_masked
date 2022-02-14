
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void** val; } ;
struct kstatfs {int f_bfree; int f_bavail; int f_namelen; TYPE_2__ f_fsid; void* f_ffree; void* f_files; int f_blocks; int f_bsize; int f_type; } ;
struct jfs_sb_info {int uuid; TYPE_1__* bmap; int bsize; int ipimap; } ;
struct inomap {int im_l2nbperiext; int im_numfree; int im_numinos; } ;
struct dentry {int d_sb; } ;
typedef void* s64 ;
struct TYPE_6__ {struct inomap* i_imap; } ;
struct TYPE_4__ {int db_nfree; int db_mapsize; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 struct jfs_sb_info* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (void*,void*) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct jfs_sb_info *VAR_5 = FUNC_1(VAR_3->d_sb);
 s64 VAR_6;
 struct inomap *VAR_7 = FUNC_0(VAR_5->ipimap)->i_imap;

 FUNC_4("In jfs_statfs");
 VAR_4->f_type = VAR_1;
 VAR_4->f_bsize = VAR_5->bsize;
 VAR_4->f_blocks = VAR_5->bmap->db_mapsize;
 VAR_4->f_bfree = VAR_5->bmap->db_nfree;
 VAR_4->f_bavail = VAR_5->bmap->db_nfree;
 VAR_6 = FUNC_5((s64) FUNC_2(&VAR_7->im_numinos) +
   ((VAR_5->bmap->db_nfree >> VAR_7->im_l2nbperiext)
    << VAR_2), (s64) 0xffffffffLL);
 VAR_4->f_files = VAR_6;
 VAR_4->f_ffree = VAR_6 - (FUNC_2(&VAR_7->im_numinos) -
        FUNC_2(&VAR_7->im_numfree));
 VAR_4->f_fsid.val[0] = FUNC_3(0, (char *)&VAR_5->uuid,
          sizeof(VAR_5->uuid)/2);
 VAR_4->f_fsid.val[1] = FUNC_3(0,
          (char *)&VAR_5->uuid + sizeof(VAR_5->uuid)/2,
          sizeof(VAR_5->uuid)/2);

 VAR_4->f_namelen = VAR_0;
 return 0;
}
