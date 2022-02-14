
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
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct tg3 *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_3(VAR_5);


 if (VAR_10 & (1 << 27))
  FUNC_1(VAR_9, VAR_8);

 switch (VAR_10 & VAR_6) {
 case 132:
 case 133:
  VAR_9->nvram_jedecnum = VAR_2;
  FUNC_1(VAR_9, VAR_4);
  break;
 case 131:
  VAR_9->nvram_jedecnum = VAR_2;
  FUNC_1(VAR_9, VAR_4);
  FUNC_1(VAR_9, VAR_1);
  break;
 case 130:
 case 129:
 case 128:
  VAR_9->nvram_jedecnum = VAR_3;
  FUNC_1(VAR_9, VAR_4);
  FUNC_1(VAR_9, VAR_1);
  break;
 }

 if (FUNC_0(VAR_9, VAR_1)) {
  FUNC_2(VAR_9, VAR_10);
 } else {

  VAR_9->nvram_pagesize = VAR_0;

  VAR_10 &= ~VAR_7;
  FUNC_4(VAR_5, VAR_10);
 }
}
