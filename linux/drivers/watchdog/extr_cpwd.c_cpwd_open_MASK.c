
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct cpwd {int initialized; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct cpwd* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,struct cpwd*) ;
 int FUNC_5 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_7, struct file *VAR_8)
{
 struct cpwd *VAR_9 = VAR_4;

 FUNC_1(&VAR_6);
 switch (FUNC_0(VAR_7)) {
 case 130:
 case 129:
 case 128:
  break;

 default:
  FUNC_2(&VAR_6);
  return -VAR_2;
 }


 if (!VAR_9->initialized) {
  if (FUNC_4(VAR_9->irq, &VAR_5,
    VAR_3, VAR_0, VAR_9)) {
   FUNC_3("Cannot register IRQ %d\n", VAR_9->irq);
   FUNC_2(&VAR_6);
   return -VAR_1;
  }
  VAR_9->initialized = 1;
 }

 FUNC_2(&VAR_6);

 return FUNC_5(VAR_7, VAR_8);
}
