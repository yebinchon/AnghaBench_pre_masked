
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76x02_rx_freq_cal {scalar_t__ lna_gain; scalar_t__* rssi_offset; } ;
struct TYPE_2__ {struct mt76x02_rx_freq_cal rx; } ;
struct mt76x02_dev {TYPE_1__ cal; } ;
typedef int s8 ;



__attribute__((used)) static int
FUNC_0(struct mt76x02_dev *VAR_0, s8 VAR_1, int VAR_2)
{
 struct mt76x02_rx_freq_cal *VAR_3 = &VAR_0->cal.rx;

 VAR_1 += VAR_3->rssi_offset[VAR_2];
 VAR_1 -= VAR_3->lna_gain;

 return VAR_1;
}
