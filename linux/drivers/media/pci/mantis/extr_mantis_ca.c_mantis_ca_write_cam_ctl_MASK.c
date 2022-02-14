
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mantis_pci {int dummy; } ;
struct mantis_ca {struct mantis_pci* ca_priv; } ;
struct dvb_ca_en50221 {struct mantis_ca* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct mantis_ca*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_en50221 *VAR_2, int VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct mantis_ca *VAR_6 = VAR_2->data;
 struct mantis_pci *VAR_7 = VAR_6->ca_priv;

 FUNC_0(VAR_1, 1, "Slot(%d): Request CAM control Write", VAR_3);

 if (VAR_3 != 0)
  return -VAR_0;

 return FUNC_1(VAR_6, VAR_4, VAR_5);
}
