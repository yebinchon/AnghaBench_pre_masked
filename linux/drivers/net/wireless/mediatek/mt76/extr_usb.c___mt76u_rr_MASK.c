
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
 int VAR_5 ;
 int FUNC_0 (struct mt76_dev*,int ,int,int ,int,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mt76_dev*,int,int) ;

__attribute__((used)) static u32 FUNC_3(struct mt76_dev *VAR_6, u32 VAR_7)
{
 struct mt76_usb *VAR_8 = &VAR_6->usb;
 u32 VAR_9 = ~0;
 u16 VAR_10;
 int VAR_11;
 u8 VAR_12;

 switch (VAR_7 & VAR_3) {
 case 128:
  VAR_12 = VAR_2;
  break;
 case 129:
  VAR_12 = VAR_1;
  break;
 default:
  VAR_12 = VAR_0;
  break;
 }
 VAR_10 = VAR_7 & ~VAR_3;

 VAR_11 = FUNC_0(VAR_6, VAR_12,
         VAR_4 | VAR_5,
         0, VAR_10, &VAR_8->reg_val, sizeof(__le32));
 if (VAR_11 == sizeof(__le32))
  VAR_9 = FUNC_1(VAR_8->reg_val);
 FUNC_2(VAR_6, VAR_7, VAR_9);

 return VAR_9;
}
