
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xrx200_chan {int napi; int dma; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct xrx200_chan *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->dma);
 FUNC_0(&VAR_3->dma);

 FUNC_2(&VAR_3->napi);

 return VAR_0;
}
