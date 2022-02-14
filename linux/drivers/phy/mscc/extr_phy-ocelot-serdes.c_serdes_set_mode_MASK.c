
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct serdes_macro {scalar_t__ idx; scalar_t__ port; TYPE_1__* ctrl; } ;
struct phy {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;
struct TYPE_5__ {scalar_t__ idx; int mode; int submode; scalar_t__ port; int mux; int mask; } ;
struct TYPE_4__ {int regs; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 struct serdes_macro* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_8, enum phy_mode VAR_9, int VAR_10)
{
 struct serdes_macro *VAR_11 = FUNC_1(VAR_8);
 unsigned int VAR_12;
 int VAR_13;


 if (VAR_9 != VAR_4)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_7); VAR_12++) {
  if (VAR_11->idx != VAR_7[VAR_12].idx ||
      VAR_9 != VAR_7[VAR_12].mode ||
      VAR_10 != VAR_7[VAR_12].submode)
   continue;

  if (VAR_10 != VAR_3 &&
      VAR_11->port != VAR_7[VAR_12].port)
   continue;

  VAR_13 = FUNC_2(VAR_11->ctrl->regs, VAR_2,
      VAR_7[VAR_12].mask,
      VAR_7[VAR_12].mux);
  if (VAR_13)
   return VAR_13;

  if (VAR_11->idx <= VAR_5)
   return FUNC_3(VAR_11->ctrl->regs, VAR_11->idx);
  else if (VAR_11->idx <= VAR_6)
   return FUNC_4(VAR_11->ctrl->regs,
            VAR_11->idx - (VAR_5 + 1),
            VAR_7[VAR_12].submode);


  return -VAR_1;
 }

 return -VAR_0;
}
