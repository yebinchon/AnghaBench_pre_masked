
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int dummy; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct mmc_command*) ;
 int FUNC_2 (struct mmc_command*) ;

__attribute__((used)) static unsigned int FUNC_3(struct mmc_command *VAR_9)
{
 unsigned int VAR_10 = 0;

 switch (FUNC_2(VAR_9)) {
 case 132:
  VAR_10 |= VAR_5;
  break;
 case 130:
  VAR_10 |= VAR_4;

 case 131:
  VAR_10 |= VAR_6;
  break;
 case 129:
  VAR_10 |= VAR_7;
  break;
 case 128:
  VAR_10 |= VAR_8;
  break;
 default:
  FUNC_0();
 }

 switch (FUNC_1(VAR_9)) {
 case 134:
  VAR_10 |= VAR_2;
  break;
 case 133:
  VAR_10 |= VAR_3;
  break;
 case 136:
  VAR_10 |= VAR_0;
  break;
 case 135:
  VAR_10 |= VAR_1;
  break;
 default:
  FUNC_0();
 }
 return VAR_10;
}
