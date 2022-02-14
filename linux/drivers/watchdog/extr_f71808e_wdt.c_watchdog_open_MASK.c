
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ expect_close; int opened; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct inode*,struct file*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;


 if (FUNC_3(0, &VAR_3.opened))
  return -VAR_0;

 VAR_6 = FUNC_4();
 if (VAR_6) {
  FUNC_1(0, &VAR_3.opened);
  return VAR_6;
 }

 if (VAR_2)
  FUNC_0(VAR_1);

 VAR_3.expect_close = 0;
 return FUNC_2(VAR_4, VAR_5);
}
