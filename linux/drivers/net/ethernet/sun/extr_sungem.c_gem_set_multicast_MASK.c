
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct gem {int mac_rx_cfg; scalar_t__ regs; int cell_enabled; scalar_t__ reset_task_pending; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct gem*) ;
 struct gem* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5)
{
 struct gem *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7, VAR_8;
 int VAR_9 = 10000;

 if (!FUNC_4(VAR_5) || !FUNC_3(VAR_5))
  return;


 if (VAR_6->reset_task_pending || FUNC_0(!VAR_6->cell_enabled))
  return;

 VAR_7 = FUNC_5(VAR_6->regs + VAR_0);
 VAR_8 = FUNC_1(VAR_6);



 VAR_6->mac_rx_cfg = VAR_8;

 FUNC_7(VAR_7 & ~VAR_1, VAR_6->regs + VAR_0);
 while (FUNC_5(VAR_6->regs + VAR_0) & VAR_1) {
  if (!VAR_9--)
   break;
  FUNC_6(10);
 }

 VAR_7 &= ~(VAR_3 | VAR_2);
 VAR_7 |= VAR_8;

 FUNC_7(VAR_7, VAR_6->regs + VAR_0);
}
