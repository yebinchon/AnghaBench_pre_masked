
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dw_mci_exynos_priv_data {scalar_t__ ctrl_type; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dw_mci*,int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct dw_mci *VAR_8)
{
 struct dw_mci_exynos_priv_data *VAR_9 = VAR_8->priv;

 if (VAR_9->ctrl_type == VAR_3)
  return VAR_7;
 else if (VAR_9->ctrl_type == VAR_2)
  return VAR_6;
 else if (VAR_9->ctrl_type == VAR_4 ||
   VAR_9->ctrl_type == VAR_5)
  return FUNC_0(FUNC_1(VAR_8, VAR_1)) + 1;
 else
  return FUNC_0(FUNC_1(VAR_8, VAR_0)) + 1;
}
