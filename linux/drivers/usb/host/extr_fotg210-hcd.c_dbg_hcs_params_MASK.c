
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fotg210_hcd {TYPE_1__* caps; } ;
struct TYPE_2__ {int hcs_params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fotg210_hcd*,char*,char*,int ,int ) ;
 int FUNC_2 (struct fotg210_hcd*,int *) ;

__attribute__((used)) static void FUNC_3(struct fotg210_hcd *VAR_0, char *VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_0, &VAR_0->caps->hcs_params);

 FUNC_1(VAR_0, "%s hcs_params 0x%x ports=%d\n", VAR_1, VAR_2,
   FUNC_0(VAR_2));
}
