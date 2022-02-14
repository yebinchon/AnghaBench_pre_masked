
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int maxpacket; } ;
struct dwc2_hsotg_ep {int dir_in; unsigned int desc_count; scalar_t__ send_zlp; int index; TYPE_1__ ep; } ;
struct dwc2_dma_desc {int status; unsigned int buf; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct dwc2_hsotg_ep*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg_ep *VAR_8,
       struct dwc2_dma_desc **VAR_9,
       dma_addr_t VAR_10,
       unsigned int VAR_11,
       bool VAR_12)
{
 int VAR_13 = VAR_8->dir_in;
 u32 VAR_14 = VAR_8->ep.maxpacket;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 int VAR_18;

 VAR_15 = FUNC_0(VAR_8, &VAR_17);

 VAR_8->desc_count = (VAR_11 / VAR_15) +
    ((VAR_11 % VAR_15) ? 1 : 0);
 if (VAR_11 == 0)
  VAR_8->desc_count = 1;

 for (VAR_18 = 0; VAR_18 < VAR_8->desc_count; ++VAR_18) {
  (*VAR_9)->status = 0;
  (*VAR_9)->status |= (VAR_0
     << VAR_3);

  if (VAR_11 > VAR_15) {
   if (!VAR_8->index && !VAR_13)
    (*VAR_9)->status |= (VAR_5 | VAR_4);

   (*VAR_9)->status |=
    VAR_15 << VAR_6 & VAR_17;
   (*VAR_9)->buf = VAR_10 + VAR_16;

   VAR_11 -= VAR_15;
   VAR_16 += VAR_15;
  } else {
   if (VAR_12)
    (*VAR_9)->status |= (VAR_5 | VAR_4);

   if (VAR_13)
    (*VAR_9)->status |= (VAR_11 % VAR_14) ? VAR_7 :
     ((VAR_8->send_zlp && VAR_12) ?
     VAR_7 : 0);

   (*VAR_9)->status |=
    VAR_11 << VAR_6 & VAR_17;
   (*VAR_9)->buf = VAR_10 + VAR_16;
  }

  (*VAR_9)->status &= ~VAR_2;
  (*VAR_9)->status |= (VAR_1
     << VAR_3);
  (*VAR_9)++;
 }
}
