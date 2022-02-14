
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pn533 {int poll_work; TYPE_1__* phy_ops; int dev; int poll_mod_count; int listen_timer; } ;
struct nfc_dev {int dummy; } ;
struct TYPE_2__ {int (* abort_cmd ) (struct pn533*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 struct pn533* FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (struct pn533*) ;
 int FUNC_5 (struct pn533*,int ) ;

__attribute__((used)) static void FUNC_6(struct nfc_dev *VAR_1)
{
 struct pn533 *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->listen_timer);

 if (!VAR_2->poll_mod_count) {
  FUNC_1(VAR_2->dev,
   "Polling operation was not running\n");
  return;
 }

 VAR_2->phy_ops->abort_cmd(VAR_2, VAR_0);
 FUNC_2(&VAR_2->poll_work);
 FUNC_4(VAR_2);
}
