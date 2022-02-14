
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dma_reg {int dmandptr; int dmadptr; int dmas; int dmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_2,
     struct dma_reg *VAR_3)
{
 if (FUNC_1(&VAR_3->dmac) & VAR_0) {
  FUNC_2(0x10, &VAR_3->dmac);

  while (!(FUNC_1(&VAR_3->dmas) & VAR_1))
   FUNC_0(VAR_2);

  FUNC_2(0, &VAR_3->dmas);
 }

 FUNC_2(0, &VAR_3->dmadptr);
 FUNC_2(0, &VAR_3->dmandptr);
}
