
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 VAR_3)
{
 struct ionic_lif *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5 = VAR_4->flags;

 FUNC_0(VAR_0, VAR_4->state);
 if (VAR_3 & VAR_1)
  FUNC_2(VAR_0, VAR_4->state);

 if (VAR_5 != VAR_4->flags)
  VAR_4->flags = VAR_5;

 return 0;
}
