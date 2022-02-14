
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dw_mci_exynos_priv_data {scalar_t__ ctrl_type; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dw_mci*,int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct dw_mci *VAR_4)
{
 struct dw_mci_exynos_priv_data *VAR_5 = VAR_4->priv;

 if (VAR_5->ctrl_type == VAR_2 ||
  VAR_5->ctrl_type == VAR_3)
  return FUNC_0(FUNC_1(VAR_4, VAR_1));
 else
  return FUNC_0(FUNC_1(VAR_4, VAR_0));
}
