
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; scalar_t__ dma; } ;
struct corkscrew_private {scalar_t__ dev; int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct corkscrew_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3)
{
 struct corkscrew_private *VAR_4 = FUNC_2(VAR_3);
 FUNC_1(&VAR_4->list);
 if (VAR_3->dma)
  FUNC_0(VAR_3->dma);
 FUNC_3(VAR_2, VAR_3->base_addr + VAR_1);
 FUNC_5(VAR_3->base_addr, VAR_0);
 if (VAR_4->dev)
  FUNC_4(FUNC_6(VAR_4->dev));
}
