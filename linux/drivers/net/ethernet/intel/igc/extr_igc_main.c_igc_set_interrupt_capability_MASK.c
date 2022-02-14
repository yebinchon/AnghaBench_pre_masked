
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct msix_entry {int dummy; } ;
struct igc_adapter {int flags; int num_rx_queues; int rss_queues; int num_tx_queues; int num_q_vectors; int pdev; TYPE_1__* msix_entries; } ;
struct TYPE_4__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct igc_adapter*) ;
 TYPE_1__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(struct igc_adapter *VAR_4,
      bool VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_5)
  goto msi_only;
 VAR_4->flags |= VAR_2;


 VAR_4->num_rx_queues = VAR_4->rss_queues;

 VAR_4->num_tx_queues = VAR_4->rss_queues;


 VAR_6 = VAR_4->num_rx_queues;


 if (!(VAR_4->flags & VAR_3))
  VAR_6 += VAR_4->num_tx_queues;


 VAR_4->num_q_vectors = VAR_6;


 VAR_6++;

 VAR_4->msix_entries = FUNC_1(VAR_6, sizeof(struct msix_entry),
     VAR_0);

 if (!VAR_4->msix_entries)
  return;


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_4->msix_entries[VAR_7].entry = VAR_7;

 VAR_8 = FUNC_4(VAR_4->pdev,
        VAR_4->msix_entries,
        VAR_6,
        VAR_6);
 if (VAR_8 > 0)
  return;

 FUNC_2(VAR_4->msix_entries);
 VAR_4->msix_entries = ((void*)0);

 FUNC_0(VAR_4);

msi_only:
 VAR_4->flags &= ~VAR_2;

 VAR_4->rss_queues = 1;
 VAR_4->flags |= VAR_3;
 VAR_4->num_rx_queues = 1;
 VAR_4->num_tx_queues = 1;
 VAR_4->num_q_vectors = 1;
 if (!FUNC_3(VAR_4->pdev))
  VAR_4->flags |= VAR_1;
}
