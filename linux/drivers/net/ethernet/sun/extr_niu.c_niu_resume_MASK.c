
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct niu {int lock; TYPE_1__ timer; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 struct niu* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_6(VAR_2);
 struct niu *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_3))
  return 0;

 FUNC_7(VAR_2);

 FUNC_2(VAR_3);

 FUNC_8(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_4(VAR_4);
 if (!VAR_6) {
  VAR_4->timer.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_4->timer);
  FUNC_5(VAR_4);
 }

 FUNC_9(&VAR_4->lock, VAR_5);

 return VAR_6;
}
