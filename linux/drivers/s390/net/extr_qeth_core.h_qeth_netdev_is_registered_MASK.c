
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; } ;



__attribute__((used)) static inline bool FUNC_0(struct net_device *VAR_0)
{
 return VAR_0->netdev_ops != ((void*)0);
}
