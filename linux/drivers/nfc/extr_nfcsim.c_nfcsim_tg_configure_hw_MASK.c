
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcsim {int up; int rf_tech; int mode; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfcsim*,char*,int) ;
 int VAR_1 ;


 struct nfcsim* FUNC_1 (struct nfc_digital_dev*) ;

__attribute__((used)) static int FUNC_2(struct nfc_digital_dev *VAR_2,
       int VAR_3, int VAR_4)
{
 struct nfcsim *VAR_5 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 128:
  VAR_5->up = 1;
  VAR_5->mode = VAR_1;
  VAR_5->rf_tech = VAR_4;
  break;

 case 129:
  break;

 default:
  FUNC_0(VAR_5, "Invalid configuration type: %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
