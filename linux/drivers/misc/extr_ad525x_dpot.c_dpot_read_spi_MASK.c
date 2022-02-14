
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct dpot_data {int feat; int* rdac_cache; scalar_t__ uid; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct dpot_data*,unsigned int) ;
 int FUNC_2 (struct dpot_data*,unsigned int) ;

__attribute__((used)) static s32 FUNC_3(struct dpot_data *VAR_16, u8 VAR_17)
{
 unsigned int VAR_18 = 0;
 int VAR_19;

 if (!(VAR_17 & (VAR_8 | VAR_7))) {

  if (VAR_16->feat & VAR_13)
   return VAR_16->rdac_cache[VAR_17 & VAR_9];
  if (VAR_16->uid == FUNC_0(VAR_2) ||
   VAR_16->uid == FUNC_0(VAR_3) ||
   VAR_16->uid == FUNC_0(VAR_4)) {

   VAR_19 = FUNC_2(VAR_16,
    VAR_6 << 2);

   if (VAR_16->uid == FUNC_0(VAR_2))
    VAR_19 = VAR_19 >> 2;

   return VAR_19;
  } else if (VAR_16->uid == FUNC_0(VAR_0) ||
   VAR_16->uid == FUNC_0(VAR_1)) {

   VAR_19 = FUNC_2(VAR_16,
    VAR_5 << 2);

   if (VAR_19 < 0)
    return VAR_19;

   if (VAR_16->uid == FUNC_0(VAR_1))
    VAR_19 = VAR_19 >> 2;

   return VAR_19;
  }

  VAR_18 = VAR_11;
 } else if (VAR_17 & VAR_8) {
  VAR_18 = VAR_10;
 }

 if (VAR_16->feat & VAR_14)
  return FUNC_2(VAR_16, VAR_18);
 else if (VAR_16->feat & VAR_15)
  return FUNC_1(VAR_16, VAR_18);

 return -VAR_12;
}
