
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lynxfb_output {int paths; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;





 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*) ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_3(struct lynxfb_output *VAR_12, int VAR_13)
{
 unsigned int VAR_14, VAR_15, VAR_16;

 VAR_14 = 0;
 VAR_15 = 0;
 VAR_16 = 0;

 switch (VAR_13) {
 case 129:
  FUNC_2("flag = FB_BLANK_UNBLANK\n");
  VAR_14 = VAR_9;
  VAR_15 = VAR_3;
  break;
 case 131:
  FUNC_2("flag = FB_BLANK_NORMAL\n");
  VAR_14 = VAR_9;
  VAR_16 = VAR_1;
  break;
 case 128:
  VAR_14 = VAR_7;
  VAR_16 = VAR_1;
  break;
 case 132:
  VAR_14 = VAR_8;
  VAR_16 = VAR_1;
  break;
 case 130:
  VAR_14 = VAR_6;
  VAR_16 = VAR_1;
  break;
 }

 if (VAR_12->paths & VAR_10) {
  unsigned int VAR_17 = FUNC_0(VAR_4) & ~VAR_5;

  FUNC_1(VAR_4, VAR_17 | VAR_14);

  VAR_17 = FUNC_0(VAR_0) & ~VAR_1;
  FUNC_1(VAR_0, VAR_17 | VAR_16);
 }

 if (VAR_12->paths & VAR_11) {
  unsigned int VAR_18 = FUNC_0(VAR_2);

  VAR_18 &= ~VAR_3;
  VAR_18 |= VAR_15;
  FUNC_1(VAR_2, VAR_18);
 }

 return 0;
}
