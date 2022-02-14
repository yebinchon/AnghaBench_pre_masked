
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int inuse; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 if (VAR_1 == 42) {
  FUNC_4();
  FUNC_1(VAR_0);
 } else {
  FUNC_2("device closed unexpectedly. WDT will not stop!\n");
  FUNC_3();
 }
 FUNC_0(0, &VAR_2.inuse);
 return 0;
}
