
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bgmac_slot_info {scalar_t__ dma_addr; int buf; } ;
struct bgmac_dma_ring {struct bgmac_slot_info* slots; } ;
struct bgmac {struct device* dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bgmac *VAR_3,
       struct bgmac_dma_ring *VAR_4)
{
 struct device *VAR_5 = VAR_3->dma_dev;
 struct bgmac_slot_info *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = &VAR_4->slots[VAR_7];
  if (!VAR_6->dma_addr)
   continue;

  FUNC_0(VAR_5, VAR_6->dma_addr,
     VAR_0,
     VAR_2);
  FUNC_1(FUNC_2(VAR_6->buf));
  VAR_6->dma_addr = 0;
 }
}
