
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {unsigned int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int*) ;



 unsigned int VAR_4 ;


 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_9,
         u8 *VAR_10,
         u8 *VAR_11,
         u16 *VAR_12)
{
 unsigned int VAR_13 = 0;
 unsigned int VAR_14;
 u8 *VAR_15;

 VAR_15 = FUNC_2(VAR_9);
 VAR_14 = FUNC_1(VAR_9);

 switch (VAR_14 & VAR_6) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_1;
 }

 if (VAR_14 & VAR_5)
  VAR_13 += VAR_8;

 switch (VAR_14 & VAR_4) {
 case 132:
  VAR_13 += VAR_2 + FUNC_0(VAR_15 + VAR_13) + VAR_7;
  break;
 case 131:
  VAR_13 += VAR_2 + VAR_3 + VAR_7;
  break;
 case 130:
  VAR_13 += VAR_2;
  break;
 default:
  return -VAR_1;
 }


 if (VAR_9->len < VAR_13 + 34)
  return -VAR_0;

 *VAR_11 = VAR_15[VAR_13] & 0x0f;
 *VAR_10 = VAR_15[VAR_13 + 4];
 *VAR_12 = (u16)(VAR_15[VAR_13 + 30]) << 8 | VAR_15[VAR_13 + 31];
 return 0;
}
