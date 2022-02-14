
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mantis_pci {int num; } ;
struct mantis_ca {scalar_t__ slot_state; struct mantis_pci* ca_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(struct mantis_ca *VAR_7)
{
 struct mantis_pci *VAR_8 = VAR_7->ca_priv;

 u32 VAR_9;

 if (VAR_7->slot_state == VAR_5) {
  FUNC_0(VAR_1, 1, "Event: CAM Unplugged: Adapter(%d) Slot(0)", VAR_8->num);
  FUNC_3(50);
  FUNC_2(0x00da0000, VAR_0);
  VAR_9 = FUNC_1(VAR_2);
  VAR_9 |= VAR_3;
  VAR_9 &= ~VAR_4;
  FUNC_2(VAR_9, VAR_2);
  FUNC_3(500);
  VAR_7->slot_state = VAR_6;
 }
 FUNC_3(100);
}
