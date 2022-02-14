
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int l4_hdr_len; int cmd; int w1; int ip_length; int b11; } ;
struct TYPE_3__ {int* d; int tso_mss; } ;
struct wil_tx_enhanced_desc {TYPE_2__ dma; TYPE_1__ mac; } ;


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
 int VAR_9 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct wil_tx_enhanced_desc *VAR_10,
            int VAR_11, bool VAR_12,
            int VAR_13,
            int VAR_14,
            int VAR_15)
{

 VAR_10->mac.d[2] |= 1;

 VAR_10->mac.tso_mss |= FUNC_1(VAR_15 >> 2);

 VAR_10->dma.l4_hdr_len |= VAR_13 & VAR_0;



 VAR_10->dma.cmd |= FUNC_0(VAR_3) |
        VAR_11 << VAR_9 |
        FUNC_0(VAR_8) |
        FUNC_0(VAR_4) |
        FUNC_0(VAR_5);

 VAR_10->dma.w1 |= FUNC_0(VAR_7) |
       FUNC_0(VAR_6);

 VAR_10->dma.ip_length |= VAR_14;

 VAR_10->dma.b11 |= VAR_2 |
        VAR_12 << VAR_1;
}
