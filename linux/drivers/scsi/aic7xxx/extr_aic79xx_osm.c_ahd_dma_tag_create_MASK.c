
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ahd_softc {int dummy; } ;
typedef int dma_addr_t ;
typedef void* bus_size_t ;
typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_dma_filter_t ;
struct TYPE_5__ {void* maxsize; void* boundary; void* alignment; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;

int
FUNC_1(struct ahd_softc *VAR_2, bus_dma_tag_t VAR_3,
     bus_size_t VAR_4, bus_size_t VAR_5,
     dma_addr_t VAR_6, dma_addr_t VAR_7,
     bus_dma_filter_t *VAR_8, void *VAR_9,
     bus_size_t VAR_10, int VAR_11,
     bus_size_t VAR_12, int VAR_13, bus_dma_tag_t *VAR_14)
{
 bus_dma_tag_t VAR_15;

 VAR_15 = FUNC_0(sizeof(*VAR_15), VAR_1);
 if (VAR_15 == ((void*)0))
  return (VAR_0);
 VAR_15->alignment = VAR_4;
 VAR_15->boundary = VAR_5;
 VAR_15->maxsize = VAR_10;
 *VAR_14 = VAR_15;
 return (0);
}
