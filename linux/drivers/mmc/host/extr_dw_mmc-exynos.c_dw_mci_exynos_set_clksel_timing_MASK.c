
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dw_mci_exynos_priv_data {scalar_t__ ctrl_type; } ;
struct dw_mci {TYPE_1__* slot; struct dw_mci_exynos_priv_data* priv; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct dw_mci*,int ) ;
 int FUNC_2 (struct dw_mci*,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct dw_mci *VAR_6, u32 VAR_7)
{
 struct dw_mci_exynos_priv_data *VAR_8 = VAR_6->priv;
 u32 VAR_9;

 if (VAR_8->ctrl_type == VAR_2 ||
  VAR_8->ctrl_type == VAR_3)
  VAR_9 = FUNC_1(VAR_6, VAR_1);
 else
  VAR_9 = FUNC_1(VAR_6, VAR_0);

 VAR_9 = (VAR_9 & ~VAR_5) | VAR_7;

 if (VAR_8->ctrl_type == VAR_2 ||
  VAR_8->ctrl_type == VAR_3)
  FUNC_2(VAR_6, VAR_1, VAR_9);
 else
  FUNC_2(VAR_6, VAR_0, VAR_9);
 if (!FUNC_0(VAR_9) && VAR_6->slot)
  FUNC_3(VAR_4, &VAR_6->slot->flags);
}
