
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dfs_hw_pulse {int engine; void* burst; void* w2; void* w1; void* period; } ;
struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 void* FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_2,
         struct mt76x02_dfs_hw_pulse *VAR_3)
{
 u32 VAR_4;


 VAR_4 = (VAR_1 << 16) | VAR_3->engine;
 FUNC_2(VAR_2, FUNC_0(VAR_0, 0), VAR_4);


 VAR_3->period = FUNC_1(VAR_2, FUNC_0(VAR_0, 19));


 VAR_3->w1 = FUNC_1(VAR_2, FUNC_0(VAR_0, 20));
 VAR_3->w2 = FUNC_1(VAR_2, FUNC_0(VAR_0, 23));


 VAR_3->burst = FUNC_1(VAR_2, FUNC_0(VAR_0, 22));
}
