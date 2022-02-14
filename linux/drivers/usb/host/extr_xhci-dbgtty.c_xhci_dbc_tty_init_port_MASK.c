
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct dbc_port {scalar_t__ n_read; TYPE_1__ port; int out; int in; int write_pool; int read_queue; int read_pool; int push; int port_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 (struct xhci_hcd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct xhci_hcd *VAR_2, struct dbc_port *VAR_3)
{
 FUNC_5(&VAR_3->port);
 FUNC_3(&VAR_3->port_lock);
 FUNC_4(&VAR_3->push, VAR_1, (unsigned long)VAR_3);
 FUNC_0(&VAR_3->read_pool);
 FUNC_0(&VAR_3->read_queue);
 FUNC_0(&VAR_3->write_pool);

 VAR_3->in = FUNC_1(VAR_2);
 VAR_3->out = FUNC_2(VAR_2);
 VAR_3->port.ops = &VAR_0;
 VAR_3->n_read = 0;
}
