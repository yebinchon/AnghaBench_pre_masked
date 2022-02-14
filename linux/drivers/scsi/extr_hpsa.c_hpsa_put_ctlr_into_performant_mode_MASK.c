
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ctlr_info {int nreply_queues; scalar_t__ msix_vectors; int reply_queue_size; int max_commands; int * blockFetchTable; TYPE_3__* reply_queue; TYPE_2__* pdev; TYPE_1__* cfgtable; } ;
struct TYPE_6__ {int size; int wraparound; scalar_t__ current_entry; int head; int busaddr; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int TransportSupport; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct ctlr_info*) ;
 int FUNC_2 (struct ctlr_info*) ;
 int FUNC_3 (struct ctlr_info*,int) ;
 int FUNC_4 (struct ctlr_info*) ;
 int FUNC_5 (struct ctlr_info*) ;
 int FUNC_6 (struct ctlr_info*) ;
 int FUNC_7 (struct ctlr_info*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ctlr_info *VAR_10)
{
 u32 VAR_11;
 unsigned long VAR_12 = VAR_0 |
     VAR_4;
 int VAR_13, VAR_14;

 if (VAR_9)
  return 0;

 VAR_11 = FUNC_10(&(VAR_10->cfgtable->TransportSupport));
 if (!(VAR_11 & VAR_7))
  return 0;


 if (VAR_11 & VAR_2) {
  VAR_12 |= VAR_2 |
    VAR_1;
  VAR_14 = FUNC_1(VAR_10);
  if (VAR_14)
   return VAR_14;
 } else if (VAR_11 & VAR_3) {
  VAR_12 |= VAR_3 |
    VAR_1;
  VAR_14 = FUNC_2(VAR_10);
  if (VAR_14)
   return VAR_14;
 }

 VAR_10->nreply_queues = VAR_10->msix_vectors > 0 ? VAR_10->msix_vectors : 1;
 FUNC_7(VAR_10);

 VAR_10->reply_queue_size = VAR_10->max_commands * sizeof(u64);

 for (VAR_13 = 0; VAR_13 < VAR_10->nreply_queues; VAR_13++) {
  VAR_10->reply_queue[VAR_13].head = FUNC_0(&VAR_10->pdev->dev,
      VAR_10->reply_queue_size,
      &VAR_10->reply_queue[VAR_13].busaddr,
      VAR_6);
  if (!VAR_10->reply_queue[VAR_13].head) {
   VAR_14 = -VAR_5;
   goto clean1;
  }
  VAR_10->reply_queue[VAR_13].size = VAR_10->max_commands;
  VAR_10->reply_queue[VAR_13].wraparound = 1;
  VAR_10->reply_queue[VAR_13].current_entry = 0;
 }


 VAR_10->blockFetchTable = FUNC_9(((VAR_8 + 1) *
    sizeof(u32)), VAR_6);
 if (!VAR_10->blockFetchTable) {
  VAR_14 = -VAR_5;
  goto clean1;
 }

 VAR_14 = FUNC_3(VAR_10, VAR_11);
 if (VAR_14)
  goto clean2;
 return 0;

clean2:
 FUNC_8(VAR_10->blockFetchTable);
 VAR_10->blockFetchTable = ((void*)0);
clean1:
 FUNC_6(VAR_10);
 FUNC_4(VAR_10);
 FUNC_5(VAR_10);
 return VAR_14;
}
