
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ expect_close; int open; int timer; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{

 if (!VAR_0.expect_close)
  FUNC_1(&VAR_0.timer);

 FUNC_0(0, &VAR_0.open);
 VAR_0.expect_close = 0;
 return 0;
}
