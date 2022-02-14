
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {int dev; } ;
struct nvmet_fc_tgt_queue {int sqsize; int fod_list; struct nvmet_fc_fcp_iod* fod; } ;
struct nvmet_fc_fcp_iod {int active; int abort; int aborted; long rspdma; int fcp_list; int rspiubuf; int flock; int * fcpreq; struct nvmet_fc_tgt_queue* queue; struct nvmet_fc_tgtport* tgtport; int defer_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 long FUNC_1 (int ,int *,int,int ) ;
 scalar_t__ FUNC_2 (int ,long) ;
 int FUNC_3 (int ,long,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct nvmet_fc_tgtport *VAR_2,
    struct nvmet_fc_tgt_queue *VAR_3)
{
 struct nvmet_fc_fcp_iod *VAR_4 = VAR_3->fod;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->sqsize; VAR_4++, VAR_5++) {
  FUNC_0(&VAR_4->defer_work, VAR_1);
  VAR_4->tgtport = VAR_2;
  VAR_4->queue = VAR_3;
  VAR_4->active = 0;
  VAR_4->abort = 0;
  VAR_4->aborted = 0;
  VAR_4->fcpreq = ((void*)0);
  FUNC_4(&VAR_4->fcp_list, &VAR_3->fod_list);
  FUNC_6(&VAR_4->flock);

  VAR_4->rspdma = FUNC_1(VAR_2->dev, &VAR_4->rspiubuf,
     sizeof(VAR_4->rspiubuf), VAR_0);
  if (FUNC_2(VAR_2->dev, VAR_4->rspdma)) {
   FUNC_5(&VAR_4->fcp_list);
   for (VAR_4--, VAR_5--; VAR_5 >= 0; VAR_4--, VAR_5--) {
    FUNC_3(VAR_2->dev, VAR_4->rspdma,
      sizeof(VAR_4->rspiubuf),
      VAR_0);
    VAR_4->rspdma = 0L;
    FUNC_5(&VAR_4->fcp_list);
   }

   return;
  }
 }
}
