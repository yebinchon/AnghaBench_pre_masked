
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int ,int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mantis_ca *VAR_8)
{
 struct mantis_slot *VAR_9 = VAR_8->slot;
 struct mantis_pci *VAR_10 = VAR_8->ca_priv;
 u32 VAR_11;

 VAR_9[0].slave_cfg = 0x70773028;
 FUNC_0(VAR_0, 1, "Adapter(%d) Initializing Mantis Host Interface", VAR_10->num);

 FUNC_3(&VAR_8->ca_lock);
 VAR_11 = FUNC_1(VAR_1);
 VAR_11 = VAR_2 |
   VAR_6 |
   VAR_3 |
   VAR_7 |
   VAR_4 |
   VAR_5;

 FUNC_2(VAR_11, VAR_1);
 FUNC_4(&VAR_8->ca_lock);

 return 0;
}
