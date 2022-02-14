
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
struct TYPE_3__ {int mft_no; int name_len; int * name; scalar_t__ type; } ;
typedef TYPE_1__ ntfs_attr ;
typedef scalar_t__ ATTR_TYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct inode* FUNC_1 (int) ;
 int VAR_2 ;
 struct inode* FUNC_2 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct inode*,struct inode*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct inode*) ;

struct inode *FUNC_7(struct inode *VAR_5, ATTR_TYPE VAR_6,
  ntfschar *VAR_7, u32 VAR_8)
{
 struct inode *VAR_9;
 int VAR_10;
 ntfs_attr VAR_11;


 FUNC_0(VAR_6 == VAR_0);

 VAR_11.mft_no = VAR_5->i_ino;
 VAR_11.type = VAR_6;
 VAR_11.name = VAR_7;
 VAR_11.name_len = VAR_8;

 VAR_9 = FUNC_2(VAR_5->i_sb, VAR_11.mft_no, (test_t)VAR_4,
   (set_t)VAR_3, &VAR_11);
 if (FUNC_5(!VAR_9))
  return FUNC_1(-VAR_1);

 VAR_10 = 0;


 if (VAR_9->i_state & VAR_2) {
  VAR_10 = FUNC_4(VAR_5, VAR_9);
  FUNC_6(VAR_9);
 }





 if (FUNC_5(VAR_10)) {
  FUNC_3(VAR_9);
  VAR_9 = FUNC_1(VAR_10);
 }
 return VAR_9;
}
