
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mantis_slot {int slave_cfg; } ;
struct mantis_pci {int num; } ;
struct mantis_ca {int ca_lock; struct mantis_pci* ca_priv; struct mantis_slot* slot; } ;


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
 int FUNC_0 (int ,int,char*,int ,...) ;
 scalar_t__ FUNC_1 (struct mantis_ca*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mantis_ca *VAR_10, u32 VAR_11, u8 VAR_12)
{
 struct mantis_slot *VAR_13 = VAR_10->slot;
 struct mantis_pci *VAR_14 = VAR_10->ca_priv;
 u32 VAR_15 = 0;

 FUNC_0(VAR_1, 1, "Adapter(%d) Slot(0): Request HIF Mem Write", VAR_14->num);
 FUNC_3(&VAR_10->ca_lock);
 VAR_15 &= ~VAR_6;
 VAR_15 &= ~VAR_8;
 VAR_15 &= ~VAR_7;
 VAR_15 |= VAR_9;
 VAR_15 |= VAR_11;

 FUNC_2(VAR_13->slave_cfg, VAR_4);
 FUNC_2(VAR_15, VAR_3);
 FUNC_2(VAR_12, VAR_5);

 if (FUNC_1(VAR_10) != 0) {
  FUNC_0(VAR_2, 1, "Adapter(%d) Slot(0): HIF Smart Buffer operation failed", VAR_14->num);
  FUNC_4(&VAR_10->ca_lock);
  return -VAR_0;
 }
 FUNC_0(VAR_1, 1, "Mem Write: (0x%02x to 0x%02x)", VAR_12, VAR_11);
 FUNC_4(&VAR_10->ca_lock);

 return 0;
}
