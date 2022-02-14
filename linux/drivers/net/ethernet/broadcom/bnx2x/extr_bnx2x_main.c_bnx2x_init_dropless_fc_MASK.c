
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flow_ctrl; scalar_t__ link_up; } ;
struct bnx2x {TYPE_1__ link_vars; scalar_t__ dropless_fc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_4)
{
 u32 VAR_5 = 0;

 if (!FUNC_1(VAR_4) && VAR_4->dropless_fc && VAR_4->link_vars.link_up) {
  if (VAR_4->link_vars.flow_ctrl & VAR_1)
   VAR_5 = 1;

  FUNC_3(VAR_4, VAR_0 +
      FUNC_4(FUNC_0(VAR_4)),
         VAR_5);
 }

 FUNC_2(VAR_2 | VAR_3, "dropless_fc is %s\n",
    VAR_5 ? "enabled" : "disabled");
}
