
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_7, struct file *VAR_8)
{
 if (VAR_2 == 42) {
  if (VAR_6) {
   FUNC_3("release called while internal timer alive\n");
   return -VAR_0;
  }
  VAR_6 = 1;
  FUNC_1(&VAR_5, VAR_3 + 5 * VAR_1);
 } else
  FUNC_2("WDT device closed unexpectedly.  WDT will not stop!\n");

 FUNC_0(0, &VAR_4);
 VAR_2 = 0;
 return 0;
}
