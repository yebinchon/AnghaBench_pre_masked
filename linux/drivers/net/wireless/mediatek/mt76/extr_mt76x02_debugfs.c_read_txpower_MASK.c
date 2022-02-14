
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct mt76x02_dev {int target_power_delta; int target_power; } ;


 int FUNC_0 (int ) ;
 struct mt76x02_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt76x02_dev *VAR_2 = FUNC_1(VAR_0->private);

 FUNC_3(VAR_0, "Target power: %d\n", VAR_2->target_power);

 FUNC_2(VAR_0, "Delta", VAR_2->target_power_delta,
       FUNC_0(VAR_2->target_power_delta));
 return 0;
}
