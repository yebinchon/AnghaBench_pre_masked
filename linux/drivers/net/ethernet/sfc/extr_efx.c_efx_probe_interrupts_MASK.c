
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct msix_entry {unsigned int entry; int vector; } ;
struct efx_nic {scalar_t__ interrupt_mode; unsigned int n_channels; unsigned int n_tx_channels; unsigned int n_rx_channels; int rss_spread; TYPE_2__* type; scalar_t__ n_extra_tx_channels; TYPE_1__** extra_channel_type; TYPE_3__* pci_dev; int legacy_irq; int net_dev; int max_tx_channels; int max_channels; } ;
struct TYPE_10__ {TYPE_1__* type; int irq; } ;
struct TYPE_9__ {int irq; } ;
struct TYPE_8__ {scalar_t__ min_interrupt_mode; int (* sriov_wanted ) (struct efx_nic*) ;} ;
struct TYPE_7__ {int (* handle_no_channel ) (struct efx_nic*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (struct efx_nic*,unsigned int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct efx_nic*) ;
 unsigned int FUNC_3 (struct efx_nic*) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 void* FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,struct msix_entry*,int,unsigned int) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_11(struct efx_nic *VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  if (VAR_7->extra_channel_type[VAR_9])
   ++VAR_8;

 if (VAR_7->interrupt_mode == VAR_2) {
  struct msix_entry VAR_12[VAR_3];
  unsigned int VAR_13;

  VAR_13 = FUNC_3(VAR_7);
  if (VAR_6)
   VAR_13 *= 2;
  VAR_13 += VAR_8;
  VAR_13 = FUNC_5(VAR_13, VAR_7->max_channels);

  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
   VAR_12[VAR_9].entry = VAR_9;
  VAR_11 = FUNC_8(VAR_7->pci_dev,
        VAR_12, 1, VAR_13);
  if (VAR_11 < 0) {

   FUNC_6(VAR_7, VAR_5, VAR_7->net_dev,
      "could not enable MSI-X\n");
   if (VAR_7->type->min_interrupt_mode >= VAR_1)
    VAR_7->interrupt_mode = VAR_1;
   else
    return VAR_11;
  } else if (VAR_11 < VAR_13) {
   FUNC_6(VAR_7, VAR_5, VAR_7->net_dev,
      "WARNING: Insufficient MSI-X vectors"
      " available (%d < %u).\n", VAR_11, VAR_13);
   FUNC_6(VAR_7, VAR_5, VAR_7->net_dev,
      "WARNING: Performance may be reduced.\n");
   VAR_13 = VAR_11;
  }

  if (VAR_11 > 0) {
   VAR_7->n_channels = VAR_13;
   if (VAR_13 > VAR_8)
    VAR_13 -= VAR_8;
   if (VAR_6) {
    VAR_7->n_tx_channels = FUNC_5(FUNC_4(VAR_13 / 2,
            1U),
        VAR_7->max_tx_channels);
    VAR_7->n_rx_channels = FUNC_4(VAR_13 -
        VAR_7->n_tx_channels,
        1U);
   } else {
    VAR_7->n_tx_channels = FUNC_5(VAR_13,
        VAR_7->max_tx_channels);
    VAR_7->n_rx_channels = VAR_13;
   }
   for (VAR_9 = 0; VAR_9 < VAR_7->n_channels; VAR_9++)
    FUNC_1(VAR_7, VAR_9)->irq =
     VAR_12[VAR_9].vector;
  }
 }


 if (VAR_7->interrupt_mode == VAR_1) {
  VAR_7->n_channels = 1;
  VAR_7->n_rx_channels = 1;
  VAR_7->n_tx_channels = 1;
  VAR_11 = FUNC_7(VAR_7->pci_dev);
  if (VAR_11 == 0) {
   FUNC_1(VAR_7, 0)->irq = VAR_7->pci_dev->irq;
  } else {
   FUNC_6(VAR_7, VAR_5, VAR_7->net_dev,
      "could not enable MSI\n");
   if (VAR_7->type->min_interrupt_mode >= VAR_0)
    VAR_7->interrupt_mode = VAR_0;
   else
    return VAR_11;
  }
 }


 if (VAR_7->interrupt_mode == VAR_0) {
  VAR_7->n_channels = 1 + (VAR_6 ? 1 : 0);
  VAR_7->n_rx_channels = 1;
  VAR_7->n_tx_channels = 1;
  VAR_7->legacy_irq = VAR_7->pci_dev->irq;
 }


 VAR_7->n_extra_tx_channels = 0;
 VAR_10 = VAR_7->n_channels;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (!VAR_7->extra_channel_type[VAR_9])
   continue;
  if (VAR_7->interrupt_mode != VAR_2 ||
      VAR_7->n_channels <= VAR_8) {
   VAR_7->extra_channel_type[VAR_9]->handle_no_channel(VAR_7);
  } else {
   --VAR_10;
   FUNC_1(VAR_7, VAR_10)->type =
    VAR_7->extra_channel_type[VAR_9];
   if (FUNC_0(FUNC_1(VAR_7, VAR_10)))
    VAR_7->n_extra_tx_channels++;
  }
 }
 VAR_7->rss_spread = VAR_7->n_rx_channels;

 return 0;
}
