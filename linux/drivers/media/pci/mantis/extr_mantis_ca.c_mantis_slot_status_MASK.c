
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;
struct mantis_ca {scalar_t__ slot_state; struct mantis_pci* ca_priv; } ;
struct dvb_ca_en50221 {struct mantis_ca* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,char*,...) ;

__attribute__((used)) static int FUNC_1(struct dvb_ca_en50221 *VAR_4, int VAR_5, int VAR_6)
{
 struct mantis_ca *VAR_7 = VAR_4->data;
 struct mantis_pci *VAR_8 = VAR_7->ca_priv;

 FUNC_0(VAR_2, 1, "Slot(%d): Poll Slot status", VAR_5);

 if (VAR_7->slot_state == VAR_3) {
  FUNC_0(VAR_2, 1, "CA Module present and ready");
  return VAR_0 | VAR_1;
 } else {
  FUNC_0(VAR_2, 1, "CA Module not present or not ready");
 }

 return 0;
}
