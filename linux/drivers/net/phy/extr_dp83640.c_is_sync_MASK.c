
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; unsigned int len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int*) ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_8, int VAR_9)
{
 u8 *VAR_10 = VAR_8->data, *VAR_11;
 unsigned int VAR_12 = 0;

 if (VAR_9 & VAR_5)
  VAR_12 += VAR_7;

 switch (VAR_9 & VAR_3) {
 case 130:
  VAR_12 += VAR_0 + FUNC_0(VAR_10 + VAR_12) + VAR_6;
  break;
 case 129:
  VAR_12 += VAR_0 + VAR_1 + VAR_6;
  break;
 case 128:
  VAR_12 += VAR_0;
  break;
 default:
  return 0;
 }

 if (VAR_9 & VAR_4)
  VAR_12 += VAR_2;

 if (VAR_8->len < VAR_12 + 1)
  return 0;

 VAR_11 = VAR_10 + VAR_12;

 return (*VAR_11 & 0xf) == 0;
}
