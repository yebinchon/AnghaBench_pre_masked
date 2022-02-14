
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fotg210_hcd {TYPE_1__* caps; } ;
struct TYPE_2__ {int hcc_params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct fotg210_hcd*,char*,char*,int ,char*,char*) ;
 int FUNC_3 (struct fotg210_hcd*,int *) ;

__attribute__((used)) static void FUNC_4(struct fotg210_hcd *VAR_0, char *VAR_1)
{
 u32 VAR_2 = FUNC_3(VAR_0, &VAR_0->caps->hcc_params);

 FUNC_2(VAR_0, "%s hcc_params %04x uframes %s%s\n", VAR_1,
   VAR_2,
   FUNC_1(VAR_2) ? "256/512/1024" : "1024",
   FUNC_0(VAR_2) ? " park" : "");
}
