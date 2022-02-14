
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct niu_ops {int dummy; } ;
struct niu {int port; int reset_task; int lock; int msg_enable; struct niu_ops const* ops; struct device* device; struct platform_device* op; struct pci_dev* pdev; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,struct device*) ;
 struct net_device* FUNC_2 (int,int ) ;
 struct niu* FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct net_device *FUNC_5(struct device *VAR_3,
          struct pci_dev *VAR_4,
          struct platform_device *VAR_5,
          const struct niu_ops *VAR_6, u8 VAR_7)
{
 struct net_device *VAR_8;
 struct niu *VAR_9;

 VAR_8 = FUNC_2(sizeof(struct niu), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 FUNC_1(VAR_8, VAR_3);

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->dev = VAR_8;
 VAR_9->pdev = VAR_4;
 VAR_9->op = VAR_5;
 VAR_9->device = VAR_3;
 VAR_9->ops = VAR_6;

 VAR_9->msg_enable = VAR_1;

 FUNC_4(&VAR_9->lock);
 FUNC_0(&VAR_9->reset_task, VAR_2);

 VAR_9->port = VAR_7;

 return VAR_8;
}
