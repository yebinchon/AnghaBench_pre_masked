
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct fm10k_tlv_attr {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (size_t*,struct fm10k_tlv_attr const*) ;

__attribute__((used)) static s32 FUNC_2(u32 *VAR_5, u32 **VAR_6,
    const struct fm10k_tlv_attr *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10 = 0;
 s32 VAR_11;
 u16 VAR_12;


 if (!VAR_5 || !VAR_6)
  return VAR_0;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_6[VAR_8] = ((void*)0);


 VAR_12 = *VAR_5 >> VAR_3;


 if (!VAR_12)
  return 0;


 if (!VAR_7) {
  VAR_6[0] = VAR_5;
  return 0;
 }


 VAR_5++;


 while (VAR_10 < VAR_12) {
  VAR_9 = *VAR_5 & VAR_2;

  if (VAR_9 >= VAR_4)
   return VAR_1;

  VAR_11 = FUNC_1(VAR_5, VAR_7);
  if (VAR_11 == VAR_1)
   ;
  else if (VAR_11)
   return VAR_11;
  else
   VAR_6[VAR_9] = VAR_5;


  VAR_10 += FUNC_0(*VAR_5) * 4;


  VAR_5 = &VAR_5[FUNC_0(*VAR_5)];
 }


 if (VAR_10 != VAR_12)
  return VAR_0;

 return 0;
}
