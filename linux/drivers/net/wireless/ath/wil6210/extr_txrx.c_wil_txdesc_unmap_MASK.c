
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int addr; } ;
struct vring_tx_desc {TYPE_1__ dma; } ;
union wil_tx_desc {struct vring_tx_desc legacy; } ;
typedef int u16 ;
struct wil_ctx {int mapped_as; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;



__attribute__((used)) static void FUNC_4(struct device *VAR_1, union wil_tx_desc *VAR_2,
        struct wil_ctx *VAR_3)
{
 struct vring_tx_desc *VAR_4 = &VAR_2->legacy;
 dma_addr_t VAR_5 = FUNC_3(&VAR_4->dma.addr);
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
