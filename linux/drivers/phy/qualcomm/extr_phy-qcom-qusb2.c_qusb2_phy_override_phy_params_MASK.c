
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qusb2_phy_cfg {int * regs; } ;
struct qusb2_phy {int imp_res_offset_value; int hstx_trim_value; int preemphasis_level; scalar_t__ preemphasis_width; int base; scalar_t__ override_preemphasis_width; scalar_t__ override_preemphasis; scalar_t__ override_hstx_trim; scalar_t__ override_imp_res_offset; struct qusb2_phy_cfg* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct qusb2_phy *VAR_10)
{
 const struct qusb2_phy_cfg *VAR_11 = VAR_10->cfg;

 if (VAR_10->override_imp_res_offset)
  FUNC_2(VAR_10->base, VAR_7,
        VAR_10->imp_res_offset_value << VAR_3,
        VAR_2);

 if (VAR_10->override_hstx_trim)
  FUNC_2(VAR_10->base, VAR_11->regs[VAR_8],
     VAR_10->hstx_trim_value << VAR_1,
     VAR_0);

 if (VAR_10->override_preemphasis)
  FUNC_2(VAR_10->base, VAR_11->regs[VAR_8],
    VAR_10->preemphasis_level << VAR_5,
    VAR_4);

 if (VAR_10->override_preemphasis_width) {
  if (VAR_10->preemphasis_width ==
      VAR_9)
   FUNC_1(VAR_10->base,
          VAR_11->regs[VAR_8],
          VAR_6);
  else
   FUNC_0(VAR_10->base,
          VAR_11->regs[VAR_8],
          VAR_6);
 }
}
