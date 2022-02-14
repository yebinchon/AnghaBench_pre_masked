
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct moxart_mac_priv_t {scalar_t__ base; int napi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct moxart_mac_priv_t* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct moxart_mac_priv_t *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->napi);

 FUNC_2(VAR_2);


 FUNC_3(0, VAR_3->base + VAR_0);


 FUNC_3(0, VAR_3->base + VAR_1);

 return 0;
}
