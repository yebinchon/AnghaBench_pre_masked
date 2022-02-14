
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {unsigned int length; unsigned int actual; unsigned int dma; } ;
struct omap_req {unsigned int dma_bytes; TYPE_2__ req; } ;
struct TYPE_3__ {unsigned int maxpacket; } ;
struct omap_ep {int bEndpointAddress; int lch; int dma_channel; int dma_counter; TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,unsigned int,int ,int ) ;
 int FUNC_6 (int ,int ,int,unsigned int,int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct omap_ep *VAR_10, struct omap_req *VAR_11)
{
 unsigned VAR_12 = VAR_11->req.length - VAR_11->req.actual;
 int VAR_13 = 0;
 u16 VAR_14;


 VAR_12 /= VAR_10->ep.maxpacket;
 VAR_12 = FUNC_2(VAR_12, (unsigned)VAR_8 + 1);
 VAR_11->dma_bytes = VAR_12 * VAR_10->ep.maxpacket;
 FUNC_6(VAR_10->lch, VAR_1,
   VAR_10->ep.maxpacket >> 1, VAR_12,
   VAR_3,
   VAR_13, 0);
 FUNC_5(VAR_10->lch, VAR_2,
  VAR_0, VAR_11->req.dma + VAR_11->req.actual,
  0, 0);
 VAR_10->dma_counter = FUNC_3(VAR_10->lch);

 FUNC_8(VAR_7 | (VAR_12 - 1), FUNC_0(VAR_10->dma_channel));
 VAR_14 = FUNC_4(VAR_5);
 VAR_14 |= FUNC_1(VAR_10->dma_channel);
 FUNC_8(VAR_14, VAR_5);
 FUNC_8(VAR_10->bEndpointAddress & 0xf, VAR_6);
 FUNC_8(VAR_9, VAR_4);

 FUNC_7(VAR_10->lch);
}
