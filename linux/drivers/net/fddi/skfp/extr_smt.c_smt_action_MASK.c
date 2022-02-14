
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {TYPE_2__* p; int fddiSMTRemoteDisconnectFlag; } ;
struct s_smc {TYPE_3__ mib; TYPE_1__* y; } ;
struct TYPE_5__ {int fddiPORTMy_Type; } ;
struct TYPE_4__ {int pc_mode; } ;


 int FUNC_0 (struct s_smc*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct s_smc*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct s_smc*,size_t,int) ;
 int FUNC_4 (struct s_smc*) ;

int FUNC_5(struct s_smc *VAR_23, int VAR_24, int VAR_25, int VAR_26)
{
 int VAR_27 ;
 int VAR_28 ;
 FUNC_1("SMT: action %d code %d", VAR_24, VAR_25);
 switch(VAR_24) {
 case 135 :
  switch(VAR_25) {
  case 134 :
   VAR_23->mib.fddiSMTRemoteDisconnectFlag = VAR_4 ;
   FUNC_3(VAR_23,VAR_2,VAR_0) ;
   break ;
  case 130 :
   FUNC_3(VAR_23,VAR_2,VAR_1) ;
   VAR_23->mib.fddiSMTRemoteDisconnectFlag = VAR_22 ;
   FUNC_2(VAR_23,VAR_19) ;
   FUNC_0(VAR_23, (u_long) VAR_8, (u_long)
    VAR_9, (u_long) VAR_6,
    FUNC_4(VAR_23));
   break ;
  case 129 :
   FUNC_0(VAR_23, (u_long) VAR_8, (u_long)
    VAR_9, (u_long) VAR_5,
    FUNC_4(VAR_23));
   break ;
  case 128 :
   FUNC_0(VAR_23, (u_long) VAR_8, (u_long)
    VAR_9, (u_long) VAR_7,
    FUNC_4(VAR_23));
   break ;
  case 133 :
   if (VAR_23->y[VAR_11].pc_mode == VAR_18) {
    FUNC_2(VAR_23,VAR_20) ;
    FUNC_3(VAR_23,VAR_3+VAR_11,VAR_13) ;
   }
   break ;
  case 132 :
   if (VAR_23->y[VAR_12].pc_mode == VAR_18) {
    FUNC_2(VAR_23,VAR_20) ;
    FUNC_3(VAR_23,VAR_3+VAR_12,VAR_13) ;
   }
   break ;
  case 131 :
   for (VAR_28 = 0 ; VAR_28 < VAR_10 ; VAR_28++) {
    if (VAR_23->mib.p[VAR_28].fddiPORTMy_Type != VAR_21)
     continue ;
    FUNC_2(VAR_23,VAR_20) ;
    FUNC_3(VAR_23,VAR_3+VAR_28,VAR_13) ;
   }
   break ;
  default :
   return 1;
  }
  break ;
 case 141 :
  switch(VAR_25) {
  case 139 :
   VAR_27 = VAR_14 ;
   break ;
  case 140 :
   VAR_27 = VAR_13 ;
   break ;
  case 138 :
   VAR_27 = VAR_15 ;
   break ;
  case 137 :
   VAR_27 = VAR_16 ;
   break ;
  case 136 :
   VAR_27 = VAR_17 ;
   break ;
  default :
   return 1;
  }
  FUNC_3(VAR_23,VAR_3+VAR_26,VAR_27) ;
  break ;
 default :
  return 1;
 }
 return 0;
}
