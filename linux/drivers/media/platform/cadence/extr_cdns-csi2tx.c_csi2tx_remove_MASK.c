
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct csi2tx_priv {int subdev; } ;


 int FUNC_0 (struct csi2tx_priv*) ;
 struct csi2tx_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct csi2tx_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->subdev);
 FUNC_0(VAR_1);

 return 0;
}
