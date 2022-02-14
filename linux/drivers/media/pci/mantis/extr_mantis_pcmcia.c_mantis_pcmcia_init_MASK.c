
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mantis_pci {int num; } ;
struct mantis_ca {int en50221; int slot_state; struct mantis_pci* ca_priv; } ;


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
 int FUNC_0 (int ,int,char*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct mantis_pci*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct mantis_ca *VAR_11)
{
 struct mantis_pci *VAR_12 = VAR_11->ca_priv;

 u32 VAR_13, VAR_14;

 FUNC_2(VAR_12, VAR_6);
 VAR_13 = FUNC_3(VAR_5);
 VAR_14 = FUNC_3(VAR_4);

 if (VAR_13 & VAR_3) {
  FUNC_0(VAR_2, 1, "CAM found on Adapter(%d) Slot(0)", VAR_12->num);
  FUNC_4(VAR_14 | VAR_8, VAR_4);
  VAR_11->slot_state = VAR_9;
  FUNC_1(&VAR_11->en50221,
          0,
          VAR_0);
 } else {
  FUNC_0(VAR_2, 1, "Empty Slot on Adapter(%d) Slot(0)", VAR_12->num);
  FUNC_4(VAR_14 | VAR_7, VAR_4);
  VAR_11->slot_state = VAR_10;
  FUNC_1(&VAR_11->en50221,
          0,
          VAR_1);
 }

 return 0;
}
