
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u16 ;
struct dpot_data {int feat; size_t* rdac_cache; scalar_t__ uid; int devid; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;




 size_t FUNC_1 (int ) ;
 size_t VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 size_t VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 size_t VAR_22 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (struct dpot_data*,unsigned int) ;
 int FUNC_4 (struct dpot_data*,unsigned int,size_t) ;
 int FUNC_5 (struct dpot_data*,unsigned int,size_t) ;

__attribute__((used)) static s32 FUNC_6(struct dpot_data *VAR_29, u8 VAR_30, u16 VAR_31)
{
 unsigned int VAR_32 = 0;

 if (!(VAR_30 & (VAR_14 | VAR_13 | VAR_15))) {
  if (VAR_29->feat & VAR_25)
   VAR_29->rdac_cache[VAR_30 & VAR_16] = VAR_31;

  if (VAR_29->feat & VAR_24) {
   if (VAR_29->feat & VAR_28) {
    VAR_32 = ((VAR_30 & VAR_16) <<
     FUNC_1(VAR_29->devid)) |
     VAR_31;
    return FUNC_3(VAR_29, VAR_32);
   } else if (VAR_29->feat & VAR_26) {
    VAR_32 = ((VAR_30 & VAR_16) <<
     FUNC_1(VAR_29->devid)) |
     VAR_31;
    return FUNC_5(VAR_29, VAR_32 >> 8,
     VAR_32 & 0xFF);
   } else
    FUNC_0();
  } else {
   if (VAR_29->uid == FUNC_2(VAR_2) ||
    VAR_29->uid == FUNC_2(VAR_3) ||
    VAR_29->uid == FUNC_2(VAR_4)) {

    FUNC_5(VAR_29, VAR_9 << 2,
      VAR_12);

    if (VAR_29->uid == FUNC_2(VAR_2))
     VAR_31 = VAR_31 << 2;

    return FUNC_5(VAR_29,
     (VAR_10 << 2) |
     (VAR_31 >> 8), VAR_31 & 0xFF);
   } else if (VAR_29->uid == FUNC_2(VAR_0) ||
    VAR_29->uid == FUNC_2(VAR_1)) {
    FUNC_5(VAR_29,
      VAR_5 << 2,
      VAR_8);

    if (VAR_29->uid == FUNC_2(VAR_1))
     VAR_31 = VAR_31 << 2;

    return FUNC_5(VAR_29,
     (VAR_6 << 2) |
     (VAR_31 >> 8), VAR_31 & 0xFF);
   }
   VAR_32 = VAR_22 | (VAR_30 & VAR_16);
  }
 } else if (VAR_30 & VAR_14) {
  VAR_32 = VAR_19 | (VAR_30 & VAR_16);
 } else if (VAR_30 & VAR_13) {
  switch (VAR_30) {
  case 130:
   VAR_32 = VAR_18;
   break;
  case 128:
   VAR_32 = VAR_21;
   break;
  case 131:
   VAR_32 = VAR_17;
   break;
  case 129:
   VAR_32 = VAR_20;
   break;
  }
 } else if (VAR_30 & VAR_15) {
  if (VAR_29->uid == FUNC_2(VAR_2) ||
   VAR_29->uid == FUNC_2(VAR_3)) {
   return FUNC_5(VAR_29,
    VAR_11 << 2, 0);
  } else if (VAR_29->uid == FUNC_2(VAR_0) ||
   VAR_29->uid == FUNC_2(VAR_1)) {
   return FUNC_5(VAR_29,
    VAR_7 << 2, 0);
  }
 } else
  FUNC_0();

 if (VAR_29->feat & VAR_26)
  return FUNC_5(VAR_29, VAR_32, VAR_31);
 else if (VAR_29->feat & VAR_27)
  return FUNC_4(VAR_29, VAR_32, VAR_31);

 return -VAR_23;
}
