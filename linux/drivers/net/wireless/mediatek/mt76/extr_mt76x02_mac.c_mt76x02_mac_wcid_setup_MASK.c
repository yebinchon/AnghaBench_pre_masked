
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt76x02_dev {int dummy; } ;
struct mt76_wcid_addr {int macaddr; } ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ,struct mt76_wcid_addr*,int) ;

void FUNC_6(struct mt76x02_dev *VAR_3, u8 VAR_4,
       u8 VAR_5, u8 *VAR_6)
{
 struct mt76_wcid_addr VAR_7 = {};
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_5 & 7) |
        FUNC_0(VAR_2, !!(VAR_5 & 8));

 FUNC_4(VAR_3, FUNC_2(VAR_4), VAR_8);

 if (VAR_4 >= 128)
  return;

 if (VAR_6)
  FUNC_3(VAR_7.macaddr, VAR_6, VAR_0);

 FUNC_5(VAR_3, FUNC_1(VAR_4), &VAR_7, sizeof(VAR_7));
}
