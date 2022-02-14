
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int* data; unsigned int len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_9, unsigned int VAR_10,
        u16 VAR_11, u8 VAR_12)
{
 u16 *VAR_13;
 unsigned int VAR_14 = 0;
 u8 *VAR_15, *VAR_16 = VAR_9->data;

 if (VAR_10 & VAR_6)
  VAR_14 += VAR_8;

 switch (VAR_10 & VAR_4) {
 case 130:
  VAR_14 += VAR_0 + FUNC_0(VAR_16 + VAR_14) + VAR_7;
  break;
 case 129:
  VAR_14 += VAR_0 + VAR_1 + VAR_7;
  break;
 case 128:
  VAR_14 += VAR_0;
  break;
 default:
  return 0;
 }

 if (VAR_9->len + VAR_0 < VAR_14 + VAR_3 + sizeof(*VAR_13))
  return 0;

 if (FUNC_2(VAR_10 & VAR_5))
  VAR_15 = VAR_16 + VAR_14 + VAR_2;
 else
  VAR_15 = VAR_16 + VAR_14;

 VAR_13 = (u16 *)(VAR_16 + VAR_14 + VAR_3);

 return (VAR_12 == (*VAR_15 & 0xf) && VAR_11 == FUNC_1(*VAR_13));
}
