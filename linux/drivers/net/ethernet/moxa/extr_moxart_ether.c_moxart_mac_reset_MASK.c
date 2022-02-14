
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct moxart_mac_priv_t {int reg_maccr; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct moxart_mac_priv_t* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7)
{
 struct moxart_mac_priv_t *VAR_8 = FUNC_1(VAR_7);

 FUNC_3(VAR_6, VAR_8->base + VAR_3);
 while (FUNC_2(VAR_8->base + VAR_3) & VAR_6)
  FUNC_0(10);

 FUNC_3(0, VAR_8->base + VAR_2);

 VAR_8->reg_maccr = VAR_4 | VAR_1 | VAR_0 | VAR_5;
}
