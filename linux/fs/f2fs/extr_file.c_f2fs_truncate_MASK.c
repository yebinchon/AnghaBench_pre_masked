
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*,int ,int) ;
 int FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (int ) ;

int FUNC_15(struct inode *VAR_2)
{
 int VAR_3;

 if (FUNC_14(FUNC_6(FUNC_0(VAR_2))))
  return -VAR_0;

 if (!(FUNC_3(VAR_2->i_mode) || FUNC_1(VAR_2->i_mode) ||
    FUNC_2(VAR_2->i_mode)))
  return 0;

 FUNC_13(VAR_2);

 if (FUNC_12(FUNC_0(VAR_2), VAR_1)) {
  FUNC_9(VAR_1);
  return -VAR_0;
 }


 if (!FUNC_8(VAR_2)) {
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_10(VAR_2, FUNC_11(VAR_2), 1);
 if (VAR_3)
  return VAR_3;

 VAR_2->i_mtime = VAR_2->i_ctime = FUNC_4(VAR_2);
 FUNC_7(VAR_2, 0);
 return 0;
}
