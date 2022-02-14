
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xlgmac_pdata {unsigned int rx_frames; unsigned int rx_usecs; } ;
struct xlgmac_dma_desc {void* desc3; void* desc2; void* desc1; void* desc0; } ;
struct TYPE_5__ {scalar_t__ dma_off; scalar_t__ dma_base; } ;
struct TYPE_4__ {scalar_t__ dma_off; scalar_t__ dma_base; } ;
struct TYPE_6__ {TYPE_2__ buf; TYPE_1__ hdr; } ;
struct xlgmac_desc_data {TYPE_3__ rx; struct xlgmac_dma_desc* dma_desc; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*,int ,int ,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct xlgmac_pdata *VAR_4,
     struct xlgmac_desc_data *VAR_5,
     unsigned int VAR_6)
{
 struct xlgmac_dma_desc *VAR_7 = VAR_5->dma_desc;
 unsigned int VAR_8 = VAR_4->rx_frames;
 unsigned int VAR_9 = VAR_4->rx_usecs;
 dma_addr_t VAR_10, VAR_11;
 unsigned int VAR_12;

 if (!VAR_9 && !VAR_8) {

  VAR_12 = 1;
 } else {

  if (VAR_8 && !((VAR_6 + 1) % VAR_8))
   VAR_12 = 1;
  else
   VAR_12 = 0;
 }
 VAR_10 = VAR_5->rx.hdr.dma_base + VAR_5->rx.hdr.dma_off;
 VAR_11 = VAR_5->rx.buf.dma_base + VAR_5->rx.buf.dma_off;
 VAR_7->desc0 = FUNC_1(FUNC_3(VAR_10));
 VAR_7->desc1 = FUNC_1(FUNC_4(VAR_10));
 VAR_7->desc2 = FUNC_1(FUNC_3(VAR_11));
 VAR_7->desc3 = FUNC_1(FUNC_4(VAR_11));

 VAR_7->desc3 = FUNC_0(
    VAR_7->desc3,
    VAR_1,
    VAR_0,
    VAR_12);





 FUNC_2();

 VAR_7->desc3 = FUNC_0(
    VAR_7->desc3,
    VAR_3,
    VAR_2,
    1);


 FUNC_2();
}
