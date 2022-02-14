
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ep93xx_priv {int rx_lock; int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct ep93xx_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ep93xx_priv*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ep93xx_priv*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 struct ep93xx_priv *VAR_10 = FUNC_4(VAR_9);
 u32 VAR_11;

 VAR_11 = FUNC_5(VAR_10, VAR_4);
 if (VAR_11 == 0)
  return VAR_1;

 if (VAR_11 & VAR_5) {
  FUNC_6(&VAR_10->rx_lock);
  if (FUNC_2(FUNC_3(&VAR_10->napi))) {
   FUNC_8(VAR_10, VAR_2, VAR_3);
   FUNC_0(&VAR_10->napi);
  }
  FUNC_7(&VAR_10->rx_lock);
 }

 if (VAR_11 & VAR_6)
  FUNC_1(VAR_9);

 return VAR_0;
}
