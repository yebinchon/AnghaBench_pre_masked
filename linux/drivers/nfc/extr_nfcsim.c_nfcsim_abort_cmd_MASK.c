
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcsim {int link_in; } ;
struct nfc_digital_dev {int dummy; } ;


 struct nfcsim* FUNC_0 (struct nfc_digital_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nfc_digital_dev *VAR_0)
{
 struct nfcsim *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->link_in);
}
