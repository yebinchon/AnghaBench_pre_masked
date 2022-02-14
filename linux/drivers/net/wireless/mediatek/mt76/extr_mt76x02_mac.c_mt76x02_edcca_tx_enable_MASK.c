
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int ed_tx_blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mt76x02_dev *VAR_9, bool VAR_10)
{
 if (VAR_10) {
  u32 VAR_11;

  FUNC_2(VAR_9, VAR_2, VAR_3);
  FUNC_2(VAR_9, VAR_0, VAR_1);

  VAR_11 = FUNC_1(VAR_9, VAR_4);
  VAR_11 |= VAR_6 |
   VAR_5 |
   VAR_7 |
   VAR_8;
  FUNC_3(VAR_9, VAR_4, VAR_11);
 } else {
  FUNC_0(VAR_9, VAR_2, VAR_3);
  FUNC_0(VAR_9, VAR_0, VAR_1);

  FUNC_0(VAR_9, VAR_4, VAR_6);
  FUNC_0(VAR_9, VAR_4, VAR_5);
 }
 VAR_9->ed_tx_blocked = !VAR_10;
}
