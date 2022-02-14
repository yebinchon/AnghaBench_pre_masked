
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ionic_lif* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_2)
{
 struct ionic_lif *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = 0;

 if (FUNC_1(VAR_0, VAR_3->state))
  VAR_4 |= VAR_1;

 return VAR_4;
}
