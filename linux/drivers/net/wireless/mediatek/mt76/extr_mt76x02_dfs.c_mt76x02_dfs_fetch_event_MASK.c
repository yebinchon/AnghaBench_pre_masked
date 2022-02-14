
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dfs_event {int width; int ts; int engine; } ;
struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mt76x02_dev*,int ) ;

__attribute__((used)) static bool FUNC_6(struct mt76x02_dev *VAR_1,
        struct mt76x02_dfs_event *VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_5(VAR_1, FUNC_0(VAR_0, 37));
 if (!FUNC_1(VAR_3))
  return 0;

 VAR_2->engine = FUNC_2(VAR_3);
 VAR_3 = FUNC_5(VAR_1, FUNC_0(VAR_0, 37));
 VAR_2->ts = FUNC_3(VAR_3);
 VAR_3 = FUNC_5(VAR_1, FUNC_0(VAR_0, 37));
 VAR_2->width = FUNC_4(VAR_3);

 return 1;
}
