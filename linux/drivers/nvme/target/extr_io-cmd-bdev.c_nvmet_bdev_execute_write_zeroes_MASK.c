
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_req {TYPE_2__* ns; TYPE_1__* cmd; } ;
struct nvme_write_zeroes_cmd {int length; int slba; } ;
struct bio {int bi_end_io; struct nvmet_req* bi_private; } ;
typedef int sector_t ;
struct TYPE_4__ {int blksize_shift; int bdev; } ;
struct TYPE_3__ {struct nvme_write_zeroes_cmd write_zeroes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ,struct bio**,int ) ;
 int FUNC_1 (struct nvmet_req*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct nvmet_req*,int ) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static void FUNC_6(struct nvmet_req *VAR_2)
{
 struct nvme_write_zeroes_cmd *VAR_3 = &VAR_2->cmd->write_zeroes;
 struct bio *VAR_4 = ((void*)0);
 sector_t VAR_5;
 sector_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_3->slba) <<
  (VAR_2->ns->blksize_shift - 9);
 VAR_6 = (((sector_t)FUNC_2(VAR_3->length) + 1) <<
  (VAR_2->ns->blksize_shift - 9));

 VAR_7 = FUNC_0(VAR_2->ns->bdev, VAR_5, VAR_6,
   VAR_0, &VAR_4, 0);
 if (VAR_4) {
  VAR_4->bi_private = VAR_2;
  VAR_4->bi_end_io = VAR_1;
  FUNC_5(VAR_4);
 } else {
  FUNC_4(VAR_2, FUNC_1(VAR_2, VAR_7));
 }
}
