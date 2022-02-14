
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvme_ns {int lba_shift; int ms; int pi_type; TYPE_3__* ctrl; int ext; } ;
struct nvme_id_ns {scalar_t__ nabo; int nsfeat; int nsattr; scalar_t__ nows; scalar_t__ npwg; scalar_t__ nawupf; int nsze; } ;
struct gendisk {int queue; } ;
typedef int sector_t ;
struct TYPE_6__ {TYPE_2__* ops; TYPE_1__* subsys; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int awupf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gendisk*) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,unsigned short) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct gendisk*,struct nvme_ns*) ;
 int FUNC_12 (struct gendisk*,struct nvme_ns*) ;
 int FUNC_13 (struct gendisk*,int ,int ) ;
 int FUNC_14 (struct nvme_ns*) ;
 int FUNC_15 (struct gendisk*,int) ;
 int FUNC_16 (struct gendisk*,int) ;

__attribute__((used)) static void FUNC_17(struct gendisk *VAR_2,
  struct nvme_ns *VAR_3, struct nvme_id_ns *VAR_4)
{
 sector_t VAR_5 = FUNC_9(VAR_4->nsze) << (VAR_3->lba_shift - 9);
 unsigned short VAR_6 = 1 << VAR_3->lba_shift;
 u32 VAR_7, VAR_8, VAR_9;

 if (VAR_3->lba_shift > VAR_1) {

  VAR_6 = (1 << 9);
 }
 FUNC_2(VAR_2->queue);
 FUNC_1(VAR_2);

 if (VAR_4->nabo == 0) {





  if (VAR_4->nsfeat & (1 << 1) && VAR_4->nawupf)
   VAR_7 = (1 + FUNC_8(VAR_4->nawupf)) * VAR_6;
  else
   VAR_7 = (1 + VAR_3->ctrl->subsys->awupf) * VAR_6;
 } else {
  VAR_7 = VAR_6;
 }
 VAR_8 = VAR_6;
 VAR_9 = VAR_6;
 if (VAR_4->nsfeat & (1 << 4)) {

  VAR_8 *= 1 + FUNC_8(VAR_4->npwg);

  VAR_9 *= 1 + FUNC_8(VAR_4->nows);
 }

 FUNC_6(VAR_2->queue, VAR_6);





 FUNC_7(VAR_2->queue, FUNC_10(VAR_8, VAR_7));
 FUNC_4(VAR_2->queue, VAR_8);
 FUNC_5(VAR_2->queue, VAR_9);

 if (VAR_3->ms && !VAR_3->ext &&
     (VAR_3->ctrl->ops->flags & VAR_0))
  FUNC_13(VAR_2, VAR_3->ms, VAR_3->pi_type);
 if ((VAR_3->ms && !FUNC_14(VAR_3) && !FUNC_0(VAR_2)) ||
     VAR_3->lba_shift > VAR_1)
  VAR_5 = 0;

 FUNC_15(VAR_2, VAR_5);

 FUNC_11(VAR_2, VAR_3);
 FUNC_12(VAR_2, VAR_3);

 if (VAR_4->nsattr & (1 << 0))
  FUNC_16(VAR_2, 1);
 else
  FUNC_16(VAR_2, 0);

 FUNC_3(VAR_2->queue);
}
