
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt76x02_rx_freq_cal {int freq_offset; } ;
struct TYPE_2__ {struct mt76x02_rx_freq_cal rx; } ;
struct mt76x02_dev {TYPE_1__ cal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_2)
{
 struct mt76x02_rx_freq_cal *VAR_3 = &VAR_2->cal.rx;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (!FUNC_1(VAR_4))
  VAR_4 = 0;
 VAR_3->freq_offset = VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1) >> 8;
 if (!FUNC_1(VAR_4))
  VAR_4 = 0;

 VAR_3->freq_offset -= FUNC_2(VAR_4, 8);
}
