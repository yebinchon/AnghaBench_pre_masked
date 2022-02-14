
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ahc_softc {int dev; } ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {int maxsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int *,int ) ;

int
FUNC_1(struct ahc_softc *VAR_2, bus_dma_tag_t VAR_3, void** VAR_4,
   int VAR_5, bus_dmamap_t *VAR_6)
{

 *VAR_4 = FUNC_0(VAR_2->dev, VAR_3->maxsize, VAR_6, VAR_1);
 if (*VAR_4 == ((void*)0))
  return VAR_0;
 return 0;
}
