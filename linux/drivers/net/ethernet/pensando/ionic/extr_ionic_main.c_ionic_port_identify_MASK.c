
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_identity {int port; } ;
struct ionic_dev {TYPE_1__* dev_cmd_regs; } ;
struct ionic {int dev_cmd_lock; struct ionic_dev idev; struct ionic_identity ident; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_dev*) ;
 int FUNC_1 (struct ionic*,int ) ;
 int FUNC_2 (int *,int *,size_t) ;
 size_t FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ionic *VAR_1)
{
 struct ionic_identity *VAR_2 = &VAR_1->ident;
 struct ionic_dev *VAR_3 = &VAR_1->idev;
 size_t VAR_4;
 int VAR_5;

 FUNC_4(&VAR_1->dev_cmd_lock);

 FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_5) {
  VAR_4 = FUNC_3(sizeof(VAR_2->port), sizeof(VAR_3->dev_cmd_regs->data));
  FUNC_2(&VAR_2->port, &VAR_3->dev_cmd_regs->data, VAR_4);
 }

 FUNC_5(&VAR_1->dev_cmd_lock);

 return VAR_5;
}
