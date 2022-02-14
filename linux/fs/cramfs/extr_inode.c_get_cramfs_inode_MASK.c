
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct super_block {int dummy; } ;
struct TYPE_3__ {int * a_ops; } ;
struct inode {int i_state; int i_mode; int i_ino; int i_size; int i_blocks; struct timespec64 i_ctime; struct timespec64 i_atime; struct timespec64 i_mtime; TYPE_1__ i_data; int * i_op; int * i_fop; } ;
struct cramfs_inode {int mode; int size; int gid; int uid; } ;
struct TYPE_4__ {int flags; int linear_phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct cramfs_inode const*,unsigned int) ;
 int VAR_9 ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*,int ) ;
 struct inode* FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (struct inode*,int,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int) ;
 int VAR_10 ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_11(struct super_block *VAR_11,
 const struct cramfs_inode *VAR_12, unsigned int VAR_13)
{
 struct inode *VAR_14;
 static struct timespec64 VAR_15;

 VAR_14 = FUNC_6(VAR_11, FUNC_3(VAR_12, VAR_13));
 if (!VAR_14)
  return FUNC_1(-VAR_2);
 if (!(VAR_14->i_state & VAR_3))
  return VAR_14;

 switch (VAR_12->mode & VAR_4) {
 case 128:
  VAR_14->i_fop = &VAR_9;
  VAR_14->i_data.a_ops = &VAR_5;
  if (FUNC_2(VAR_0) &&
      FUNC_0(VAR_11)->flags & VAR_1 &&
      FUNC_0(VAR_11)->linear_phys_addr)
   VAR_14->i_fop = &VAR_8;
  break;
 case 130:
  VAR_14->i_op = &VAR_6;
  VAR_14->i_fop = &VAR_7;
  break;
 case 129:
  VAR_14->i_op = &VAR_10;
  FUNC_8(VAR_14);
  VAR_14->i_data.a_ops = &VAR_5;
  break;
 default:
  FUNC_7(VAR_14, VAR_12->mode,
    FUNC_9(VAR_12->size));
 }

 VAR_14->i_mode = VAR_12->mode;
 FUNC_5(VAR_14, VAR_12->uid);
 FUNC_4(VAR_14, VAR_12->gid);


 if (!(VAR_14->i_ino & 3)) {
  VAR_14->i_size = VAR_12->size;
  VAR_14->i_blocks = (VAR_12->size - 1) / 512 + 1;
 }


 VAR_14->i_mtime = VAR_14->i_atime = VAR_14->i_ctime = VAR_15;





 FUNC_10(VAR_14);

 return VAR_14;
}
