
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_2__ {int agc_gain_adjust; int false_cca; int low_gain; int avg_rssi_all; } ;
struct mt76x02_dev {TYPE_1__ cal; } ;


 struct mt76x02_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt76x02_dev *VAR_2 = FUNC_0(VAR_0->private);

 FUNC_1(VAR_0, "avg_rssi: %d\n", VAR_2->cal.avg_rssi_all);
 FUNC_1(VAR_0, "low_gain: %d\n", VAR_2->cal.low_gain);
 FUNC_1(VAR_0, "false_cca: %d\n", VAR_2->cal.false_cca);
 FUNC_1(VAR_0, "agc_gain_adjust: %d\n", VAR_2->cal.agc_gain_adjust);

 return 0;
}
