
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {struct xhci_dbc* dbc; } ;
struct dbc_port {int registered; int write_fifo; int write_pool; int out; int read_pool; int in; int port; } ;
struct xhci_dbc {struct dbc_port port; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 struct device* FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct dbc_port*) ;
 int FUNC_9 (struct xhci_hcd*,struct dbc_port*) ;
 int FUNC_10 (struct xhci_hcd*,char*,int) ;

int FUNC_11(struct xhci_hcd *VAR_5)
{
 int VAR_6;
 struct device *VAR_7;
 struct xhci_dbc *VAR_8 = VAR_5->dbc;
 struct dbc_port *VAR_9 = &VAR_8->port;

 FUNC_9(VAR_5, VAR_9);
 VAR_7 = FUNC_4(&VAR_9->port,
        VAR_3, 0, ((void*)0));
 if (FUNC_0(VAR_7)) {
  VAR_6 = FUNC_1(VAR_7);
  goto register_fail;
 }

 VAR_6 = FUNC_2(&VAR_9->write_fifo, VAR_0, VAR_1);
 if (VAR_6)
  goto buf_alloc_fail;

 VAR_6 = FUNC_6(VAR_9->in, &VAR_9->read_pool,
          VAR_2);
 if (VAR_6)
  goto request_fail;

 VAR_6 = FUNC_6(VAR_9->out, &VAR_9->write_pool,
          VAR_4);
 if (VAR_6)
  goto request_fail;

 VAR_9->registered = 1;

 return 0;

request_fail:
 FUNC_7(VAR_9->in, &VAR_9->read_pool);
 FUNC_7(VAR_9->out, &VAR_9->write_pool);
 FUNC_3(&VAR_9->write_fifo);

buf_alloc_fail:
 FUNC_5(VAR_3, 0);

register_fail:
 FUNC_8(VAR_9);

 FUNC_10(VAR_5, "can't register tty port, err %d\n", VAR_6);

 return VAR_6;
}
