
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unusable; int reset; int shutdown; } ;
struct TYPE_4__ {TYPE_1__ eh_ops; int lock; int status; int side; } ;
struct vhci_device {TYPE_2__ ud; int waitq_tx; int priv_lock; int unlink_rx; int unlink_tx; int priv_tx; int priv_rx; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vhci_device*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct vhci_device *VAR_5)
{
 FUNC_2(VAR_5, 0, sizeof(struct vhci_device));

 VAR_5->ud.side = VAR_0;
 VAR_5->ud.status = VAR_1;
 FUNC_3(&VAR_5->ud.lock);

 FUNC_0(&VAR_5->priv_rx);
 FUNC_0(&VAR_5->priv_tx);
 FUNC_0(&VAR_5->unlink_tx);
 FUNC_0(&VAR_5->unlink_rx);
 FUNC_3(&VAR_5->priv_lock);

 FUNC_1(&VAR_5->waitq_tx);

 VAR_5->ud.eh_ops.shutdown = VAR_4;
 VAR_5->ud.eh_ops.reset = VAR_2;
 VAR_5->ud.eh_ops.unusable = VAR_3;

 FUNC_4(&VAR_5->ud);
}
