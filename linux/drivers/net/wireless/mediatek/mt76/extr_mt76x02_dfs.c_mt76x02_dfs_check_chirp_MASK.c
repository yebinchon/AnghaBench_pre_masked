
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dfs_pattern_detector {int chirp_pulse_ts; int chirp_pulse_cnt; } ;
struct mt76x02_dev {struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;

__attribute__((used)) static bool FUNC_1(struct mt76x02_dev *VAR_1)
{
 bool VAR_2 = 0;
 u32 VAR_3, VAR_4;
 struct mt76x02_dfs_pattern_detector *VAR_5 = &VAR_1->dfs_pd;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_4 = VAR_3 - VAR_5->chirp_pulse_ts;
 VAR_5->chirp_pulse_ts = VAR_3;


 if (VAR_4 <= (12 * (1 << 20))) {
  if (++VAR_5->chirp_pulse_cnt > 8)
   VAR_2 = 1;
 } else {
  VAR_5->chirp_pulse_cnt = 1;
 }

 return VAR_2;
}
