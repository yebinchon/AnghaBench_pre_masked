
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct ingenic_nfc {unsigned int num_banks; scalar_t__ ecc; int chips; int controller; struct device* dev; int soc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 struct ingenic_nfc* FUNC_5 (struct device*,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ingenic_nfc*,struct platform_device*) ;
 unsigned int FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct platform_device*,struct ingenic_nfc*) ;
 int FUNC_12 (struct ingenic_nfc*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 unsigned int VAR_7;
 struct ingenic_nfc *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7 == 0) {
  FUNC_3(VAR_6, "no banks found\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_6, FUNC_12(VAR_8, VAR_4, VAR_7), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->soc_info = FUNC_4(VAR_6);
 if (!VAR_8->soc_info)
  return -VAR_0;





 VAR_8->ecc = FUNC_10(VAR_6->of_node);
 if (FUNC_1(VAR_8->ecc))
  return FUNC_2(VAR_8->ecc);

 VAR_8->dev = VAR_6;
 VAR_8->num_banks = VAR_7;

 FUNC_9(&VAR_8->controller);
 FUNC_0(&VAR_8->chips);

 VAR_9 = FUNC_7(VAR_8, VAR_5);
 if (VAR_9) {
  if (VAR_8->ecc)
   FUNC_6(VAR_8->ecc);
  return VAR_9;
 }

 FUNC_11(VAR_5, VAR_8);
 return 0;
}
