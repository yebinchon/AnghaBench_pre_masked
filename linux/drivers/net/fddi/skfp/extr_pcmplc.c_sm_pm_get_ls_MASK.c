
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_smc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;






 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct s_smc*,int) ;

int FUNC_3(struct s_smc *VAR_8, int VAR_9)
{
 int VAR_10 ;






 VAR_10 = FUNC_1(FUNC_0(VAR_9,VAR_7)) & VAR_6 ;
 switch(VAR_10) {
 case 128:
  VAR_10 = VAR_5 ;
  break ;
 case 129:
  VAR_10 = VAR_4 ;
  break ;
 case 132:
  VAR_10 = VAR_0 ;
  break ;
 case 130:
 case 131:
  VAR_10 = VAR_1 ;
  break ;
 case 133:
  VAR_10 = VAR_3 ;
  break ;
 default :
  VAR_10 = VAR_2 ;
 }
 return VAR_10;
}
