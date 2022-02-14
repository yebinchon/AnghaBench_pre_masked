
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_bpf {scalar_t__ command; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct net_device *VAR_2, struct netdev_bpf *VAR_3)
{
 return VAR_3->command == VAR_1 ? 0 : -VAR_0;
}
