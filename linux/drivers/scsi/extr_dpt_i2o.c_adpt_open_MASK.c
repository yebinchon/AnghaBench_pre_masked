
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int unit; int in_use; struct TYPE_3__* next; } ;
typedef TYPE_1__ adpt_hba ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7;
 adpt_hba* VAR_8;

 FUNC_1(&VAR_2);


 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 >= VAR_4) {
  FUNC_2(&VAR_2);
  return -VAR_0;
 }
 FUNC_1(&VAR_1);
 for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_8->unit == VAR_7) {
   break;
  }
 }
 if (VAR_8 == ((void*)0)) {
  FUNC_2(&VAR_1);
  FUNC_2(&VAR_2);
  return -VAR_0;
 }






 VAR_8->in_use = 1;
 FUNC_2(&VAR_1);
 FUNC_2(&VAR_2);

 return 0;
}
