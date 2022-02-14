
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

__attribute__((used)) static inline int FUNC_1(struct cc2520_private *VAR_2,
          s32 VAR_3)
{
 u8 VAR_4;

 switch (VAR_3) {
 case 1700:
  VAR_4 = 0xF9;
  break;
 case 1600:
  VAR_4 = 0xF0;
  break;
 case 1400:
  VAR_4 = 0xA0;
  break;
 case 1100:
  VAR_4 = 0x2C;
  break;
 case -100:
  VAR_4 = 0x03;
  break;
 case -800:
  VAR_4 = 0x01;
  break;
 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_2, VAR_0, VAR_4);
}
