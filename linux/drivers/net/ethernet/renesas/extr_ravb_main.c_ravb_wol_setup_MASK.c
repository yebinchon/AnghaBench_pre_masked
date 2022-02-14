
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {int emac_irq; int * napi; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct ravb_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int ,int ) ;
 int FUNC_4 (struct net_device*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_9)
{
 struct ravb_private *VAR_10 = FUNC_2(VAR_9);


 FUNC_4(VAR_9, 0, VAR_6);
 FUNC_4(VAR_9, 0, VAR_7);
 FUNC_4(VAR_9, 0, VAR_8);


 FUNC_5(VAR_10->emac_irq);
 FUNC_1(&VAR_10->napi[VAR_5]);
 FUNC_1(&VAR_10->napi[VAR_4]);
 FUNC_4(VAR_9, VAR_3, VAR_2);


 FUNC_3(VAR_9, VAR_0, VAR_1, VAR_1);

 return FUNC_0(VAR_10->emac_irq);
}
