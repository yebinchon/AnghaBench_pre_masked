
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int hb_timer; int sem_timer; int ioc_timer; } ;
struct TYPE_4__ {TYPE_1__ ioc; } ;
struct bna {TYPE_2__ ioceth; } ;
struct bnad {int regdata; int conf_mutex; int * res_info; int * mod_res_info; int bna_lock; struct bna bna; int run_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna*) ;
 int FUNC_1 (struct bnad*) ;
 int FUNC_2 (struct bnad*) ;
 int FUNC_3 (struct bnad*) ;
 int FUNC_4 (struct bnad*) ;
 int FUNC_5 (struct bnad*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct bnad*,int *,int ) ;
 int FUNC_8 (struct bnad*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct bnad* FUNC_14 (struct net_device*) ;
 struct net_device* FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static void
FUNC_20(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_15(VAR_3);
 struct bnad *VAR_5;
 struct bna *VAR_6;
 unsigned long VAR_7;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_14(VAR_4);
 VAR_6 = &VAR_5->bna;

 if (FUNC_18(VAR_0, &VAR_5->run_flags))
  FUNC_19(VAR_4);

 FUNC_12(&VAR_5->conf_mutex);
 FUNC_3(VAR_5);
 FUNC_9(&VAR_5->bna.ioceth.ioc.ioc_timer);
 FUNC_9(&VAR_5->bna.ioceth.ioc.sem_timer);
 FUNC_9(&VAR_5->bna.ioceth.ioc.hb_timer);
 FUNC_16(&VAR_5->bna_lock, VAR_7);
 FUNC_0(VAR_6);
 FUNC_17(&VAR_5->bna_lock, VAR_7);

 FUNC_7(VAR_5, &VAR_5->mod_res_info[0], VAR_1);
 FUNC_7(VAR_5, &VAR_5->res_info[0], VAR_2);
 FUNC_5(VAR_5);
 FUNC_2(VAR_5);
 FUNC_6(VAR_3);
 FUNC_13(&VAR_5->conf_mutex);
 FUNC_4(VAR_5);

 FUNC_11(VAR_5->regdata);
 FUNC_1(VAR_5);
 FUNC_8(VAR_5);
 FUNC_10(VAR_4);
}
