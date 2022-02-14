
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_can_priv {int napi; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct pch_can_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pch_can_priv*) ;
 int FUNC_3 (struct pch_can_priv*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_4;
 struct pch_can_priv *VAR_6 = FUNC_1(VAR_5);

 if (!FUNC_2(VAR_6))
  return VAR_1;

 FUNC_3(VAR_6, VAR_2);
 FUNC_0(&VAR_6->napi);
 return VAR_0;
}
