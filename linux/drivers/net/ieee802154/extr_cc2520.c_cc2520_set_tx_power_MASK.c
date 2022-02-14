
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cc2520_private {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cc2520_private*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct cc2520_private *VAR_2, s32 VAR_3)
{
 u8 VAR_4;

 switch (VAR_3) {
 case 500:
  VAR_4 = 0xF7;
  break;
 case 300:
  VAR_4 = 0xF2;
  break;
 case 200:
  VAR_4 = 0xAB;
  break;
 case 100:
  VAR_4 = 0x13;
  break;
 case 0:
  VAR_4 = 0x32;
  break;
 case -200:
  VAR_4 = 0x81;
  break;
 case -400:
  VAR_4 = 0x88;
  break;
 case -700:
  VAR_4 = 0x2C;
  break;
 case -1800:
  VAR_4 = 0x03;
  break;
 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_2, VAR_0, VAR_4);
}
