
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union wil_tx_desc {int dummy; } wil_tx_desc ;
typedef int u16 ;
struct TYPE_2__ {int length; } ;
struct wil_tx_enhanced_desc {TYPE_1__ dma; } ;
struct wil_ctx {int mapped_as; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;


 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1,
       union wil_tx_desc *VAR_2,
       struct wil_ctx *VAR_3)
{
 struct wil_tx_enhanced_desc *VAR_4 = (struct wil_tx_enhanced_desc *)VAR_2;
 dma_addr_t VAR_5 = FUNC_3(&VAR_4->dma);
 u16 VAR_6 = FUNC_2(VAR_4->dma.length);

 switch (VAR_3->mapped_as) {
 case 128:
  FUNC_1(VAR_1, VAR_5, VAR_6, VAR_0);
  break;
 case 129:
  FUNC_0(VAR_1, VAR_5, VAR_6, VAR_0);
  break;
 default:
  break;
 }
}
