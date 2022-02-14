
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netfront_queue {int id; int gref_tx_head; int gref_rx_head; void** grant_rx_ref; int ** rx_skbs; int ** grant_tx_page; void** grant_tx_ref; int * tx_skbs; scalar_t__ tx_skb_freelist; int name; TYPE_2__* info; int rx_refill_timer; int rx_lock; int tx_lock; } ;
struct TYPE_4__ {TYPE_1__* xbdev; } ;
struct TYPE_3__ {int nodename; } ;


 int VAR_0 ;
 void* VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ FUNC_0 (unsigned short,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned short) ;
 int FUNC_4 (int ,int,char*,char*,int) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ,char) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct netfront_queue *VAR_5)
{
 unsigned short VAR_6;
 int VAR_7 = 0;
 char *VAR_8;

 FUNC_5(&VAR_5->tx_lock);
 FUNC_5(&VAR_5->rx_lock);

 FUNC_7(&VAR_5->rx_refill_timer, VAR_4, 0);

 VAR_8 = FUNC_6(VAR_5->info->xbdev->nodename, '/') + 1;
 FUNC_4(VAR_5->name, sizeof(VAR_5->name), "vif%s-q%u",
   VAR_8, VAR_5->id);


 VAR_5->tx_skb_freelist = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_3(&VAR_5->tx_skbs[VAR_6], VAR_6+1);
  VAR_5->grant_tx_ref[VAR_6] = VAR_1;
  VAR_5->grant_tx_page[VAR_6] = ((void*)0);
 }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5->rx_skbs[VAR_6] = ((void*)0);
  VAR_5->grant_rx_ref[VAR_6] = VAR_1;
 }


 if (FUNC_0(VAR_3,
       &VAR_5->gref_tx_head) < 0) {
  FUNC_2("can't alloc tx grant refs\n");
  VAR_7 = -VAR_0;
  goto exit;
 }


 if (FUNC_0(VAR_2,
       &VAR_5->gref_rx_head) < 0) {
  FUNC_2("can't alloc rx grant refs\n");
  VAR_7 = -VAR_0;
  goto exit_free_tx;
 }

 return 0;

 exit_free_tx:
 FUNC_1(VAR_5->gref_tx_head);
 exit:
 return VAR_7;
}
