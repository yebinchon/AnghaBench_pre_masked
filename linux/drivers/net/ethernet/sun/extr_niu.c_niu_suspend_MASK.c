
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct niu {int lock; int timer; int reset_task; } ;
struct net_device {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct niu* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct niu*,int ) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (struct niu*) ;
 struct net_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct net_device *VAR_2 = FUNC_8(VAR_0);
 struct niu *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;

 if (!FUNC_4(VAR_2))
  return 0;

 FUNC_1(&VAR_3->reset_task);
 FUNC_6(VAR_3);

 FUNC_0(&VAR_3->timer);

 FUNC_10(&VAR_3->lock, VAR_4);
 FUNC_5(VAR_3, 0);
 FUNC_11(&VAR_3->lock, VAR_4);

 FUNC_3(VAR_2);

 FUNC_10(&VAR_3->lock, VAR_4);
 FUNC_7(VAR_3);
 FUNC_11(&VAR_3->lock, VAR_4);

 FUNC_9(VAR_0);

 return 0;
}
