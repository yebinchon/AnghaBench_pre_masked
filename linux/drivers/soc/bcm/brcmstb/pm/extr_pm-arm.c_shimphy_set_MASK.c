
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_memc; TYPE_1__* memcs; int needs_ddr_pad; } ;
struct TYPE_3__ {scalar_t__ ddr_shimphy_base; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(u32 VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (!VAR_1.needs_ddr_pad)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1.num_memc; VAR_4++) {
  u32 VAR_5;

  VAR_5 = FUNC_0(VAR_1.memcs[VAR_4].ddr_shimphy_base +
   VAR_0);
  VAR_5 = VAR_2 | (VAR_5 & VAR_3);
  FUNC_2(VAR_5, VAR_1.memcs[VAR_4].ddr_shimphy_base +
   VAR_0);
 }
 FUNC_1();
}
