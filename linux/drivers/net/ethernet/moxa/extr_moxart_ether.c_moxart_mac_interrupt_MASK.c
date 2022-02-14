
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct moxart_mac_priv_t {int napi; scalar_t__ base; int reg_imr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct moxart_mac_priv_t* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = (struct net_device *)VAR_7;
 struct moxart_mac_priv_t *VAR_9 = FUNC_3(VAR_8);
 unsigned int VAR_10 = FUNC_4(VAR_9->base + VAR_2);

 if (VAR_10 & VAR_5)
  FUNC_1(VAR_8);

 if (VAR_10 & VAR_3) {
  if (FUNC_2(&VAR_9->napi)) {
   VAR_9->reg_imr &= ~VAR_4;
   FUNC_5(VAR_9->reg_imr, VAR_9->base + VAR_1);
   FUNC_0(&VAR_9->napi);
  }
 }

 return VAR_0;
}
