
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int nvram_pagesize; int nvram_size; void* nvram_jedecnum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*,int) ;
 scalar_t__ FUNC_3 (struct tg3*,int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_25)
{
 u32 VAR_26, VAR_27, VAR_28;

 VAR_26 = FUNC_4(VAR_14);
 VAR_27 = VAR_26 & VAR_15;

 if (FUNC_0(VAR_25) == VAR_0) {
  if (!(VAR_26 & VAR_16)) {
   FUNC_1(VAR_25, VAR_10);
   return;
  }

  switch (VAR_27) {
  case 132:
  case 130:
  case 129:
  case 128:
  case 131:
   VAR_25->nvram_pagesize = 4096;
   VAR_25->nvram_jedecnum = VAR_8;
   FUNC_1(VAR_25, VAR_13);
   FUNC_1(VAR_25, VAR_11);
   FUNC_1(VAR_25, VAR_6);
   VAR_28 = FUNC_4(VAR_12);
   VAR_25->nvram_size =
    (1 << (VAR_28 >> VAR_3 &
      VAR_4)
     << VAR_5);
   return;

  case 134:
   VAR_27 = 136;
   break;
  case 133:
   VAR_27 = 135;
   break;
  case 141:



   VAR_27 = 137;
   break;
  }
 }

 switch (VAR_27) {
 case 136:
 case 135:
  VAR_25->nvram_jedecnum = VAR_7;
  FUNC_1(VAR_25, VAR_13);

  VAR_26 &= ~VAR_17;
  FUNC_5(VAR_14, VAR_26);
  if (VAR_27 == 136)
   VAR_25->nvram_pagesize = VAR_2;
  else
   VAR_25->nvram_pagesize = VAR_1;
  return;
 case 150:
 case 165:
 case 164:
 case 149:
 case 163:
 case 162:
 case 148:
 case 161:
 case 160:
 case 147:
 case 159:
 case 166:
  VAR_25->nvram_jedecnum = VAR_7;
  FUNC_1(VAR_25, VAR_13);
  FUNC_1(VAR_25, VAR_6);

  switch (VAR_27) {
  case 149:
  case 163:
  case 162:
   VAR_25->nvram_size = VAR_23;
   break;
  case 148:
  case 161:
  case 160:
   VAR_25->nvram_size = VAR_24;
   break;
  case 147:
  case 159:
   VAR_25->nvram_size = VAR_22;
   break;
  default:
   if (FUNC_0(VAR_25) != VAR_0)
    VAR_25->nvram_size = VAR_21;
   break;
  }
  break;
 case 146:
 case 142:
 case 158:
 case 154:
 case 145:
 case 141:
 case 157:
 case 153:
 case 144:
 case 140:
 case 156:
 case 152:
 case 143:
 case 139:
 case 155:
 case 151:
 case 138:
 case 137:
  VAR_25->nvram_jedecnum = VAR_9;
  FUNC_1(VAR_25, VAR_13);
  FUNC_1(VAR_25, VAR_6);

  switch (VAR_27) {
  case 145:
  case 141:
  case 157:
  case 153:
   VAR_25->nvram_size = VAR_23;
   break;
  case 144:
  case 140:
  case 156:
  case 152:
   VAR_25->nvram_size = VAR_24;
   break;
  case 143:
  case 139:
  case 155:
  case 151:
   VAR_25->nvram_size = VAR_22;
   break;
  default:
   if (FUNC_0(VAR_25) != VAR_0)
    VAR_25->nvram_size = VAR_21;
   break;
  }
  break;
 default:
  FUNC_1(VAR_25, VAR_10);
  return;
 }

 FUNC_2(VAR_25, VAR_26);
 if (VAR_25->nvram_pagesize != 264 && VAR_25->nvram_pagesize != 528)
  FUNC_1(VAR_25, VAR_11);

 if (FUNC_0(VAR_25) == VAR_0) {
  u32 VAR_29;

  if (FUNC_3(VAR_25, 0, &VAR_29))
   return;

  if (VAR_29 != VAR_18 &&
      (VAR_29 & VAR_20) != VAR_19)
   FUNC_1(VAR_25, VAR_10);
 }
}
