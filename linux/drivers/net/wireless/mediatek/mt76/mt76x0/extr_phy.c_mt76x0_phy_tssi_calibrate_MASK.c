
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt76x02_dev {int dummy; } ;
typedef int s8 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int ,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct mt76x02_dev*,int,int*,int *,int *) ;
 scalar_t__ FUNC_3 (struct mt76x02_dev*,int *,int*) ;

__attribute__((used)) static void FUNC_4(struct mt76x02_dev *VAR_2)
{
 s8 VAR_3, VAR_4;
 u8 VAR_5[3], VAR_6;
 s16 VAR_7;
 s8 VAR_8;

 if (FUNC_3(VAR_2, &VAR_7, VAR_5) < 0)
  return;

 VAR_6 = VAR_5[0] & 0x7;
 if (FUNC_2(VAR_2, VAR_6, VAR_5,
     &VAR_3, &VAR_4) < 0)
  return;

 VAR_8 = FUNC_1(VAR_2, VAR_6, VAR_3,
      VAR_4, VAR_7);
 FUNC_0(VAR_2, VAR_0, VAR_1, VAR_8);
}
