
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ushc_data {int usb_dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ushc_data *VAR_5, unsigned char VAR_6)
{
 u16 VAR_7;

 switch (VAR_6) {
 case 130:
  VAR_7 = VAR_3;
  break;
 case 128:
 case 129:
  VAR_7 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_5->usb_dev, FUNC_1(VAR_5->usb_dev, 0),
          VAR_1, VAR_4,
          VAR_7, 0, ((void*)0), 0, 100);
}
