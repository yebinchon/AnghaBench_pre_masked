
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef struct net_device const net_device ;
struct bridge_vlan_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct net_device const* FUNC_1 (struct net_device const*,unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct net_device const*,scalar_t__,struct bridge_vlan_info*) ;
 int FUNC_3 (struct net_device const*,scalar_t__*) ;

__attribute__((used)) static struct net_device *
FUNC_4(const struct net_device *VAR_2,
     unsigned char *VAR_3,
     u16 *VAR_4)
{
 struct bridge_vlan_info VAR_5;
 struct net_device *VAR_6;
 u16 VAR_7 = *VAR_4;

 if (!VAR_7 && FUNC_0(FUNC_3(VAR_2, &VAR_7)))
  return ((void*)0);
 if (!VAR_7 ||
     FUNC_2(VAR_2, VAR_7, &VAR_5) ||
     !(VAR_5.flags & VAR_0))
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_7);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_2(VAR_6, VAR_7, &VAR_5))
  return ((void*)0);
 if (VAR_5.flags & VAR_1)
  *VAR_4 = 0;
 else
  *VAR_4 = VAR_7;
 return VAR_6;
}
