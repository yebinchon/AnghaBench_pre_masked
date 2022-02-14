
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mt76x02_dev *VAR_4, enum nl80211_band VAR_5)
{
 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_4, VAR_2);

  FUNC_3(VAR_4, FUNC_0(5, 0), 0x45);
  FUNC_3(VAR_4, FUNC_0(6, 0), 0x44);

  FUNC_2(VAR_4, VAR_1, 0x00050007);
  FUNC_2(VAR_4, VAR_0, 0x003E0002);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_3);

  FUNC_3(VAR_4, FUNC_0(5, 0), 0x44);
  FUNC_3(VAR_4, FUNC_0(6, 0), 0x45);

  FUNC_2(VAR_4, VAR_1, 0x00000005);
  FUNC_2(VAR_4, VAR_0, 0x01010102);
  break;
 default:
  break;
 }
}
