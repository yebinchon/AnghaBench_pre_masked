
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_cec {int dummy; } ;
struct cec_adapter {struct tegra_cec* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_cec*,int ) ;
 int FUNC_1 (struct tegra_cec*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_2,
          bool VAR_3)
{
 struct tegra_cec *VAR_4 = VAR_2->priv;
 u32 VAR_5 = FUNC_0(VAR_4, VAR_1);

 if (VAR_3)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;
 FUNC_1(VAR_4, VAR_1, VAR_5);
 return 0;
}
