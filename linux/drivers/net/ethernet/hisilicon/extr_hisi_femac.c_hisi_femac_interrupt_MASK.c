
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hisi_femac_priv {int napi; scalar_t__ glb_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hisi_femac_priv*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct hisi_femac_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 int VAR_5;
 struct net_device *VAR_6 = (struct net_device *)VAR_4;
 struct hisi_femac_priv *VAR_7 = FUNC_3(VAR_6);

 VAR_5 = FUNC_4(VAR_7->glb_base + VAR_1);

 if (FUNC_1(VAR_5 & VAR_0)) {
  FUNC_5(VAR_5 & VAR_0,
         VAR_7->glb_base + VAR_1);
  FUNC_0(VAR_7, VAR_0);
  FUNC_2(&VAR_7->napi);
 }

 return VAR_2;
}
