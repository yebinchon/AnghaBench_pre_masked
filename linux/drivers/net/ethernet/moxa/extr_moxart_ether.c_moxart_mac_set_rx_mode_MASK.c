
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct moxart_mac_priv_t {int txlock; scalar_t__ base; int reg_maccr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct moxart_mac_priv_t* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_7)
{
 struct moxart_mac_priv_t *VAR_8 = FUNC_2(VAR_7);

 FUNC_3(&VAR_8->txlock);

 (VAR_7->flags & VAR_3) ? (VAR_8->reg_maccr |= VAR_4) :
          (VAR_8->reg_maccr &= ~VAR_4);

 (VAR_7->flags & VAR_1) ? (VAR_8->reg_maccr |= VAR_6) :
           (VAR_8->reg_maccr &= ~VAR_6);

 if ((VAR_7->flags & VAR_2) && FUNC_1(VAR_7)) {
  VAR_8->reg_maccr |= VAR_0;
  FUNC_0(VAR_7);
 } else {
  VAR_8->reg_maccr &= ~VAR_0;
 }

 FUNC_5(VAR_8->reg_maccr, VAR_8->base + VAR_5);

 FUNC_4(&VAR_8->txlock);
}
