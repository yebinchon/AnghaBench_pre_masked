
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mci_exynos_priv_data {scalar_t__ ctrl_type; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct dw_mci*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dw_mci *VAR_10)
{
 struct dw_mci_exynos_priv_data *VAR_11 = VAR_10->priv;





 if (VAR_11->ctrl_type == VAR_0 ||
  VAR_11->ctrl_type == VAR_1) {
  FUNC_0(VAR_10, VAR_2, 0);
  FUNC_0(VAR_10, VAR_4, VAR_5);
  FUNC_0(VAR_10, VAR_3, VAR_8 |
      VAR_6 |
      VAR_9 |
      VAR_7);
 }
}
