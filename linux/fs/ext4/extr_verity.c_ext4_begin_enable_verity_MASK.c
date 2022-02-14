
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int * FUNC_5 (struct inode*,int ,int const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,char*) ;
 struct inode* FUNC_13 (struct file*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_5)
{
 struct inode *VAR_6 = FUNC_13(VAR_5);
 const int VAR_7 = 2;
 handle_t *VAR_8;
 int VAR_9;

 if (FUNC_11(VAR_6))
  return -VAR_0;







 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9)
  return VAR_9;

 if (!FUNC_9(VAR_6, VAR_3)) {
  FUNC_12(VAR_6,
       "verity is only allowed on extent-based files");
  return -VAR_1;
 }





 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_5(VAR_6, VAR_2, VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_7(VAR_8, VAR_6);
 if (VAR_9 == 0)
  FUNC_8(VAR_6, VAR_4);

 FUNC_6(VAR_8);
 return VAR_9;
}
