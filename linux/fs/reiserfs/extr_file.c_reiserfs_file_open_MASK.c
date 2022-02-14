
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tailpack; int openers; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0, VAR_1);


        if (!FUNC_2(&FUNC_0(VAR_0)->openers)) {
  FUNC_4(&FUNC_0(VAR_0)->tailpack);
  FUNC_1(&FUNC_0(VAR_0)->openers);
  FUNC_5(&FUNC_0(VAR_0)->tailpack);
 }
 return VAR_2;
}
