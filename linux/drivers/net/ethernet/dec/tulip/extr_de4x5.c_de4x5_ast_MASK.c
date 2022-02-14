
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct de4x5_private {scalar_t__ chipset; int timer; scalar_t__ linkOK; scalar_t__ useSROM; int gendev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ) ;
 struct de4x5_private* FUNC_4 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 struct de4x5_private* VAR_6 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_7(struct timer_list *VAR_8)
{
 struct de4x5_private *VAR_9 = FUNC_4(VAR_9, VAR_8, VAR_7);
 struct net_device *VAR_10 = FUNC_3(VAR_9->gendev);
 int VAR_11 = VAR_3;
 int VAR_12;

 if (VAR_9->useSROM)
  VAR_11 = FUNC_6(VAR_10);
 else if (VAR_9->chipset == VAR_2)
  VAR_11 = FUNC_2(VAR_10);
 else if (VAR_9->chipset == VAR_1)
  VAR_11 = FUNC_1(VAR_10);
 else if (VAR_9->chipset == VAR_0)
  VAR_11 = FUNC_0(VAR_10);
 VAR_9->linkOK = 0;

 VAR_12 = (VAR_11 * VAR_4) / 1000;

 if (!VAR_12)
  VAR_12 = 1;

 FUNC_5(&VAR_9->timer, VAR_5 + VAR_12);
}
