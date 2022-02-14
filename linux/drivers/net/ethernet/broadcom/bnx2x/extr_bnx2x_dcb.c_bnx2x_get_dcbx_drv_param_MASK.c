
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dcbx_features {int ets; int pfc; int app; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,int *,int ) ;
 int FUNC_1 (struct bnx2x*,int *,int ) ;
 int FUNC_2 (struct bnx2x*,int *,int ) ;
 int FUNC_3 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_0,
         struct dcbx_features *VAR_1,
         u32 VAR_2)
{
 FUNC_0(VAR_0, &VAR_1->app, VAR_2);

 FUNC_2(VAR_0, &VAR_1->pfc, VAR_2);

 FUNC_1(VAR_0, &VAR_1->ets, VAR_2);

 FUNC_3(VAR_0);
}
