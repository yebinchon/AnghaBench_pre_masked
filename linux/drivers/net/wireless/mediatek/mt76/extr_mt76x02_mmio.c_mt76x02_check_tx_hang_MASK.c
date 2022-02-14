
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ mcu; } ;
struct TYPE_6__ {int tx_dma_idx; TYPE_2__ mmio; } ;
struct mt76x02_dev {scalar_t__ tx_hang_check; TYPE_3__ mt76; int tx_hang_reset; scalar_t__ mcu_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mt76x02_dev *VAR_1)
{
 if (FUNC_1(VAR_1)) {
  if (++VAR_1->tx_hang_check >= VAR_0)
   goto restart;
 } else {
  VAR_1->tx_hang_check = 0;
 }

 if (VAR_1->mcu_timeout)
  goto restart;

 return;

restart:
 FUNC_2(VAR_1);

 FUNC_3(&VAR_1->mt76.mmio.mcu.mutex);
 VAR_1->mcu_timeout = 0;
 FUNC_4(&VAR_1->mt76.mmio.mcu.mutex);

 VAR_1->tx_hang_reset++;
 VAR_1->tx_hang_check = 0;
 FUNC_0(VAR_1->mt76.tx_dma_idx, 0xff,
        sizeof(VAR_1->mt76.tx_dma_idx));
}
