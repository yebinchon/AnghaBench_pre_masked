
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {int cq_id; } ;
struct ql_adapter {size_t rss_ring_count; scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; int rx_ring_count; scalar_t__ rx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames; int ndev; struct rx_ring* rx_ring; } ;
struct cqicb {void* flags; void* pkt_delay; void* irq_delay; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ql_adapter*,struct cqicb*,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ql_adapter *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct rx_ring *VAR_6;
 struct cqicb *VAR_7;

 if (!FUNC_3(VAR_3->ndev))
  return VAR_5;




 VAR_7 = (struct cqicb *)&VAR_3->rx_ring[VAR_3->rss_ring_count];
 if (FUNC_1(VAR_7->irq_delay) != VAR_3->tx_coalesce_usecs ||
  FUNC_1(VAR_7->pkt_delay) !=
    VAR_3->tx_max_coalesced_frames) {
  for (VAR_4 = VAR_3->rss_ring_count; VAR_4 < VAR_3->rx_ring_count; VAR_4++) {
   VAR_6 = &VAR_3->rx_ring[VAR_4];
   VAR_7 = (struct cqicb *)VAR_6;
   VAR_7->irq_delay = FUNC_0(VAR_3->tx_coalesce_usecs);
   VAR_7->pkt_delay =
       FUNC_0(VAR_3->tx_max_coalesced_frames);
   VAR_7->flags = VAR_1;
   VAR_5 = FUNC_4(VAR_3, VAR_7, sizeof(*VAR_7),
      VAR_0, VAR_6->cq_id);
   if (VAR_5) {
    FUNC_2(VAR_3, VAR_2, VAR_3->ndev,
       "Failed to load CQICB.\n");
    goto exit;
   }
  }
 }


 VAR_7 = (struct cqicb *)&VAR_3->rx_ring[0];
 if (FUNC_1(VAR_7->irq_delay) != VAR_3->rx_coalesce_usecs ||
  FUNC_1(VAR_7->pkt_delay) !=
     VAR_3->rx_max_coalesced_frames) {
  for (VAR_4 = 0; VAR_4 < VAR_3->rss_ring_count; VAR_4++, VAR_6++) {
   VAR_6 = &VAR_3->rx_ring[VAR_4];
   VAR_7 = (struct cqicb *)VAR_6;
   VAR_7->irq_delay = FUNC_0(VAR_3->rx_coalesce_usecs);
   VAR_7->pkt_delay =
       FUNC_0(VAR_3->rx_max_coalesced_frames);
   VAR_7->flags = VAR_1;
   VAR_5 = FUNC_4(VAR_3, VAR_7, sizeof(*VAR_7),
      VAR_0, VAR_6->cq_id);
   if (VAR_5) {
    FUNC_2(VAR_3, VAR_2, VAR_3->ndev,
       "Failed to load CQICB.\n");
    goto exit;
   }
  }
 }
exit:
 return VAR_5;
}
