
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;

void FUNC_4(struct mt76x02_dev *VAR_0, u8 VAR_1, bool VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_0, FUNC_0(VAR_1));
 u32 VAR_4 = FUNC_1(VAR_1);


 if ((VAR_3 & VAR_4) != (VAR_4 * VAR_2))
  FUNC_3(VAR_0, FUNC_0(VAR_1), (VAR_3 & ~VAR_4) | (VAR_4 * VAR_2));
}
