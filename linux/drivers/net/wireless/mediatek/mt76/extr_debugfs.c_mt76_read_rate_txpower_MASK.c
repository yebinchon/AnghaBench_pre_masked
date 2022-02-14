
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_2__ {int vht; int ht; int stbc; int ofdm; int cck; } ;
struct mt76_dev {TYPE_1__ rate_power; } ;


 int FUNC_0 (int ) ;
 struct mt76_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt76_dev *VAR_2 = FUNC_1(VAR_0->private);

 FUNC_2(VAR_0, "CCK", VAR_2->rate_power.cck,
       FUNC_0(VAR_2->rate_power.cck));
 FUNC_2(VAR_0, "OFDM", VAR_2->rate_power.ofdm,
       FUNC_0(VAR_2->rate_power.ofdm));
 FUNC_2(VAR_0, "STBC", VAR_2->rate_power.stbc,
       FUNC_0(VAR_2->rate_power.stbc));
 FUNC_2(VAR_0, "HT", VAR_2->rate_power.ht,
       FUNC_0(VAR_2->rate_power.ht));
 FUNC_2(VAR_0, "VHT", VAR_2->rate_power.vht,
       FUNC_0(VAR_2->rate_power.vht));
 return 0;
}
