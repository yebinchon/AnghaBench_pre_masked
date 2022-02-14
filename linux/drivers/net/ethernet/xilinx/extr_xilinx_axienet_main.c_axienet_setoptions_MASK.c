
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct axienet_option {int opt; int m_or; int reg; } ;
struct axienet_local {int options; } ;


 int FUNC_0 (struct axienet_local*,int ) ;
 int FUNC_1 (struct axienet_local*,int ,int) ;
 struct axienet_option* VAR_0 ;
 struct axienet_local* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, u32 VAR_2)
{
 int VAR_3;
 struct axienet_local *VAR_4 = FUNC_2(VAR_1);
 struct axienet_option *VAR_5 = &VAR_0[0];

 while (VAR_5->opt) {
  VAR_3 = ((FUNC_0(VAR_4, VAR_5->reg)) & ~(VAR_5->m_or));
  if (VAR_2 & VAR_5->opt)
   VAR_3 |= VAR_5->m_or;
  FUNC_1(VAR_4, VAR_5->reg, VAR_3);
  VAR_5++;
 }

 VAR_4->options |= VAR_2;
}
