
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ hfn_mbox_cmd; scalar_t__ hfn_mbox; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc *VAR_1, void *VAR_2, int VAR_3)
{
 u32 *VAR_4 = (u32 *) VAR_2;
 u32 VAR_5;

 FUNC_0(!(VAR_3 <= VAR_0));




 for (VAR_5 = 0; VAR_5 < VAR_3 / sizeof(u32); VAR_5++)
  FUNC_3(FUNC_1(VAR_4[VAR_5]),
         VAR_1->ioc_regs.hfn_mbox + VAR_5 * sizeof(u32));

 for (; VAR_5 < VAR_0 / sizeof(u32); VAR_5++)
  FUNC_3(0, VAR_1->ioc_regs.hfn_mbox + VAR_5 * sizeof(u32));




 FUNC_3(1, VAR_1->ioc_regs.hfn_mbox_cmd);
 (void) FUNC_2(VAR_1->ioc_regs.hfn_mbox_cmd);
}
