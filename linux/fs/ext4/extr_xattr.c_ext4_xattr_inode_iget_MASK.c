
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_ino; scalar_t__ i_generation; int i_flags; int i_sb; } ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,unsigned long,...) ;
 struct inode* FUNC_5 (int ,unsigned long,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_6, unsigned long VAR_7,
     u32 VAR_8, struct inode **VAR_9)
{
 struct inode *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_6->i_sb, VAR_7, VAR_3);
 if (FUNC_2(VAR_10)) {
  VAR_11 = FUNC_3(VAR_10);
  FUNC_4(VAR_6->i_sb,
      "error while reading EA inode %lu err=%d", VAR_7,
      VAR_11);
  return VAR_11;
 }

 if (FUNC_13(VAR_10)) {
  FUNC_4(VAR_6->i_sb,
      "error while reading EA inode %lu is_bad_inode",
      VAR_7);
  VAR_11 = -VAR_1;
  goto error;
 }

 if (!(FUNC_0(VAR_10)->i_flags & VAR_2)) {
  FUNC_4(VAR_6->i_sb,
      "EA inode %lu does not have EXT4_EA_INODE_FL flag",
       VAR_7);
  VAR_11 = -VAR_0;
  goto error;
 }

 FUNC_8(VAR_10);






 if (VAR_8 != FUNC_7(VAR_10) &&
     FUNC_1(VAR_10) == VAR_6->i_ino &&
     VAR_10->i_generation == VAR_6->i_generation) {
  FUNC_6(VAR_10, VAR_4);
  FUNC_9(VAR_10, 1);
 } else {
  FUNC_10(VAR_10);
  VAR_10->i_flags |= VAR_5;
  FUNC_11(VAR_10);
 }

 *VAR_9 = VAR_10;
 return 0;
error:
 FUNC_12(VAR_10);
 return VAR_11;
}
