
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;
struct mantis_ca {struct mantis_pci* ca_priv; } ;
struct dvb_ca_en50221 {struct mantis_ca* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct mantis_ca*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_en50221 *VAR_2, int VAR_3, int VAR_4)
{
 struct mantis_ca *VAR_5 = VAR_2->data;
 struct mantis_pci *VAR_6 = VAR_5->ca_priv;

 FUNC_0(VAR_1, 1, "Slot(%d): Request Attribute Mem Read", VAR_3);

 if (VAR_3 != 0)
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_4);
}
