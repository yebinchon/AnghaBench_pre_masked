
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int test_t ;
struct inode {int i_state; int i_sb; int i_ino; } ;
typedef int set_t ;
typedef int ntfschar ;
struct TYPE_3__ {int mft_no; int name_len; int * name; int type; } ;
typedef TYPE_1__ ntfs_attr ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 struct inode* FUNC_1 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct inode*,struct inode*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct inode*) ;

struct inode *FUNC_6(struct inode *VAR_5, ntfschar *VAR_6,
  u32 VAR_7)
{
 struct inode *VAR_8;
 int VAR_9;
 ntfs_attr VAR_10;

 VAR_10.mft_no = VAR_5->i_ino;
 VAR_10.type = VAR_0;
 VAR_10.name = VAR_6;
 VAR_10.name_len = VAR_7;

 VAR_8 = FUNC_1(VAR_5->i_sb, VAR_10.mft_no, (test_t)VAR_4,
   (set_t)VAR_3, &VAR_10);
 if (FUNC_4(!VAR_8))
  return FUNC_0(-VAR_1);

 VAR_9 = 0;


 if (VAR_8->i_state & VAR_2) {
  VAR_9 = FUNC_3(VAR_5, VAR_8);
  FUNC_5(VAR_8);
 }





 if (FUNC_4(VAR_9)) {
  FUNC_2(VAR_8);
  VAR_8 = FUNC_0(VAR_9);
 }
 return VAR_8;
}
