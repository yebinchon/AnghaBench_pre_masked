
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int nvram_pagesize; void* nvram_jedecnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_5);

 switch (VAR_9 & VAR_6) {
 case 130:
 case 131:
 case 128:
 case 129:
  VAR_8->nvram_jedecnum = VAR_2;
  FUNC_0(VAR_8, VAR_4);
  VAR_8->nvram_pagesize = VAR_0;

  VAR_9 &= ~VAR_7;
  FUNC_2(VAR_5, VAR_9);
  break;
 case 138:
 case 134:
 case 133:
 case 132:
  VAR_8->nvram_jedecnum = VAR_2;
  FUNC_0(VAR_8, VAR_4);
  FUNC_0(VAR_8, VAR_1);
  VAR_8->nvram_pagesize = 264;
  break;
 case 137:
 case 136:
 case 135:
  VAR_8->nvram_jedecnum = VAR_3;
  FUNC_0(VAR_8, VAR_4);
  FUNC_0(VAR_8, VAR_1);
  VAR_8->nvram_pagesize = 256;
  break;
 }
}
