
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct trf7970a {int md_rf_tech; int state; int dev; } ;
struct nfc_digital_dev {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 struct trf7970a* FUNC_1 (struct nfc_digital_dev*) ;

__attribute__((used)) static int FUNC_2(struct nfc_digital_dev *VAR_0, u8 *VAR_1)
{
 struct trf7970a *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->dev, "Get RF Tech - state: %d, rf_tech: %d\n",
  VAR_2->state, VAR_2->md_rf_tech);

 *VAR_1 = VAR_2->md_rf_tech;

 return 0;
}
