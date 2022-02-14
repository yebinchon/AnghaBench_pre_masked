
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int power; int width; int period; int n_pulses; } ;
struct mt7615_dev {TYPE_2__ mt76; TYPE_1__ radar_pattern; int hw_pattern; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct dentry*,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct mt7615_dev*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dentry* FUNC_5 (TYPE_2__*) ;

int FUNC_6(struct mt7615_dev *VAR_5)
{
 struct dentry *VAR_6;

 VAR_6 = FUNC_5(&VAR_5->mt76);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1("scs", 0600, VAR_6, VAR_5, &VAR_2);
 FUNC_0(VAR_5->mt76.dev, "radio", VAR_6,
        VAR_3);
 FUNC_3("dfs_hw_pattern", 0400, VAR_6, &VAR_5->hw_pattern);

 FUNC_4("pattern_len", 0600, VAR_6,
     &VAR_5->radar_pattern.n_pulses);
 FUNC_3("pulse_period", 0600, VAR_6,
      &VAR_5->radar_pattern.period);
 FUNC_2("pulse_width", 0600, VAR_6,
      &VAR_5->radar_pattern.width);
 FUNC_2("pulse_power", 0600, VAR_6,
      &VAR_5->radar_pattern.power);
 FUNC_1("radar_trigger", 0200, VAR_6, VAR_5,
       &VAR_1);
 FUNC_0(VAR_5->mt76.dev, "temperature", VAR_6,
        VAR_4);

 return 0;
}
