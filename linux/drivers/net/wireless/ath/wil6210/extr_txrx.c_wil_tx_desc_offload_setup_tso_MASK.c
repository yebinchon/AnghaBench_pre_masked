
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b11; int d0; int ip_length; } ;
struct vring_tx_desc {TYPE_1__ dma; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct vring_tx_desc *VAR_9,
       struct sk_buff *VAR_10,
       int VAR_11, bool VAR_12,
       int VAR_13, int VAR_14)
{
 VAR_9->dma.b11 = VAR_8;
 VAR_9->dma.b11 |= VAR_12 << VAR_7;

 VAR_9->dma.d0 |= (2 << VAR_2);

 VAR_9->dma.d0 |= (VAR_13 & VAR_1);


 VAR_9->dma.d0 |= (FUNC_0(VAR_5)) |
  (VAR_11 << VAR_4);
 VAR_9->dma.d0 |= (VAR_12 << VAR_0);

 VAR_9->dma.ip_length = VAR_14;

 VAR_9->dma.d0 |= FUNC_0(VAR_6);

 VAR_9->dma.d0 |= FUNC_0(VAR_3);
}
