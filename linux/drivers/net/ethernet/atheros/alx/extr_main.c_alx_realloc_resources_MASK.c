
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct alx_priv {TYPE_1__ hw; } ;


 int FUNC_0 (struct alx_priv*) ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (struct alx_priv*) ;
 int FUNC_3 (struct alx_priv*) ;
 int FUNC_4 (struct alx_priv*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct alx_priv *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(VAR_0->hw.pdev);

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
