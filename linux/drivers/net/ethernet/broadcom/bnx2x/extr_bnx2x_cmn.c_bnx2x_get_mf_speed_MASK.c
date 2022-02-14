
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int line_speed; } ;
struct bnx2x {int * mf_config; TYPE_1__ link_vars; } ;


 size_t FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int ) ;

u16 FUNC_4(struct bnx2x *VAR_0)
{
 u16 VAR_1 = VAR_0->link_vars.line_speed;
 if (FUNC_1(VAR_0)) {
  u16 VAR_2 = FUNC_3(VAR_0,
         VAR_0->mf_config[FUNC_0(VAR_0)]);




  if (FUNC_2(VAR_0))
   VAR_1 = (VAR_1 * VAR_2) / 100;
  else {
   u16 VAR_3 = VAR_2 * 100;

   if (VAR_3 < VAR_1)
    VAR_1 = VAR_3;
  }
 }

 return VAR_1;
}
