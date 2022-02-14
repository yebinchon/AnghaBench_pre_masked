
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {struct xhci_dbc* dbc; } ;
struct dbc_port {int registered; int write_pool; int read_queue; int read_pool; int write_fifo; } ;
struct xhci_dbc {struct dbc_port port; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*) ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dbc_port*) ;

void FUNC_6(struct xhci_hcd *VAR_1)
{
 struct xhci_dbc *VAR_2 = VAR_1->dbc;
 struct dbc_port *VAR_3 = &VAR_2->port;

 FUNC_3(VAR_0, 0);
 FUNC_5(VAR_3);
 VAR_3->registered = 0;

 FUNC_2(&VAR_3->write_fifo);
 FUNC_4(FUNC_1(VAR_1), &VAR_3->read_pool);
 FUNC_4(FUNC_1(VAR_1), &VAR_3->read_queue);
 FUNC_4(FUNC_0(VAR_1), &VAR_3->write_pool);
}
