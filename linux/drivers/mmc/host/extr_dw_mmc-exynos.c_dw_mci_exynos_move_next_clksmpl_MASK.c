
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dw_mci_exynos_priv_data {scalar_t__ ctrl_type; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dw_mci*,int ) ;
 int FUNC_2 (struct dw_mci*,int ,int) ;

__attribute__((used)) static inline u8 FUNC_3(struct dw_mci *VAR_4)
{
 struct dw_mci_exynos_priv_data *VAR_5 = VAR_4->priv;
 u32 VAR_6;
 u8 VAR_7;

 if (VAR_5->ctrl_type == VAR_2 ||
  VAR_5->ctrl_type == VAR_3)
  VAR_6 = FUNC_1(VAR_4, VAR_1);
 else
  VAR_6 = FUNC_1(VAR_4, VAR_0);

 VAR_7 = (VAR_6 + 1) & 0x7;
 VAR_6 = FUNC_0(VAR_6, VAR_7);

 if (VAR_5->ctrl_type == VAR_2 ||
  VAR_5->ctrl_type == VAR_3)
  FUNC_2(VAR_4, VAR_1, VAR_6);
 else
  FUNC_2(VAR_4, VAR_0, VAR_6);

 return VAR_7;
}
