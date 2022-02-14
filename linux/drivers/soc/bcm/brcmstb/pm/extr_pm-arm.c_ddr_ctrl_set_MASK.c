
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_memc; scalar_t__ warm_boot_offset; TYPE_1__* memcs; } ;
struct TYPE_3__ {scalar_t__ ddr_ctrl; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(bool VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0.num_memc; VAR_2++) {
  u32 VAR_3;

  VAR_3 = FUNC_0(VAR_0.memcs[VAR_2].ddr_ctrl +
    VAR_0.warm_boot_offset);
  if (VAR_1)
   VAR_3 |= 1;
  else
   VAR_3 &= ~1;
  FUNC_2(VAR_3, VAR_0.memcs[VAR_2].ddr_ctrl +
    VAR_0.warm_boot_offset);
 }

 FUNC_1();
}
