
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct mt76x02_dev* private; } ;
struct TYPE_3__ {int seq_pool_len; int seq_len; } ;
struct mt76x02_dfs_pattern_detector {TYPE_2__* stats; TYPE_1__ seq_stats; } ;
struct mt76x02_dev {struct mt76x02_dfs_pattern_detector dfs_pd; } ;
struct TYPE_4__ {int hw_pattern; int hw_pulse_discarded; int sw_pattern; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct mt76x02_dev *VAR_3 = VAR_1->private;
 struct mt76x02_dfs_pattern_detector *VAR_4 = &VAR_3->dfs_pd;
 int VAR_5;

 FUNC_0(VAR_1, "allocated sequences:\t%d\n",
     VAR_4->seq_stats.seq_pool_len);
 FUNC_0(VAR_1, "used sequences:\t\t%d\n",
     VAR_4->seq_stats.seq_len);
 FUNC_1(VAR_1, "\n");

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_1, "engine: %d\n", VAR_5);
  FUNC_0(VAR_1, "  hw pattern detected:\t%d\n",
      VAR_4->stats[VAR_5].hw_pattern);
  FUNC_0(VAR_1, "  hw pulse discarded:\t%d\n",
      VAR_4->stats[VAR_5].hw_pulse_discarded);
  FUNC_0(VAR_1, "  sw pattern detected:\t%d\n",
      VAR_4->stats[VAR_5].sw_pattern);
 }

 return 0;
}
