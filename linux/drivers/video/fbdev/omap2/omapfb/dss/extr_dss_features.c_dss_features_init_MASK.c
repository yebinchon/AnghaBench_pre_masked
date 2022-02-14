
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omapdss_version { ____Placeholder_omapdss_version } omapdss_version ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

void FUNC_1(enum omapdss_version VAR_10)
{
 switch (VAR_10) {
 case 135:
  VAR_9 = &VAR_2;
  break;

 case 134:
 case 133:
  VAR_9 = &VAR_3;
  break;

 case 132:
  VAR_9 = &VAR_4;
  break;

 case 130:
  VAR_9 = &VAR_5;
  break;

 case 129:
  VAR_9 = &VAR_6;
  break;

 case 131:
  VAR_9 = &VAR_7;
  break;

 case 128:
 case 136:
  VAR_9 = &VAR_8;
  break;

 case 138:
  VAR_9 = &VAR_0;
  break;

 case 137:
  VAR_9 = &VAR_1;
  break;

 default:
  FUNC_0("Unsupported OMAP version");
  break;
 }
}
