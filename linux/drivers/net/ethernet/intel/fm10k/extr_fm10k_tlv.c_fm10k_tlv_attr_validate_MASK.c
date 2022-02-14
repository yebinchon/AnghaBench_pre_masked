
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_tlv_attr {int id; int type; int len; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







__attribute__((used)) static s32 FUNC_0(u32 *VAR_7,
       const struct fm10k_tlv_attr *VAR_8)
{
 u32 VAR_9 = *VAR_7 & VAR_5;
 u16 VAR_10 = *VAR_7 >> VAR_6;


 if (*VAR_7 & (VAR_3 << VAR_4))
  return VAR_1;


 while (VAR_8->id < VAR_9)
  VAR_8++;


 if (VAR_8->id != VAR_9)
  return VAR_2;


 VAR_7++;

 switch (VAR_8->type) {
 case 130:
  if (!VAR_10 ||
      (VAR_7[(VAR_10 - 1) / 4] & (0xFF << (8 * ((VAR_10 - 1) % 4)))))
   return VAR_1;
  if (VAR_10 > VAR_8->len)
   return VAR_1;
  break;
 case 132:
  if (VAR_10 != VAR_0)
   return VAR_1;
  break;
 case 134:
  if (VAR_10)
   return VAR_1;
  break;
 case 128:
 case 129:
  if (VAR_10 != VAR_8->len)
   return VAR_1;
  break;
 case 133:

  if ((VAR_10 % 4) || VAR_10 != VAR_8->len)
   return VAR_1;
  break;
 case 131:

  if (VAR_10 % 4)
   return VAR_1;
  break;
 default:

  return VAR_1;
 }

 return 0;
}
