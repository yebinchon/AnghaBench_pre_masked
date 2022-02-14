
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_phy {int pipe_reset; int pipe_clk; scalar_t__ base; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 struct qcom_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_1)
{
 struct qcom_phy *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_3(VAR_2->base + VAR_0);
 VAR_3 |= FUNC_0(0);
 FUNC_5(VAR_3, VAR_2->base + VAR_0);

 FUNC_1(VAR_2->pipe_clk);
 FUNC_4(VAR_2->pipe_reset);

 return 0;
}
