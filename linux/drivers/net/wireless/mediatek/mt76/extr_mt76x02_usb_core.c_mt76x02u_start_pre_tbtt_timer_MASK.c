
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mt76x02_dev {int pre_tbtt_timer; int pre_tbtt_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_5)
{
 u64 VAR_6;
 u32 VAR_7;


 VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_2);
 VAR_7 *= 32;

 if (VAR_7 <= VAR_3) {
  FUNC_2(VAR_4, &VAR_5->pre_tbtt_work);
  return;
 }

 VAR_6 = (VAR_7 - VAR_3) * 1000ull;
 FUNC_0(&VAR_5->pre_tbtt_timer, VAR_6, VAR_0);
}
