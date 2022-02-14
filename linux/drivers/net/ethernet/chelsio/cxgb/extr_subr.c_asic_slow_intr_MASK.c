
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int slow_intr_mask; scalar_t__ regs; int espi; int tp; int sge; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(adapter_t *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_6->regs + VAR_0);

 VAR_7 &= VAR_6->slow_intr_mask;
 if (!VAR_7)
  return 0;
 if (VAR_7 & VAR_4)
  FUNC_4(VAR_6->sge);
 if (VAR_7 & VAR_5)
  FUNC_5(VAR_6->tp);
 if (VAR_7 & VAR_1)
  FUNC_2(VAR_6->espi);
 if (VAR_7 & VAR_3)
  FUNC_3(VAR_6);
 if (VAR_7 & VAR_2)
  FUNC_1(VAR_6);


 FUNC_6(VAR_7, VAR_6->regs + VAR_0);
 FUNC_0(VAR_6->regs + VAR_0);
 return 1;
}
