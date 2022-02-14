
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct mt76x02_dev *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_0(VAR_4, VAR_0);

 VAR_6 &= ~VAR_1;

 if (VAR_6 & VAR_2) {
  VAR_6 |= VAR_3;
  FUNC_1(VAR_4, VAR_0, VAR_6);
  FUNC_3(20);

  VAR_6 &= ~VAR_3;
 }

 FUNC_1(VAR_4, VAR_0, VAR_6);
 FUNC_3(20);

out:
 FUNC_2(VAR_4, VAR_5);
}
