
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int expect_close; int opened; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 FUNC_0(0, &VAR_1.opened);

 if (!VAR_1.expect_close) {
  FUNC_2();
  FUNC_1("Unexpected close, not stopping watchdog!\n");
 } else if (!VAR_0) {
  FUNC_3();
 }
 return 0;
}
