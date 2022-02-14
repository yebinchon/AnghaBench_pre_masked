
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int nvram_pagesize; void* nvram_size; void* nvram_jedecnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_12)
{
 u32 VAR_13;

 VAR_13 = FUNC_2(VAR_7);

 switch (VAR_13 & VAR_8) {
 case 141:
 case 138:
  VAR_12->nvram_jedecnum = VAR_2;
  FUNC_0(VAR_12, VAR_6);
  VAR_12->nvram_pagesize = VAR_0;

  VAR_13 &= ~VAR_9;
  FUNC_3(VAR_7, VAR_13);
  return;
 case 140:
 case 145:
 case 144:
 case 139:
 case 143:
 case 142:
 case 146:
  VAR_12->nvram_jedecnum = VAR_2;
  FUNC_0(VAR_12, VAR_6);
  FUNC_0(VAR_12, VAR_1);

  switch (VAR_13 & VAR_8) {
  case 139:

   break;
  case 143:
  case 142:
   VAR_12->nvram_size = VAR_11;
   break;
  default:
   VAR_12->nvram_size = VAR_10;
   break;
  }
  break;
 case 131:
 case 135:
 case 129:
 case 133:
 case 130:
 case 134:
 case 128:
 case 132:
 case 137:
 case 136:
  VAR_12->nvram_jedecnum = VAR_3;
  FUNC_0(VAR_12, VAR_6);
  FUNC_0(VAR_12, VAR_1);

  switch (VAR_13 & VAR_8) {
  case 130:
  case 128:

   break;
  case 134:
  case 132:
   VAR_12->nvram_size = VAR_11;
   break;
  default:
   VAR_12->nvram_size = VAR_10;
   break;
  }
  break;
 default:
  FUNC_0(VAR_12, VAR_4);
  return;
 }

 FUNC_1(VAR_12, VAR_13);
 if (VAR_12->nvram_pagesize != 264 && VAR_12->nvram_pagesize != 528)
  FUNC_0(VAR_12, VAR_5);
}
