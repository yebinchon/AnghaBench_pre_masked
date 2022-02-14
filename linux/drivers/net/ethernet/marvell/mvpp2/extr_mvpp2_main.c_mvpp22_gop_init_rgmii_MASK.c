
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int gop_id; struct mvpp2* priv; } ;
struct mvpp2 {int sysctrl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mvpp2_port *VAR_6)
{
 struct mvpp2 *VAR_7 = VAR_6->priv;
 u32 VAR_8;

 FUNC_0(VAR_7->sysctrl_base, VAR_4, &VAR_8);
 VAR_8 |= VAR_5;
 FUNC_1(VAR_7->sysctrl_base, VAR_4, VAR_8);

 FUNC_0(VAR_7->sysctrl_base, VAR_0, &VAR_8);
 if (VAR_6->gop_id == 2)
  VAR_8 |= VAR_1 | VAR_2;
 else if (VAR_6->gop_id == 3)
  VAR_8 |= VAR_3;
 FUNC_1(VAR_7->sysctrl_base, VAR_0, VAR_8);
}
