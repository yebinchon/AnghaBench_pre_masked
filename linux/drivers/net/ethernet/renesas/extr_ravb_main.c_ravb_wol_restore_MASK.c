
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {int emac_irq; int * napi; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct ravb_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct ravb_private *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 FUNC_1(&VAR_5->napi[VAR_3]);
 FUNC_1(&VAR_5->napi[VAR_2]);


 FUNC_4(VAR_4, VAR_0, VAR_1, 0);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_5->emac_irq);
}
