
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hix5hd2_priv {int napi; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hix5hd2_priv*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct hix5hd2_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_4;
 struct hix5hd2_priv *VAR_6 = FUNC_3(VAR_5);
 int VAR_7 = FUNC_4(VAR_6->base + VAR_2);

 FUNC_5(VAR_7, VAR_6->base + VAR_2);
 if (FUNC_1(VAR_7 & VAR_0)) {
  FUNC_0(VAR_6);
  FUNC_2(&VAR_6->napi);
 }

 return VAR_1;
}
