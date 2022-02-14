
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ena_tx_buffer {unsigned long last_jiffies; int print_once; } ;
struct TYPE_2__ {scalar_t__ missed_tx; } ;
struct ena_ring {int ring_size; int syncp; TYPE_1__ tx_stats; int qid; int first_interrupt; struct ena_tx_buffer* tx_buffer_info; } ;
struct ena_adapter {int missing_tx_completion_to; int flags; int reset_reason; scalar_t__ missing_tx_completion_threshold; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ena_adapter*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_1 (struct ena_adapter*,int ,int ,char*,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ena_adapter *VAR_5,
       struct ena_ring *VAR_6)
{
 struct ena_tx_buffer *VAR_7;
 unsigned long VAR_8;
 u32 VAR_9 = 0;
 int VAR_10, VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_6->ring_size; VAR_10++) {
  VAR_7 = &VAR_6->tx_buffer_info[VAR_10];
  VAR_8 = VAR_7->last_jiffies;

  if (VAR_8 == 0)

   continue;

  if (FUNC_7(!VAR_6->first_interrupt && FUNC_4(VAR_8 +
        2 * VAR_5->missing_tx_completion_to))) {



   FUNC_0(VAR_5, VAR_4, VAR_5->netdev,
      "Potential MSIX issue on Tx side Queue = %d. Reset the device\n",
      VAR_6->qid);
   VAR_5->reset_reason = VAR_2;
   FUNC_3();
   FUNC_2(VAR_1, &VAR_5->flags);
   return -VAR_0;
  }

  if (FUNC_7(FUNC_4(VAR_8 +
    VAR_5->missing_tx_completion_to))) {
   if (!VAR_7->print_once)
    FUNC_1(VAR_5, VAR_4, VAR_5->netdev,
          "Found a Tx that wasn't completed on time, qid %d, index %d.\n",
          VAR_6->qid, VAR_10);

   VAR_7->print_once = 1;
   VAR_9++;
  }
 }

 if (FUNC_7(VAR_9 > VAR_5->missing_tx_completion_threshold)) {
  FUNC_0(VAR_5, VAR_4, VAR_5->netdev,
     "The number of lost tx completions is above the threshold (%d > %d). Reset the device\n",
     VAR_9,
     VAR_5->missing_tx_completion_threshold);
  VAR_5->reset_reason =
   VAR_3;
  FUNC_2(VAR_1, &VAR_5->flags);
  VAR_11 = -VAR_0;
 }

 FUNC_5(&VAR_6->syncp);
 VAR_6->tx_stats.missed_tx = VAR_9;
 FUNC_6(&VAR_6->syncp);

 return VAR_11;
}
