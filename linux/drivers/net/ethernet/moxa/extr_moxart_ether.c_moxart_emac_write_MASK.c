
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct moxart_mac_priv_t {scalar_t__ base; } ;


 struct moxart_mac_priv_t* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0,
         unsigned int VAR_1, unsigned long VAR_2)
{
 struct moxart_mac_priv_t *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_3->base + VAR_1);
}
