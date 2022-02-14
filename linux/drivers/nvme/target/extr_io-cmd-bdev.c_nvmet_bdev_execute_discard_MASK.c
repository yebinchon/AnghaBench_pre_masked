
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvmet_req {TYPE_2__* cmd; } ;
struct nvme_dsm_range {int dummy; } ;
struct bio {int bi_status; int bi_end_io; struct nvmet_req* bi_private; } ;
typedef int range ;
struct TYPE_3__ {int nr; } ;
struct TYPE_4__ {TYPE_1__ dsm; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nvmet_req*,struct nvme_dsm_range*,struct bio**) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct nvmet_req*,int,struct nvme_dsm_range*,int) ;
 int FUNC_4 (struct nvmet_req*,scalar_t__) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static void FUNC_6(struct nvmet_req *VAR_2)
{
 struct nvme_dsm_range VAR_3;
 struct bio *VAR_4 = ((void*)0);
 int VAR_5;
 u16 VAR_6;

 for (VAR_5 = 0; VAR_5 <= FUNC_1(VAR_2->cmd->dsm.nr); VAR_5++) {
  VAR_6 = FUNC_3(VAR_2, VAR_5 * sizeof(VAR_3), &VAR_3,
    sizeof(VAR_3));
  if (VAR_6)
   break;

  VAR_6 = FUNC_2(VAR_2, &VAR_3, &VAR_4);
  if (VAR_6)
   break;
 }

 if (VAR_4) {
  VAR_4->bi_private = VAR_2;
  VAR_4->bi_end_io = VAR_1;
  if (VAR_6) {
   VAR_4->bi_status = VAR_0;
   FUNC_0(VAR_4);
  } else {
   FUNC_5(VAR_4);
  }
 } else {
  FUNC_4(VAR_2, VAR_6);
 }
}
