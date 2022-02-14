
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ ale_regs; } ;
struct cpsw_ale {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cpsw_ale *VAR_0, u32 *VAR_1,
        int VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_1);
 FUNC_3(VAR_2, VAR_0->params.ale_regs + FUNC_0(VAR_4));


 VAR_4 = FUNC_2(VAR_1);
 FUNC_3(VAR_3, VAR_0->params.ale_regs + FUNC_0(VAR_4));
}
