
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {scalar_t__ subsystem_id; int no_speed_setting; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ethtool_fecparam {int fec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lio* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct lio*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
       struct ethtool_fecparam *VAR_6)
{
 struct lio *VAR_7 = FUNC_0(VAR_5);
 struct octeon_device *VAR_8 = VAR_7->oct_dev;

 if (VAR_8->subsystem_id == VAR_3 ||
     VAR_8->subsystem_id == VAR_4) {
  if (VAR_8->no_speed_setting == 1)
   return -VAR_0;

  if (VAR_6->fec & VAR_1)
   FUNC_1(VAR_7, 0);
  else if (VAR_6->fec & VAR_2)
   FUNC_1(VAR_7, 1);
  else
   return -VAR_0;
 } else {
  return -VAR_0;
 }

 return 0;
}
