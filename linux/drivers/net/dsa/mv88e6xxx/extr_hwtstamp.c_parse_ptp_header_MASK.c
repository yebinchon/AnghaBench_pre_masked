
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {unsigned int len; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static u8 *FUNC_2(struct sk_buff *VAR_6, unsigned int VAR_7)
{
 u8 *VAR_8 = FUNC_1(VAR_6);
 unsigned int VAR_9 = 0;

 if (VAR_7 & VAR_3)
  VAR_9 += VAR_5;

 switch (VAR_7 & VAR_2) {
 case 130:
  VAR_9 += VAR_0 + FUNC_0(VAR_8 + VAR_9) + VAR_4;
  break;
 case 129:
  VAR_9 += VAR_0 + VAR_1 + VAR_4;
  break;
 case 128:
  VAR_9 += VAR_0;
  break;
 default:
  return ((void*)0);
 }


 if (VAR_6->len + VAR_0 < VAR_9 + 34)
  return ((void*)0);

 return VAR_8 + VAR_9;
}
