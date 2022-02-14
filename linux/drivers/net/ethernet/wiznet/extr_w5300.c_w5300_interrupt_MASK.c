
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5300_priv {int napi; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct w5300_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct w5300_priv*,int ,struct net_device*,char*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_5 (struct w5300_priv*,int ) ;
 int FUNC_6 (struct w5300_priv*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 struct w5300_priv *VAR_10 = FUNC_2(VAR_9);

 int VAR_11 = FUNC_5(VAR_10, VAR_5);
 if (!VAR_11)
  return VAR_1;
 FUNC_6(VAR_10, VAR_5, VAR_11);

 if (VAR_11 & VAR_3) {
  FUNC_3(VAR_10, VAR_6, VAR_9, "tx done\n");
  FUNC_4(VAR_9);
 }

 if (VAR_11 & VAR_2) {
  if (FUNC_1(&VAR_10->napi)) {
   FUNC_6(VAR_10, VAR_4, 0);
   FUNC_0(&VAR_10->napi);
  }
 }

 return VAR_0;
}
