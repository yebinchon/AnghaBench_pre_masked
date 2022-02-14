
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct int3403_priv {int type; } ;





 int FUNC_0 (struct int3403_priv*) ;
 int FUNC_1 (struct int3403_priv*) ;
 struct int3403_priv* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct int3403_priv *VAR_1 = FUNC_2(VAR_0);

 switch (VAR_1->type) {
 case 128:
  FUNC_1(VAR_1);
  break;
 case 129:
 case 130:
  FUNC_0(VAR_1);
  break;
 default:
  break;
 }

 return 0;
}
