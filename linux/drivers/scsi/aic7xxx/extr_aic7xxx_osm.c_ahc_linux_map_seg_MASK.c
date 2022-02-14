
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scb {scalar_t__ sg_count; TYPE_1__* platform_data; } ;
struct ahc_softc {int flags; } ;
struct ahc_dma_seg {void* len; void* addr; } ;
typedef int dma_addr_t ;
typedef int bus_size_t ;
struct TYPE_2__ {int xfer_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_3, struct scb *VAR_4,
    struct ahc_dma_seg *VAR_5, dma_addr_t VAR_6, bus_size_t VAR_7)
{
 int VAR_8;

 if ((VAR_4->sg_count + 1) > VAR_1)
  FUNC_1("Too few segs for dma mapping.  "
        "Increase AHC_NSEG\n");

 VAR_8 = 1;
 VAR_5->addr = FUNC_0(VAR_6 & 0xFFFFFFFF);
 VAR_4->platform_data->xfer_len += VAR_7;

 if (sizeof(dma_addr_t) > 4
  && (VAR_3->flags & VAR_0) != 0)
  VAR_7 |= (VAR_6 >> 8) & VAR_2;

 VAR_5->len = FUNC_0(VAR_7);
 return (VAR_8);
}
