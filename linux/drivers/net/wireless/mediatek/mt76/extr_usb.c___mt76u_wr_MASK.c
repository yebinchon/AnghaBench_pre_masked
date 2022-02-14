
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mt76_usb {int reg_val; } ;
struct mt76_dev {struct mt76_usb usb; } ;
typedef int __le32 ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mt76_dev*,int ,int,int ,int,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt76_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct mt76_dev *VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct mt76_usb *VAR_8 = &VAR_5->usb;
 u16 VAR_9;
 u8 VAR_10;

 switch (VAR_6 & VAR_1) {
 case 128:
  VAR_10 = VAR_2;
  break;
 default:
  VAR_10 = VAR_0;
  break;
 }
 VAR_9 = VAR_6 & ~VAR_1;

 VAR_8->reg_val = FUNC_1(VAR_7);
 FUNC_0(VAR_5, VAR_10,
          VAR_3 | VAR_4, 0,
          VAR_9, &VAR_8->reg_val, sizeof(__le32));
 FUNC_2(VAR_5, VAR_6, VAR_7);
}
