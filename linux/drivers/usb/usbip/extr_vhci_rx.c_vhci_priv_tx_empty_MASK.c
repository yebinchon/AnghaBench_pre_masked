
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_device {int priv_lock; int priv_rx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct vhci_device *VAR_0)
{
 int VAR_1 = 0;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->priv_lock, VAR_2);
 VAR_1 = FUNC_0(&VAR_0->priv_rx);
 FUNC_2(&VAR_0->priv_lock, VAR_2);

 return VAR_1;
}
