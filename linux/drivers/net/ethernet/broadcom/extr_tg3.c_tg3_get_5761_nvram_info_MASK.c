
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int nvram_pagesize; void* nvram_size; int nvram_jedecnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (struct tg3*,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_13)
{
 u32 VAR_14, VAR_15 = 0;

 VAR_14 = FUNC_1(VAR_6);


 if (VAR_14 & (1 << 27)) {
  FUNC_0(VAR_13, VAR_8);
  VAR_15 = 1;
 }

 VAR_14 &= VAR_7;
 switch (VAR_14) {
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
  VAR_13->nvram_jedecnum = VAR_1;
  FUNC_0(VAR_13, VAR_5);
  FUNC_0(VAR_13, VAR_0);
  FUNC_0(VAR_13, VAR_3);
  VAR_13->nvram_pagesize = 256;
  break;
 case 134:
 case 133:
 case 132:
 case 135:
 case 130:
 case 129:
 case 128:
 case 131:
  VAR_13->nvram_jedecnum = VAR_2;
  FUNC_0(VAR_13, VAR_5);
  FUNC_0(VAR_13, VAR_0);
  VAR_13->nvram_pagesize = 256;
  break;
 }

 if (VAR_15) {
  VAR_13->nvram_size = FUNC_1(VAR_4);
 } else {
  switch (VAR_14) {
  case 140:
  case 136:
  case 135:
  case 131:
   VAR_13->nvram_size = VAR_11;
   break;
  case 141:
  case 137:
  case 132:
  case 128:
   VAR_13->nvram_size = VAR_9;
   break;
  case 142:
  case 138:
  case 133:
  case 129:
   VAR_13->nvram_size = VAR_12;
   break;
  case 143:
  case 139:
  case 134:
  case 130:
   VAR_13->nvram_size = VAR_10;
   break;
  }
 }
}
