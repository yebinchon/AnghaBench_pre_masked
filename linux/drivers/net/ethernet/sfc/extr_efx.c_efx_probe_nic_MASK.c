
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_hash_key; } ;
struct efx_nic {int n_channels; TYPE_1__* type; int timer_quantum_ns; int irq_mod_step_us; int n_rx_channels; int net_dev; int n_tx_channels; TYPE_2__ rss_context; int max_tx_channels; int max_channels; } ;
struct TYPE_3__ {int (* probe ) (struct efx_nic*) ;int (* dimension_resources ) (struct efx_nic*) ;int (* remove ) (struct efx_nic*) ;} ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*,int ,int ,int,int) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*,TYPE_2__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct efx_nic*) ;
 int FUNC_13 (struct efx_nic*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct efx_nic *VAR_6)
{
 int VAR_7;

 FUNC_7(VAR_6, VAR_3, VAR_6->net_dev, "creating NIC\n");


 VAR_7 = VAR_6->type->probe(VAR_6);
 if (VAR_7)
  return VAR_7;

 do {
  if (!VAR_6->max_channels || !VAR_6->max_tx_channels) {
   FUNC_8(VAR_6, VAR_2, VAR_6->net_dev,
      "Insufficient resources to allocate"
      " any channels\n");
   VAR_7 = -VAR_1;
   goto fail1;
  }




  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7)
   goto fail1;

  FUNC_4(VAR_6);


  VAR_7 = VAR_6->type->dimension_resources(VAR_6);
  if (VAR_7 != 0 && VAR_7 != -VAR_0)
   goto fail2;

  if (VAR_7 == -VAR_0)

   FUNC_3(VAR_6);

 } while (VAR_7 == -VAR_0);

 if (VAR_6->n_channels > 1)
  FUNC_6(VAR_6->rss_context.rx_hash_key,
        sizeof(VAR_6->rss_context.rx_hash_key));
 FUNC_5(VAR_6, &VAR_6->rss_context);

 FUNC_10(VAR_6->net_dev, VAR_6->n_tx_channels);
 FUNC_9(VAR_6->net_dev, VAR_6->n_rx_channels);


 VAR_6->irq_mod_step_us = FUNC_0(VAR_6->timer_quantum_ns, 1000);
 FUNC_1(VAR_6, VAR_5, VAR_4, 1,
    1);

 return 0;

fail2:
 FUNC_3(VAR_6);
fail1:
 VAR_6->type->remove(VAR_6);
 return VAR_7;
}
