
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_memc; scalar_t__ phy_a_standby_ctrl_offs; scalar_t__ phy_b_standby_ctrl_offs; TYPE_1__* memcs; } ;
struct TYPE_3__ {scalar_t__ ddr_phy_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 int VAR_6;
 FUNC_2((VAR_2 <<
      VAR_4),
      ~VAR_3);

 FUNC_0(0);

 for (VAR_6 = 0; VAR_6 < VAR_5.num_memc; VAR_6++) {
  u32 VAR_7;


  VAR_7 = FUNC_1(VAR_5.memcs[VAR_6].ddr_phy_base +
      VAR_5.phy_a_standby_ctrl_offs);
  VAR_7 &= ~(VAR_1 | VAR_1);
  FUNC_4(VAR_7, VAR_5.memcs[VAR_6].ddr_phy_base +
        VAR_5.phy_a_standby_ctrl_offs);


  if (VAR_5.phy_b_standby_ctrl_offs != VAR_0) {
   VAR_7 = FUNC_1(VAR_5.memcs[VAR_6].ddr_phy_base +
       VAR_5.phy_b_standby_ctrl_offs);
   VAR_7 &= ~(VAR_1 | VAR_1);
   FUNC_4(VAR_7, VAR_5.memcs[VAR_6].ddr_phy_base +
         VAR_5.phy_b_standby_ctrl_offs);
  }
 }

 FUNC_3();
}
