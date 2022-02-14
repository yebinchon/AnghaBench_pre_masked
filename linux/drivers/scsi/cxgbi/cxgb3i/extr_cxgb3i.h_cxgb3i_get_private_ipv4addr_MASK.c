
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {unsigned int iscsi_ipv4addr; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct net_device *VAR_0)
{
 return ((struct port_info *)(FUNC_0(VAR_0)))->iscsi_ipv4addr;
}
