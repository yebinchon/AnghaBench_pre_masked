
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvmet_req {int error_slba; struct nvmet_ns* ns; } ;
struct nvmet_ns {int blksize_shift; int bdev; } ;
struct nvme_dsm_range {int slba; int nlb; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int ,int ,struct bio**) ;
 int FUNC_1 (struct nvmet_req*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u16 FUNC_4(struct nvmet_req *VAR_3,
  struct nvme_dsm_range *VAR_4, struct bio **VAR_5)
{
 struct nvmet_ns *VAR_6 = VAR_3->ns;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->bdev,
   FUNC_3(VAR_4->slba) << (VAR_6->blksize_shift - 9),
   FUNC_2(VAR_4->nlb) << (VAR_6->blksize_shift - 9),
   VAR_1, 0, VAR_5);
 if (VAR_7 && VAR_7 != -VAR_0) {
  VAR_3->error_slba = FUNC_3(VAR_4->slba);
  return FUNC_1(VAR_3, VAR_7);
 }
 return VAR_2;
}
