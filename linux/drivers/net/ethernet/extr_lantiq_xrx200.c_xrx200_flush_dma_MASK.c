
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t desc; struct ltq_dma_desc* desc_base; } ;
struct xrx200_chan {TYPE_1__ dma; } ;
struct ltq_dma_desc {int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct xrx200_chan *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct ltq_dma_desc *VAR_7 = &VAR_5->dma.desc_base[VAR_5->dma.desc];

  if ((VAR_7->ctl & (VAR_2 | VAR_1)) != VAR_1)
   break;

  VAR_7->ctl = VAR_2 | FUNC_0(VAR_3) |
       VAR_4;
  VAR_5->dma.desc++;
  VAR_5->dma.desc %= VAR_0;
 }
}
