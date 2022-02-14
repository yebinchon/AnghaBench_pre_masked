
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_cec {int dummy; } ;
struct cec_adapter {struct tegra_cec* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tegra_cec*,int ) ;
 int FUNC_2 (struct tegra_cec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_3, u8 VAR_4)
{
 struct tegra_cec *VAR_5 = VAR_3->priv;
 u32 VAR_6 = FUNC_1(VAR_5, VAR_2);

 if (VAR_4 == VAR_0)
  VAR_6 &= ~VAR_1;
 else
  VAR_6 |= FUNC_0((1 << VAR_4));

 FUNC_2(VAR_5, VAR_2, VAR_6);
 return 0;
}
