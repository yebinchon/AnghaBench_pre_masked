
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int hb_timer; int sem_timer; int ioc_timer; int iocpf_timer; } ;
struct TYPE_9__ {TYPE_3__ ioc; } ;
struct bna {TYPE_4__ ioceth; int enet; int stats; } ;
struct TYPE_7__ {int * bna_stats; } ;
struct bnad {int conf_mutex; int regdata; int * res_info; int bna_lock; struct bna bna; int * mod_res_info; int run_flags; int perm_addr; TYPE_2__ stats; int bar0; TYPE_1__* pcidev; scalar_t__ id; } ;
struct bfa_pcidev {int pci_bar_kva; int device_id; int pci_func; int pci_slot; } ;
struct TYPE_10__ {scalar_t__ num_rxp; scalar_t__ num_txq; } ;
struct TYPE_6__ {int device; int devfn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (struct bna*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct bna*,struct bnad*,struct bfa_pcidev*,int *) ;
 int FUNC_7 (struct bna*,int *) ;
 int FUNC_8 (struct bna*,int *) ;
 scalar_t__ FUNC_9 (struct bna*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct bna*,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct bna*) ;
 int FUNC_13 (struct bnad*) ;
 int FUNC_14 (struct bnad*) ;
 int FUNC_15 (struct bnad*) ;
 int FUNC_16 (struct bnad*) ;
 int VAR_10 ;
 int FUNC_17 (struct bnad*,struct pci_dev*,struct net_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_18 (struct bnad*) ;
 int FUNC_19 (struct bnad*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_20 (struct bnad*) ;
 int FUNC_21 (struct bnad*) ;
 int FUNC_22 (struct bnad*) ;
 int FUNC_23 (struct bnad*) ;
 int FUNC_24 (struct bnad*,int) ;
 int FUNC_25 (struct bnad*,struct pci_dev*,int*) ;
 int FUNC_26 (struct pci_dev*) ;
 int FUNC_27 (struct bnad*,scalar_t__,scalar_t__) ;
 int FUNC_28 (struct bnad*,int *,int ) ;
 int FUNC_29 (struct bnad*,int *,int ) ;
 int FUNC_30 (struct bnad*) ;
 int FUNC_31 (struct bnad*) ;
 int FUNC_32 (struct pci_dev*) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *,char*,...) ;
 int FUNC_35 (struct net_device*) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *) ;
 struct bnad* FUNC_39 (struct net_device*) ;
 int FUNC_40 (struct net_device*) ;
 int FUNC_41 (struct net_device*) ;
 int FUNC_42 (int ,int *) ;
 int FUNC_43 (int *,unsigned long) ;
 int FUNC_44 (int *,unsigned long) ;
 int FUNC_45 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_46(struct pci_dev *VAR_15,
  const struct pci_device_id *VAR_16)
{
 bool VAR_17;
 int VAR_18;
 struct bnad *VAR_19;
 struct bna *VAR_20;
 struct net_device *VAR_21;
 struct bfa_pcidev VAR_22;
 unsigned long VAR_23;

 FUNC_37(&VAR_10);
 if (!FUNC_32(VAR_15)) {
  FUNC_38(&VAR_10);
  FUNC_34(&VAR_15->dev, "failed to load firmware image!\n");
  return -VAR_6;
 }
 FUNC_38(&VAR_10);





 VAR_21 = FUNC_2(sizeof(struct bnad));
 if (!VAR_21) {
  VAR_18 = -VAR_7;
  return VAR_18;
 }
 VAR_19 = FUNC_39(VAR_21);
 FUNC_20(VAR_19);
 VAR_19->id = FUNC_3(&VAR_9) - 1;

 FUNC_37(&VAR_19->conf_mutex);





 VAR_17 = 0;
 VAR_18 = FUNC_25(VAR_19, VAR_15, &VAR_17);
 if (VAR_18)
  goto unlock_mutex;





 VAR_18 = FUNC_17(VAR_19, VAR_15, VAR_21);
 if (VAR_18)
  goto pci_uninit;


 FUNC_24(VAR_19, VAR_17);


 FUNC_40(VAR_21);


 if (VAR_8)
  FUNC_13(VAR_19);


 FUNC_43(&VAR_19->bna_lock, VAR_23);
 FUNC_11(&VAR_19->res_info[0]);
 FUNC_44(&VAR_19->bna_lock, VAR_23);


 VAR_18 = FUNC_28(VAR_19, &VAR_19->res_info[0], VAR_4);
 if (VAR_18)
  goto drv_uninit;

 VAR_20 = &VAR_19->bna;


 VAR_22.pci_slot = FUNC_1(VAR_19->pcidev->devfn);
 VAR_22.pci_func = FUNC_0(VAR_19->pcidev->devfn);
 VAR_22.device_id = VAR_19->pcidev->device;
 VAR_22.pci_bar_kva = VAR_19->bar0;

 FUNC_43(&VAR_19->bna_lock, VAR_23);
 FUNC_6(VAR_20, VAR_19, &VAR_22, &VAR_19->res_info[0]);
 FUNC_44(&VAR_19->bna_lock, VAR_23);

 VAR_19->stats.bna_stats = &VAR_20->stats;

 FUNC_16(VAR_19);
 VAR_18 = FUNC_22(VAR_19);
 if (VAR_18)
  goto res_free;


 FUNC_45(&VAR_19->bna.ioceth.ioc.ioc_timer, VAR_12, 0);
 FUNC_45(&VAR_19->bna.ioceth.ioc.hb_timer, VAR_11, 0);
 FUNC_45(&VAR_19->bna.ioceth.ioc.iocpf_timer, VAR_14, 0);
 FUNC_45(&VAR_19->bna.ioceth.ioc.sem_timer, VAR_13,
      0);






 VAR_18 = FUNC_19(VAR_19);
 if (VAR_18) {
  FUNC_34(&VAR_15->dev, "initialization failed err=%d\n", VAR_18);
  goto probe_success;
 }

 FUNC_43(&VAR_19->bna_lock, VAR_23);
 if (FUNC_10(VAR_20, VAR_1 + 1) ||
  FUNC_9(VAR_20, VAR_0 + 1)) {
  FUNC_27(VAR_19, FUNC_4(VAR_20)->num_txq - 1,
   FUNC_4(VAR_20)->num_rxp - 1);
  if (FUNC_10(VAR_20, VAR_1 + 1) ||
   FUNC_9(VAR_20, VAR_0 + 1))
   VAR_18 = -VAR_5;
 }
 FUNC_44(&VAR_19->bna_lock, VAR_23);
 if (VAR_18)
  goto disable_ioceth;

 FUNC_43(&VAR_19->bna_lock, VAR_23);
 FUNC_8(&VAR_19->bna, &VAR_19->mod_res_info[0]);
 FUNC_44(&VAR_19->bna_lock, VAR_23);

 VAR_18 = FUNC_28(VAR_19, &VAR_19->mod_res_info[0], VAR_3);
 if (VAR_18) {
  VAR_18 = -VAR_5;
  goto disable_ioceth;
 }

 FUNC_43(&VAR_19->bna_lock, VAR_23);
 FUNC_7(&VAR_19->bna, &VAR_19->mod_res_info[0]);
 FUNC_44(&VAR_19->bna_lock, VAR_23);


 FUNC_43(&VAR_19->bna_lock, VAR_23);
 FUNC_5(&VAR_20->enet, VAR_19->perm_addr);
 FUNC_30(VAR_19);
 FUNC_44(&VAR_19->bna_lock, VAR_23);

 FUNC_38(&VAR_19->conf_mutex);


 VAR_18 = FUNC_41(VAR_21);
 if (VAR_18) {
  FUNC_34(&VAR_15->dev, "registering net device failed\n");
  goto probe_uninit;
 }
 FUNC_42(VAR_2, &VAR_19->run_flags);

 return 0;

probe_success:
 FUNC_38(&VAR_19->conf_mutex);
 return 0;

probe_uninit:
 FUNC_37(&VAR_19->conf_mutex);
 FUNC_29(VAR_19, &VAR_19->mod_res_info[0], VAR_3);
disable_ioceth:
 FUNC_18(VAR_19);
 FUNC_33(&VAR_19->bna.ioceth.ioc.ioc_timer);
 FUNC_33(&VAR_19->bna.ioceth.ioc.sem_timer);
 FUNC_33(&VAR_19->bna.ioceth.ioc.hb_timer);
 FUNC_43(&VAR_19->bna_lock, VAR_23);
 FUNC_12(VAR_20);
 FUNC_44(&VAR_19->bna_lock, VAR_23);
 FUNC_23(VAR_19);
 FUNC_15(VAR_19);
res_free:
 FUNC_29(VAR_19, &VAR_19->res_info[0], VAR_4);
drv_uninit:

 FUNC_36(VAR_19->regdata);
 FUNC_14(VAR_19);
 FUNC_31(VAR_19);
pci_uninit:
 FUNC_26(VAR_15);
unlock_mutex:
 FUNC_38(&VAR_19->conf_mutex);
 FUNC_21(VAR_19);
 FUNC_35(VAR_21);
 return VAR_18;
}
