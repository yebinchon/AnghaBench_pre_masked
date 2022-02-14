
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msix_entry {unsigned int entry; int vector; } ;
struct ef4_nic {scalar_t__ interrupt_mode; unsigned int n_channels; unsigned int n_tx_channels; unsigned int n_rx_channels; int rss_spread; TYPE_1__** extra_channel_type; TYPE_2__* pci_dev; int legacy_irq; int net_dev; int max_tx_channels; int max_channels; } ;
struct TYPE_7__ {TYPE_1__* type; int irq; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int (* handle_no_channel ) (struct ef4_nic*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (struct ef4_nic*,unsigned int) ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_1 (struct ef4_nic*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 void* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct ef4_nic*,int ,int ,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct msix_entry*,int,unsigned int) ;
 int FUNC_7 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_8(struct ef4_nic *VAR_7)
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

  VAR_13 = FUNC_1(VAR_7);
  if (VAR_6)
   VAR_13 *= 2;
  VAR_13 += VAR_8;
  VAR_13 = FUNC_3(VAR_13, VAR_7->max_channels);

  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
   VAR_12[VAR_9].entry = VAR_9;
  VAR_11 = FUNC_6(VAR_7->pci_dev,
        VAR_12, 1, VAR_13);
  if (VAR_11 < 0) {

   VAR_7->interrupt_mode = VAR_1;
   FUNC_4(VAR_7, VAR_5, VAR_7->net_dev,
      "could not enable MSI-X\n");
  } else if (VAR_11 < VAR_13) {
   FUNC_4(VAR_7, VAR_5, VAR_7->net_dev,
      "WARNING: Insufficient MSI-X vectors"
      " available (%d < %u).\n", VAR_11, VAR_13);
   FUNC_4(VAR_7, VAR_5, VAR_7->net_dev,
      "WARNING: Performance may be reduced.\n");
   VAR_13 = VAR_11;
  }

  if (VAR_11 > 0) {
   VAR_7->n_channels = VAR_13;
   if (VAR_13 > VAR_8)
    VAR_13 -= VAR_8;
   if (VAR_6) {
    VAR_7->n_tx_channels = FUNC_3(FUNC_2(VAR_13 / 2,
            1U),
        VAR_7->max_tx_channels);
    VAR_7->n_rx_channels = FUNC_2(VAR_13 -
        VAR_7->n_tx_channels,
        1U);
   } else {
    VAR_7->n_tx_channels = FUNC_3(VAR_13,
        VAR_7->max_tx_channels);
    VAR_7->n_rx_channels = VAR_13;
   }
   for (VAR_9 = 0; VAR_9 < VAR_7->n_channels; VAR_9++)
    FUNC_0(VAR_7, VAR_9)->irq =
     VAR_12[VAR_9].vector;
  }
 }


 if (VAR_7->interrupt_mode == VAR_1) {
  VAR_7->n_channels = 1;
  VAR_7->n_rx_channels = 1;
  VAR_7->n_tx_channels = 1;
  VAR_11 = FUNC_5(VAR_7->pci_dev);
  if (VAR_11 == 0) {
   FUNC_0(VAR_7, 0)->irq = VAR_7->pci_dev->irq;
  } else {
   FUNC_4(VAR_7, VAR_5, VAR_7->net_dev,
      "could not enable MSI\n");
   VAR_7->interrupt_mode = VAR_0;
  }
 }


 if (VAR_7->interrupt_mode == VAR_0) {
  VAR_7->n_channels = 1 + (VAR_6 ? 1 : 0);
  VAR_7->n_rx_channels = 1;
  VAR_7->n_tx_channels = 1;
  VAR_7->legacy_irq = VAR_7->pci_dev->irq;
 }


 VAR_10 = VAR_7->n_channels;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (!VAR_7->extra_channel_type[VAR_9])
   continue;
  if (VAR_7->interrupt_mode != VAR_2 ||
      VAR_7->n_channels <= VAR_8) {
   VAR_7->extra_channel_type[VAR_9]->handle_no_channel(VAR_7);
  } else {
   --VAR_10;
   FUNC_0(VAR_7, VAR_10)->type =
    VAR_7->extra_channel_type[VAR_9];
  }
 }

 VAR_7->rss_spread = VAR_7->n_rx_channels;

 return 0;
}
