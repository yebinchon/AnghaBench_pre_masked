
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union wil_tx_desc {int enhanced; } ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {int* d; } ;
struct TYPE_3__ {int length; int addr_high_high; int addr; } ;
struct wil_tx_enhanced_desc {TYPE_2__ mac; TYPE_1__ dma; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wil_tx_enhanced_desc*,int ,int) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(union wil_tx_desc *VAR_3,
    dma_addr_t VAR_4,
    u32 VAR_5,
    int VAR_6)
{
 struct wil_tx_enhanced_desc *VAR_7 =
  (struct wil_tx_enhanced_desc *)&VAR_3->enhanced;

 FUNC_2(VAR_7, 0, sizeof(struct wil_tx_enhanced_desc));

 FUNC_3(&VAR_7->dma.addr, &VAR_7->dma.addr_high_high, VAR_4);


 VAR_7->dma.length = FUNC_1((u16)VAR_5);
 VAR_7->mac.d[0] = (VAR_6 << VAR_2);



 VAR_7->mac.d[2] = FUNC_0(VAR_1) |
        (0x3 << VAR_0);

 return 0;
}
