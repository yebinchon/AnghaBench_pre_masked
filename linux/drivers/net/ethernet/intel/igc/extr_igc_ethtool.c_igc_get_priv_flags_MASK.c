
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct igc_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct igc_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_2)
{
 struct igc_adapter *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = 0;

 if (VAR_3->flags & VAR_0)
  VAR_4 |= VAR_1;

 return VAR_4;
}
