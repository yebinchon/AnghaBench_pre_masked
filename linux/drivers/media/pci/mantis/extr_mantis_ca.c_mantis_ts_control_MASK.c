
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;
struct mantis_ca {struct mantis_pci* ca_priv; } ;
struct dvb_ca_en50221 {struct mantis_ca* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_ca_en50221 *VAR_1, int VAR_2)
{
 struct mantis_ca *VAR_3 = VAR_1->data;
 struct mantis_pci *VAR_4 = VAR_3->ca_priv;

 FUNC_0(VAR_0, 1, "Slot(%d): TS control", VAR_2);


 return 0;
}
