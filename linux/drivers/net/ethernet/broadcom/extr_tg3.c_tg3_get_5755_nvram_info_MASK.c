
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int nvram_pagesize; int nvram_size; int nvram_jedecnum; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_11)
{
 u32 VAR_12, VAR_13 = 0;

 VAR_12 = FUNC_1(VAR_4);


 if (VAR_12 & (1 << 27)) {
  FUNC_0(VAR_11, VAR_6);
  VAR_13 = 1;
 }

 VAR_12 &= VAR_5;
 switch (VAR_12) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_11->nvram_jedecnum = VAR_1;
  FUNC_0(VAR_11, VAR_3);
  FUNC_0(VAR_11, VAR_0);
  VAR_11->nvram_pagesize = 264;
  if (VAR_12 == 131 ||
      VAR_12 == 128)
   VAR_11->nvram_size = (VAR_13 ? 0x3e200 :
       VAR_9);
  else if (VAR_12 == 130)
   VAR_11->nvram_size = (VAR_13 ? 0x1f200 :
       VAR_8);
  else
   VAR_11->nvram_size = (VAR_13 ? 0x1f200 :
       VAR_7);
  break;
 case 134:
 case 133:
 case 132:
  VAR_11->nvram_jedecnum = VAR_2;
  FUNC_0(VAR_11, VAR_3);
  FUNC_0(VAR_11, VAR_0);
  VAR_11->nvram_pagesize = 256;
  if (VAR_12 == 134)
   VAR_11->nvram_size = (VAR_13 ?
       VAR_10 :
       VAR_7);
  else if (VAR_12 == 133)
   VAR_11->nvram_size = (VAR_13 ?
       VAR_10 :
       VAR_8);
  else
   VAR_11->nvram_size = (VAR_13 ?
       VAR_7 :
       VAR_9);
  break;
 }
}
