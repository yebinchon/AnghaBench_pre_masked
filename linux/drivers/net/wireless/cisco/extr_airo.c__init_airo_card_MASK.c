
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int device; } ;
struct net_device {unsigned short irq; int base_addr; char* name; struct airo_info* ml_priv; int dev_addr; int max_mtu; int priv_flags; TYPE_3__* wireless_data; int * wireless_handlers; int * netdev_ops; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int * spy_data; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct airo_info {int flags; int wep_capable; int max_wep_idx; int bssListRidLen; struct pci_dev* pci; int pcimem; int pciaux; int shared_dma; int shared; struct net_device* wifidev; int * fids; int bssListNext; int bssListFirst; struct net_device* dev; int bap_read; TYPE_3__ wireless_data; int spy_data; int txq; TYPE_2__ APList; int * tfm; int thr_wait; TYPE_1__ config; int sem; int aux_lock; scalar_t__ jobs; } ;
struct APListRid {int dummy; } ;
struct TYPE_9__ {int softCap; int softSubVer; int softVer; } ;
typedef TYPE_4__ CapabilityRid ;
typedef int BSSListRidExtra ;
typedef int BSSListRid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 int VAR_18 ;
 int FUNC_1 (struct airo_info*) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_2 (struct airo_info*) ;
 int FUNC_3 (struct airo_info*) ;
 int FUNC_4 (struct airo_info*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,...) ;
 struct net_device* FUNC_8 (int,char*,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct airo_info*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;
 struct net_device* FUNC_13 (struct airo_info*,struct net_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct airo_info*,struct pci_dev*) ;
 int VAR_23 ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (int) ;
 struct airo_info* FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct pci_dev*,int ,int ,int ) ;
 scalar_t__ VAR_24 ;
 int FUNC_21 (struct airo_info*,TYPE_4__*,int) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (int,int,int ) ;
 int FUNC_25 (struct net_device*,int) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int ,int*) ;
 int FUNC_28 (struct airo_info*,int ,int) ;
 scalar_t__ FUNC_29 (struct net_device*,struct airo_info*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (char*,char*) ;
 scalar_t__ FUNC_33 (int ,int*) ;
 int FUNC_34 (struct airo_info*,int ,int) ;
 int FUNC_35 (struct net_device*) ;

__attribute__((used)) static struct net_device *FUNC_36( unsigned short VAR_25, int VAR_26,
        int VAR_27, struct pci_dev *VAR_28,
        struct device *VAR_29 )
{
 struct net_device *VAR_30;
 struct airo_info *VAR_31;
 int VAR_32, VAR_33;
 CapabilityRid VAR_34;


 VAR_30 = FUNC_8(sizeof(*VAR_31), "", VAR_12, VAR_21);
 if (!VAR_30) {
  FUNC_6("", "Couldn't alloc_etherdev");
  return ((void*)0);
 }

 VAR_31 = VAR_30->ml_priv = FUNC_19(VAR_30);
 VAR_31->wifidev = ((void*)0);
 VAR_31->flags = 1 << VAR_6;
 VAR_31->jobs = 0;
 VAR_31->dev = VAR_30;
 if (VAR_28 && (VAR_28->device == 0x5000 || VAR_28->device == 0xa504)) {
  FUNC_5("", "Found an MPI350 card");
  FUNC_27(VAR_5, &VAR_31->flags);
 }
 FUNC_31(&VAR_31->aux_lock);
 FUNC_26(&VAR_31->sem, 1);
 VAR_31->config.len = 0;
 VAR_31->pci = VAR_28;
 FUNC_12 (&VAR_31->thr_wait);
 VAR_31->tfm = ((void*)0);
 FUNC_1(VAR_31);
 VAR_31->APList.len = FUNC_9(sizeof(struct APListRid));

 if (FUNC_2 (VAR_31))
  goto err_out_free;
 FUNC_4 (VAR_31);

 FUNC_30 (&VAR_31->txq);


 if (FUNC_33(VAR_5,&VAR_31->flags))
  VAR_30->netdev_ops = &VAR_23;
 else
  VAR_30->netdev_ops = &VAR_20;
 VAR_30->wireless_handlers = &VAR_19;
 VAR_31->wireless_data.spy_data = &VAR_31->spy_data;
 VAR_30->wireless_data = &VAR_31->wireless_data;
 VAR_30->irq = VAR_25;
 VAR_30->base_addr = VAR_26;
 VAR_30->priv_flags &= ~VAR_9;
 VAR_30->max_mtu = VAR_11;

 FUNC_0(VAR_30, VAR_29);

 FUNC_25 (VAR_30, 1);
 FUNC_18(400);

 if (!VAR_27) {
  if (!FUNC_24(VAR_30->base_addr, 64, VAR_1)) {
   VAR_33 = -VAR_2;
   FUNC_6(VAR_30->name, "Couldn't request region");
   goto err_out_nets;
  }
 }

 if (FUNC_33(VAR_5,&VAR_31->flags)) {
  if (FUNC_16(VAR_31, VAR_28)) {
   FUNC_6("", "Could not map memory");
   goto err_out_res;
  }
 }

 if (VAR_24) {
  if (FUNC_28(VAR_31, VAR_30->dev_addr, 1) != VAR_18) {
   FUNC_6(VAR_30->name, "MAC could not be enabled" );
   VAR_33 = -VAR_3;
   goto err_out_map;
  }
 } else if (!FUNC_33(VAR_5,&VAR_31->flags)) {
  VAR_31->bap_read = VAR_22;
  FUNC_27(VAR_4, &VAR_31->flags);
 }

 FUNC_32(VAR_30->name, "eth%d");
 VAR_33 = FUNC_22(VAR_30);
 if (VAR_33) {
  FUNC_6(VAR_30->name, "Couldn't register_netdev");
  goto err_out_map;
 }
 VAR_31->wifidev = FUNC_13(VAR_31, VAR_30);
 if (!VAR_31->wifidev)
  goto err_out_reg;

 VAR_33 = FUNC_21(VAR_31, &VAR_34, 1);
 if (VAR_33 != VAR_18) {
  VAR_33 = -VAR_3;
  goto err_out_wifi;
 }

 VAR_31->wep_capable = (VAR_34.softCap & FUNC_9(0x02)) ? 1 : 0;
 VAR_31->max_wep_idx = (VAR_34.softCap & FUNC_9(0x80)) ? 3 : 0;

 FUNC_7(VAR_30->name, "Firmware version %x.%x.%02d",
                 ((FUNC_15(VAR_34.softVer) >> 8) & 0xF),
                 (FUNC_15(VAR_34.softVer) & 0xFF),
                 FUNC_15(VAR_34.softSubVer));



 if (FUNC_15(VAR_34.softVer) > 0x530
  || (FUNC_15(VAR_34.softVer) == 0x530
       && FUNC_15(VAR_34.softSubVer) >= 17)) {
  FUNC_7(VAR_31->dev->name, "WPA supported.");

  FUNC_27(VAR_8, &VAR_31->flags);
  VAR_31->bssListFirst = VAR_16;
  VAR_31->bssListNext = VAR_17;
  VAR_31->bssListRidLen = sizeof(BSSListRid);
 } else {
  FUNC_7(VAR_31->dev->name, "WPA unsupported with firmware "
   "versions older than 5.30.17.");

  VAR_31->bssListFirst = VAR_14;
  VAR_31->bssListNext = VAR_15;
  VAR_31->bssListRidLen = sizeof(BSSListRid) - sizeof(BSSListRidExtra);
 }

 FUNC_27(VAR_7,&VAR_31->flags);
 FUNC_7(VAR_30->name, "MAC enabled %pM", VAR_30->dev_addr);


 if (VAR_24 && !FUNC_33(VAR_5,&VAR_31->flags))
  for( VAR_32 = 0; VAR_32 < VAR_10; VAR_32++ )
   VAR_31->fids[VAR_32] = FUNC_34(VAR_31,VAR_0,VAR_32>=VAR_10/2);

 if (FUNC_29(VAR_30, VAR_30->ml_priv) < 0)
  goto err_out_wifi;

 return VAR_30;

err_out_wifi:
 FUNC_35(VAR_31->wifidev);
 FUNC_11(VAR_31->wifidev);
err_out_reg:
 FUNC_35(VAR_30);
err_out_map:
 if (FUNC_33(VAR_5,&VAR_31->flags) && VAR_28) {
  FUNC_20(VAR_28, VAR_13, VAR_31->shared, VAR_31->shared_dma);
  FUNC_14(VAR_31->pciaux);
  FUNC_14(VAR_31->pcimem);
  FUNC_17(VAR_31->pci);
 }
err_out_res:
 if (!VAR_27)
         FUNC_23( VAR_30->base_addr, 64 );
err_out_nets:
 FUNC_3(VAR_31);
err_out_free:
 FUNC_10(VAR_31);
 FUNC_11(VAR_30);
 return ((void*)0);
}
