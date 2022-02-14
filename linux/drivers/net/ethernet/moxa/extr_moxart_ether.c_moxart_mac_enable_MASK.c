
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct moxart_mac_priv_t {int reg_imr; int reg_maccr; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct moxart_mac_priv_t* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_11)
{
 struct moxart_mac_priv_t *VAR_12 = FUNC_0(VAR_11);

 FUNC_1(0x00001010, VAR_12->base + VAR_5);
 FUNC_1(0x00000001, VAR_12->base + VAR_2);
 FUNC_1(0x00000390, VAR_12->base + VAR_3);

 VAR_12->reg_imr |= (VAR_7 | VAR_10);
 FUNC_1(VAR_12->reg_imr, VAR_12->base + VAR_4);

 VAR_12->reg_maccr |= (VAR_0 | VAR_9 | VAR_1 | VAR_8);
 FUNC_1(VAR_12->reg_maccr, VAR_12->base + VAR_6);
}
