
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {unsigned int len; } ;
struct rxts {int msgtype; scalar_t__ seqid; int hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;



 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_11, unsigned int VAR_12, struct rxts *VAR_13)
{
 u16 *VAR_14, VAR_15;
 unsigned int VAR_16 = 0;
 u8 *VAR_17, *VAR_18 = FUNC_3(VAR_11);



 if (VAR_12 & VAR_8)
  VAR_16 += VAR_10;

 switch (VAR_12 & VAR_6) {
 case 130:
  VAR_16 += VAR_2 + FUNC_0(VAR_18 + VAR_16) + VAR_9;
  break;
 case 129:
  VAR_16 += VAR_2 + VAR_3 + VAR_9;
  break;
 case 128:
  VAR_16 += VAR_2;
  break;
 default:
  return 0;
 }

 if (VAR_11->len + VAR_2 < VAR_16 + VAR_5 + sizeof(*VAR_14))
  return 0;

 if (FUNC_4(VAR_12 & VAR_7))
  VAR_17 = VAR_18 + VAR_16 + VAR_4;
 else
  VAR_17 = VAR_18 + VAR_16;
 if (VAR_13->msgtype != (*VAR_17 & 0xf))
  return 0;

 VAR_14 = (u16 *)(VAR_18 + VAR_16 + VAR_5);
 if (VAR_13->seqid != FUNC_2(*VAR_14))
  return 0;

 VAR_15 = FUNC_1(VAR_0,
    VAR_18 + VAR_16 + VAR_1) >> 20;
 if (VAR_13->hash != VAR_15)
  return 0;

 return 1;
}
