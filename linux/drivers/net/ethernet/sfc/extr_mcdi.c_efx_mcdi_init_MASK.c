
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_1__* mcdi; struct efx_nic* primary; int net_dev; } ;
struct efx_mcdi_iface {char* logging_buffer; int new_epoch; int async_timer; int async_list; int async_lock; int mode; int state; int iface_lock; int proxy_rx_wq; int wq; int logging_enabled; struct efx_nic* efx; } ;
struct TYPE_3__ {int fn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 struct efx_mcdi_iface* FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int,int*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int VAR_5 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*) ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;

int FUNC_13(struct efx_nic *VAR_8)
{
 struct efx_mcdi_iface *VAR_9;
 bool VAR_10;
 int VAR_11 = -VAR_0;

 VAR_8->mcdi = FUNC_9(sizeof(*VAR_8->mcdi), VAR_1);
 if (!VAR_8->mcdi)
  goto fail;

 VAR_9 = FUNC_2(VAR_8);
 VAR_9->efx = VAR_8;







 FUNC_7(&VAR_9->wq);
 FUNC_7(&VAR_9->proxy_rx_wq);
 FUNC_11(&VAR_9->iface_lock);
 VAR_9->state = VAR_3;
 VAR_9->mode = VAR_2;
 FUNC_11(&VAR_9->async_lock);
 FUNC_0(&VAR_9->async_list);
 FUNC_12(&VAR_9->async_timer, VAR_5, 0);

 (void) FUNC_5(VAR_8);
 VAR_9->new_epoch = 1;


 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11)
  goto fail2;




 VAR_11 = FUNC_3(VAR_8, 1, &VAR_10);
 if (VAR_11) {
  FUNC_10(VAR_8, VAR_7, VAR_8->net_dev,
     "Unable to register driver with MCPU\n");
  goto fail2;
 }
 if (VAR_10)

  FUNC_10(VAR_8, VAR_7, VAR_8->net_dev,
     "Host already registered with MCPU\n");

 if (VAR_8->mcdi->fn_flags &
     (1 << VAR_4))
  VAR_8->primary = VAR_8;

 return 0;
fail2:




 FUNC_8(VAR_8->mcdi);
 VAR_8->mcdi = ((void*)0);
fail:
 return VAR_11;
}
