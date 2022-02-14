
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {unsigned int length; unsigned int actual; scalar_t__ dma; } ;
struct omap_req {unsigned int dma_bytes; TYPE_2__ req; } ;
struct TYPE_3__ {int maxpacket; } ;
struct omap_ep {unsigned int maxpacket; int dma_channel; int lch; int dma_counter; TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (int ,int ,int,unsigned int,int const,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct omap_ep *VAR_10, struct omap_req *VAR_11)
{
 u16 VAR_12, VAR_13;
 unsigned VAR_14 = VAR_11->req.length - VAR_11->req.actual;
 const int VAR_15 = FUNC_2()
    ? VAR_5
    : VAR_4;
 int VAR_16 = 0;


 if ((FUNC_3() && VAR_14 <= VAR_9)
   || (FUNC_2() && VAR_14 < VAR_10->maxpacket)) {
  VAR_12 = VAR_7 | VAR_14;
  FUNC_8(VAR_10->lch, VAR_2,
    VAR_14, 1, VAR_15, VAR_16, 0);
 } else {
  VAR_14 = FUNC_4(VAR_14 / VAR_10->maxpacket,
    (unsigned) VAR_9 + 1);
  VAR_12 = VAR_14;
  FUNC_8(VAR_10->lch, VAR_1,
    VAR_10->ep.maxpacket >> 1, VAR_14, VAR_15,
    VAR_16, 0);
  VAR_14 *= VAR_10->maxpacket;
 }
 FUNC_7(VAR_10->lch, VAR_3,
  VAR_0, VAR_11->req.dma + VAR_11->req.actual,
  0, 0);

 FUNC_9(VAR_10->lch);
 VAR_10->dma_counter = FUNC_5(VAR_10->lch);
 VAR_13 = FUNC_6(VAR_6);
 VAR_13 |= FUNC_1(VAR_10->dma_channel);
 FUNC_10(VAR_13, VAR_6);
 FUNC_10(VAR_8 | VAR_12, FUNC_0(VAR_10->dma_channel));
 VAR_11->dma_bytes = VAR_14;
}
