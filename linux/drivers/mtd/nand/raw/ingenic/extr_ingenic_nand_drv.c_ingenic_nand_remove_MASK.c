
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ingenic_nfc {scalar_t__ ecc; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ingenic_nfc*) ;
 struct ingenic_nfc* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ingenic_nfc *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->ecc)
  FUNC_0(VAR_1->ecc);

 FUNC_1(VAR_1);

 return 0;
}
