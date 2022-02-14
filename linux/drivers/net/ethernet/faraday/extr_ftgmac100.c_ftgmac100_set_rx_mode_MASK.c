
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftgmac100 {scalar_t__ base; int maht1; int maht0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ftgmac100*) ;
 int FUNC_1 (struct ftgmac100*) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct ftgmac100* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct ftgmac100 *VAR_3 = FUNC_3(VAR_2);


 FUNC_0(VAR_3);


 if (!FUNC_4(VAR_2))
  return;


 FUNC_2(VAR_3->maht0, VAR_3->base + VAR_0);
 FUNC_2(VAR_3->maht1, VAR_3->base + VAR_1);


 FUNC_1(VAR_3);
}
