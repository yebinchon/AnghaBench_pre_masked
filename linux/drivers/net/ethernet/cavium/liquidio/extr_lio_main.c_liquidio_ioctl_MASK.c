
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct lio {TYPE_1__* oct_dev; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int ptp_enable; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;

 int FUNC_1 (struct net_device*,struct ifreq*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3) {
 case 128:
  if (VAR_4->oct_dev->ptp_enable)
   return FUNC_1(VAR_1, VAR_2);

 default:
  return -VAR_0;
 }
}
