
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_file {int kind; int refcnt; } ;
struct ppp {int dev; struct file* owner; } ;
struct inode {int dummy; } ;
struct file {struct ppp_file* private_data; } ;




 int FUNC_0 (struct ppp_file*) ;
 struct ppp* FUNC_1 (struct ppp_file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ppp*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, struct file *VAR_1)
{
 struct ppp_file *VAR_2 = VAR_1->private_data;
 struct ppp *VAR_3;

 if (VAR_2) {
  VAR_1->private_data = ((void*)0);
  if (VAR_2->kind == 128) {
   VAR_3 = FUNC_1(VAR_2);
   FUNC_5();
   if (VAR_1 == VAR_3->owner)
    FUNC_7(VAR_3->dev);
   FUNC_6();
  }
  if (FUNC_4(&VAR_2->refcnt)) {
   switch (VAR_2->kind) {
   case 128:
    FUNC_3(FUNC_1(VAR_2));
    break;
   case 129:
    FUNC_2(FUNC_0(VAR_2));
    break;
   }
  }
 }
 return 0;
}
