
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcsim {int up; } ;
struct nfc_digital_dev {int dummy; } ;


 struct nfcsim* FUNC_0 (struct nfc_digital_dev*) ;

__attribute__((used)) static int FUNC_1(struct nfc_digital_dev *VAR_0, bool VAR_1)
{
 struct nfcsim *VAR_2 = FUNC_0(VAR_0);

 VAR_2->up = VAR_1;

 return 0;
}
