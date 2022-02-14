
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct kstat {int size; int blksize; int nlink; int result_mask; scalar_t__ blocks; int dev; TYPE_1__ btime; int ino; } ;
struct inode {TYPE_3__* i_sb; int i_mode; int i_ino; } ;
struct ceph_inode_info {int i_rbytes; int i_files; int i_subdirs; TYPE_2__* i_snapid_map; TYPE_1__ i_btime; } ;
struct TYPE_7__ {int s_dev; } ;
struct TYPE_6__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ,unsigned int) ;
 struct ceph_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,struct kstat*) ;
 int FUNC_9 (int) ;

int FUNC_10(const struct path *VAR_6, struct kstat *VAR_7,
   u32 VAR_8, unsigned int VAR_9)
{
 struct inode *VAR_10 = FUNC_7(VAR_6->dentry);
 struct ceph_inode_info *VAR_11 = FUNC_2(VAR_10);
 u32 VAR_12 = VAR_4;
 int VAR_13 = 0;


 if (!(VAR_9 & VAR_0)) {
  VAR_13 = FUNC_1(VAR_10, FUNC_9(VAR_8),
          VAR_9 & VAR_1);
  if (VAR_13)
   return VAR_13;
 }

 FUNC_8(VAR_10, VAR_7);
 VAR_7->ino = FUNC_6(VAR_10->i_sb, VAR_10->i_ino);





 if (VAR_11->i_btime.tv_sec || VAR_11->i_btime.tv_nsec) {
  VAR_7->btime = VAR_11->i_btime;
  VAR_12 |= VAR_5;
 }

 if (FUNC_4(VAR_10) == VAR_2)
  VAR_7->dev = VAR_10->i_sb->s_dev;
 else
  VAR_7->dev = VAR_11->i_snapid_map ? VAR_11->i_snapid_map->dev : 0;

 if (FUNC_0(VAR_10->i_mode)) {
  if (FUNC_5(FUNC_3(VAR_10->i_sb),
     VAR_3))
   VAR_7->size = VAR_11->i_rbytes;
  else
   VAR_7->size = VAR_11->i_files + VAR_11->i_subdirs;
  VAR_7->blocks = 0;
  VAR_7->blksize = 65536;





  if (VAR_7->nlink == 1)

   VAR_7->nlink = 1 + 1 + VAR_11->i_subdirs;
 }

 VAR_7->result_mask = VAR_8 & VAR_12;
 return VAR_13;
}
