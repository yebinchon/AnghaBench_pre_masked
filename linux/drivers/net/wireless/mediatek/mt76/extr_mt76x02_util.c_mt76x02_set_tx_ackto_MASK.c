
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mt76x02_dev {int coverage_class; scalar_t__ slottime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ,scalar_t__) ;

void FUNC_2(struct mt76x02_dev *VAR_6)
{
 u8 VAR_7, VAR_8, VAR_9 = VAR_6->slottime;


 VAR_9 += 3 * VAR_6->coverage_class;
 FUNC_1(VAR_6, VAR_0,
         VAR_1, VAR_9);

 VAR_8 = FUNC_0(VAR_6, VAR_4,
         VAR_5);

 VAR_7 = VAR_9 + VAR_8;
 FUNC_1(VAR_6, VAR_2,
         VAR_3, VAR_7);
}
