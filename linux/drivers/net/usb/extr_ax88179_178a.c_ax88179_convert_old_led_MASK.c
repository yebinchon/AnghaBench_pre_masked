
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct usbnet*,int ,int,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_12, u16 *VAR_13)
{
 u16 VAR_14;


 if (FUNC_0(VAR_12, VAR_0, 0x3C, 1, 2, &VAR_14) < 0)
  return -VAR_1;

 VAR_14 >>= 8;
 switch (VAR_14) {
 case 0xFF:
  VAR_14 = VAR_2 | VAR_4 | VAR_5 |
        VAR_6 | VAR_7 | VAR_8 |
        VAR_9 | VAR_10 | VAR_11;
  break;
 case 0xFE:
  VAR_14 = VAR_2 | VAR_6 | VAR_9 | VAR_11;
  break;
 case 0xFD:
  VAR_14 = VAR_2 | VAR_6 | VAR_9 |
        VAR_8 | VAR_11;
  break;
 case 0xFC:
  VAR_14 = VAR_2 | VAR_3 | VAR_6 | VAR_7 |
        VAR_9 | VAR_8 | VAR_11;
  break;
 default:
  VAR_14 = VAR_2 | VAR_4 | VAR_5 |
        VAR_6 | VAR_7 | VAR_8 |
        VAR_9 | VAR_10 | VAR_11;
  break;
 }

 *VAR_13 = VAR_14;

 return 0;
}
