
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_frame_errors; int rx_missed_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct axienet_local {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct axienet_local*,int ) ;
 int FUNC_1 (struct axienet_local*,int ,unsigned int) ;
 struct axienet_local* FUNC_2 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct axienet_local *VAR_9 = FUNC_2(VAR_8);
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_4);
 if (!VAR_10)
  return VAR_1;

 if (VAR_10 & VAR_2)
  VAR_8->stats.rx_missed_errors++;

 if (VAR_10 & VAR_3)
  VAR_8->stats.rx_frame_errors++;

 FUNC_1(VAR_9, VAR_5, VAR_10);
 return VAR_0;
}
