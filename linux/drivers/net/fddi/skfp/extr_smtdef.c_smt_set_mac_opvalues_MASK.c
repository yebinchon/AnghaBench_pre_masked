
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {TYPE_2__* m; TYPE_1__* a; } ;
struct s_smc {TYPE_3__ mib; } ;
struct TYPE_5__ {int fddiMACT_Req; int fddiMACT_ReqMIB; int fddiMACT_Max; int fddiMACT_MaxMIB; int fddiMACTvxValue; int fddiMACTvxValueMIB; } ;
struct TYPE_4__ {int fddiPATHMaxT_Req; int fddiPATHT_MaxLowerBound; int fddiPATHTVXLowerBound; } ;


 int FUNC_0 (struct s_smc*,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int,int ,int ,int *) ;
 int FUNC_2 (struct s_smc*) ;

int FUNC_3(struct s_smc *VAR_5)
{
 int VAR_6 ;
 int VAR_7 ;

 VAR_6 = FUNC_1(1,VAR_5->mib.m[VAR_3].fddiMACTvxValueMIB,
  VAR_5->mib.a[VAR_4].fddiPATHTVXLowerBound,
  &VAR_5->mib.m[VAR_3].fddiMACTvxValue) ;
 VAR_6 |= FUNC_1(0,VAR_5->mib.m[VAR_3].fddiMACT_MaxMIB,
  VAR_5->mib.a[VAR_4].fddiPATHT_MaxLowerBound,
  &VAR_5->mib.m[VAR_3].fddiMACT_Max) ;
 VAR_6 |= (VAR_7 = FUNC_1(0,VAR_5->mib.m[VAR_3].fddiMACT_ReqMIB,
  VAR_5->mib.a[VAR_4].fddiPATHMaxT_Req,
  &VAR_5->mib.m[VAR_3].fddiMACT_Req)) ;
 if (VAR_7) {



  FUNC_0(VAR_5, (u_long) VAR_1, (u_long)
   VAR_2, (u_long) VAR_0,
   FUNC_2(VAR_5));
 }
 return VAR_6;
}
