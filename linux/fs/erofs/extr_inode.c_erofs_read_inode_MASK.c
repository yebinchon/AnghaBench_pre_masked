
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct inode {int i_mode; int i_blocks; int i_sb; void* i_size; TYPE_3__ i_ctime; TYPE_2__ i_mtime; void* i_rdev; } ;
struct erofs_sb_info {void* build_time_nsec; void* build_time; } ;
struct TYPE_5__ {int compressed_blocks; int rdev; int raw_blkaddr; } ;
struct erofs_inode_extended {TYPE_1__ i_u; int i_size; int i_ctime_nsec; int i_ctime; int i_nlink; int i_gid; int i_uid; int i_mode; int i_xattr_icount; } ;
struct TYPE_8__ {int compressed_blocks; int rdev; int raw_blkaddr; } ;
struct erofs_inode_compact {TYPE_4__ i_u; int i_size; int i_nlink; int i_gid; int i_uid; int i_mode; int i_xattr_icount; int i_format; } ;
struct erofs_inode {scalar_t__ datalayout; int inode_isize; int nid; void* raw_blkaddr; void* xattr_isize; } ;
typedef int erofs_blk_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct erofs_inode* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;


 struct erofs_sb_info* FUNC_2 (int ) ;
 int VAR_4 ;





 int VAR_5 ;


 int FUNC_3 (int ,char*,int,int ) ;
 scalar_t__ FUNC_4 (unsigned int const) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int const) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,void*) ;
 int FUNC_9 (struct inode*,void*) ;
 void* FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 void* FUNC_13 (void*) ;
 int FUNC_14 (void*,int ) ;
 int FUNC_15 (struct inode*,void*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_6, void *VAR_7)
{
 struct erofs_inode *VAR_8 = FUNC_1(VAR_6);
 struct erofs_inode_compact *VAR_9 = VAR_7;
 struct erofs_inode_extended *VAR_10;

 const unsigned int VAR_11 = FUNC_10(VAR_9->i_format);
 struct erofs_sb_info *VAR_12 = FUNC_2(VAR_6->i_sb);
 erofs_blk_t VAR_13 = 0;

 VAR_8->datalayout = FUNC_4(VAR_11);

 if (VAR_8->datalayout >= VAR_3) {
  FUNC_3(VAR_6->i_sb, "unsupported datalayout %u of nid %llu",
     VAR_8->datalayout, VAR_8->nid);
  FUNC_0(1);
  return -VAR_1;
 }

 switch (FUNC_6(VAR_11)) {
 case 135:
  VAR_10 = VAR_7;

  VAR_8->inode_isize = sizeof(struct erofs_inode_extended);
  VAR_8->xattr_isize = FUNC_7(VAR_10->i_xattr_icount);

  VAR_6->i_mode = FUNC_10(VAR_10->i_mode);
  switch (VAR_6->i_mode & VAR_5) {
  case 129:
  case 132:
  case 130:
   VAR_8->raw_blkaddr = FUNC_11(VAR_10->i_u.raw_blkaddr);
   break;
  case 133:
  case 134:
   VAR_6->i_rdev =
    FUNC_13(FUNC_11(VAR_10->i_u.rdev));
   break;
  case 131:
  case 128:
   VAR_6->i_rdev = 0;
   break;
  default:
   goto bogusimode;
  }
  FUNC_9(VAR_6, FUNC_11(VAR_10->i_uid));
  FUNC_8(VAR_6, FUNC_11(VAR_10->i_gid));
  FUNC_15(VAR_6, FUNC_11(VAR_10->i_nlink));


  VAR_6->i_mtime.tv_sec = VAR_6->i_ctime.tv_sec =
   FUNC_12(VAR_10->i_ctime);
  VAR_6->i_mtime.tv_nsec = VAR_6->i_ctime.tv_nsec =
   FUNC_11(VAR_10->i_ctime_nsec);

  VAR_6->i_size = FUNC_12(VAR_10->i_size);


  if (FUNC_5(VAR_8->datalayout))
   VAR_13 = FUNC_11(VAR_10->i_u.compressed_blocks);
  break;
 case 136:
  VAR_8->inode_isize = sizeof(struct erofs_inode_compact);
  VAR_8->xattr_isize = FUNC_7(VAR_9->i_xattr_icount);

  VAR_6->i_mode = FUNC_10(VAR_9->i_mode);
  switch (VAR_6->i_mode & VAR_5) {
  case 129:
  case 132:
  case 130:
   VAR_8->raw_blkaddr = FUNC_11(VAR_9->i_u.raw_blkaddr);
   break;
  case 133:
  case 134:
   VAR_6->i_rdev =
    FUNC_13(FUNC_11(VAR_9->i_u.rdev));
   break;
  case 131:
  case 128:
   VAR_6->i_rdev = 0;
   break;
  default:
   goto bogusimode;
  }
  FUNC_9(VAR_6, FUNC_10(VAR_9->i_uid));
  FUNC_8(VAR_6, FUNC_10(VAR_9->i_gid));
  FUNC_15(VAR_6, FUNC_10(VAR_9->i_nlink));


  VAR_6->i_mtime.tv_sec = VAR_6->i_ctime.tv_sec =
   VAR_12->build_time;
  VAR_6->i_mtime.tv_nsec = VAR_6->i_ctime.tv_nsec =
   VAR_12->build_time_nsec;

  VAR_6->i_size = FUNC_11(VAR_9->i_size);
  if (FUNC_5(VAR_8->datalayout))
   VAR_13 = FUNC_11(VAR_9->i_u.compressed_blocks);
  break;
 default:
  FUNC_3(VAR_6->i_sb,
     "unsupported on-disk inode version %u of nid %llu",
     FUNC_6(VAR_11), VAR_8->nid);
  FUNC_0(1);
  return -VAR_1;
 }

 if (!VAR_13)

  VAR_6->i_blocks = FUNC_14(VAR_6->i_size, VAR_2) >> 9;
 else
  VAR_6->i_blocks = VAR_13 << VAR_4;
 return 0;

bogusimode:
 FUNC_3(VAR_6->i_sb, "bogus i_mode (%o) @ nid %llu",
    VAR_6->i_mode, VAR_8->nid);
 FUNC_0(1);
 return -VAR_0;
}
