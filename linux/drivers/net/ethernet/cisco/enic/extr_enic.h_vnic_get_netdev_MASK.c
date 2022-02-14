
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev {struct enic* priv; } ;
struct net_device {int dummy; } ;
struct enic {struct net_device* netdev; } ;



__attribute__((used)) static inline struct net_device *FUNC_0(struct vnic_dev *VAR_0)
{
 struct enic *VAR_1 = VAR_0->priv;

 return VAR_1->netdev;
}
