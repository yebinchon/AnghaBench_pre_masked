
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int pos; scalar_t__ pol; } ;
struct TYPE_6__ {TYPE_2__ clk; TYPE_1__* data; } ;
struct iss_csiphy {unsigned int max_data_lanes; int cfg_regs; int iss; TYPE_3__ lanes; } ;
struct TYPE_4__ {int pos; scalar_t__ pol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct iss_csiphy *VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_3(VAR_4->iss, VAR_4->cfg_regs, VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_4->max_data_lanes; VAR_5++) {
  VAR_6 &= ~(FUNC_0(VAR_5 + 1) |
    FUNC_1(VAR_5 + 1));
  VAR_6 |= (VAR_4->lanes.data[VAR_5].pol ?
   FUNC_0(VAR_5 + 1) : 0);
  VAR_6 |= (VAR_4->lanes.data[VAR_5].pos <<
   FUNC_2(VAR_5 + 1));
 }

 VAR_6 &= ~(VAR_1 |
   VAR_2);
 VAR_6 |= VAR_4->lanes.clk.pol ? VAR_1 : 0;
 VAR_6 |= VAR_4->lanes.clk.pos << VAR_3;

 FUNC_4(VAR_4->iss, VAR_4->cfg_regs, VAR_0, VAR_6);
}
