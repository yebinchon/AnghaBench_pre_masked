
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;
struct mantis_ca {int en50221; struct mantis_pci* ca_priv; } ;
struct dvb_ca_en50221 {struct mantis_ca* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_en50221 *VAR_2, int VAR_3)
{
 struct mantis_ca *VAR_4 = VAR_2->data;
 struct mantis_pci *VAR_5 = VAR_4->ca_priv;

 FUNC_0(VAR_0, 1, "Slot(%d): Slot RESET", VAR_3);
 FUNC_4(500);
 FUNC_2(0xda, VAR_1);
 FUNC_4(500);
 FUNC_2(0x00, VAR_1);
 FUNC_3(1000);
 FUNC_1(&VAR_4->en50221, 0);

 return 0;
}
