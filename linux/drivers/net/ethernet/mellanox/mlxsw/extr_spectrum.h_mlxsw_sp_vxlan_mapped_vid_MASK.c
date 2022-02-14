
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct bridge_vlan_info {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device const*,scalar_t__,struct bridge_vlan_info*) ;
 int FUNC_1 (struct net_device const*,scalar_t__*) ;

__attribute__((used)) static inline int
FUNC_2(const struct net_device *VAR_1, u16 *VAR_2)
{
 struct bridge_vlan_info VAR_3;
 u16 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_5 || !VAR_4)
  goto out;

 VAR_5 = FUNC_0(VAR_1, VAR_4, &VAR_3);
 if (VAR_5 || !(VAR_3.flags & VAR_0))
  VAR_4 = 0;

out:
 *VAR_2 = VAR_4;
 return VAR_5;
}
