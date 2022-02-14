
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_ctrl_options {scalar_t__ queue_size; } ;
struct nvme_ctrl {scalar_t__ sqsize; scalar_t__ maxcmd; int queue_count; scalar_t__ state; int device; scalar_t__ icdoff; struct nvmf_ctrl_options* opts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct nvme_ctrl*,int ) ;
 int FUNC_4 (struct nvme_ctrl*) ;
 int FUNC_5 (struct nvme_ctrl*,int) ;
 int FUNC_6 (struct nvme_ctrl*,int) ;
 int FUNC_7 (struct nvme_ctrl*,int) ;
 int FUNC_8 (struct nvme_ctrl*,int) ;
 int FUNC_9 (struct nvme_ctrl*,int ) ;

__attribute__((used)) static int FUNC_10(struct nvme_ctrl *VAR_3, bool VAR_4)
{
 struct nvmf_ctrl_options *VAR_5 = VAR_3->opts;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->icdoff) {
  FUNC_1(VAR_3->device, "icdoff is not supported!\n");
  goto destroy_admin;
 }

 if (VAR_5->queue_size > VAR_3->sqsize + 1)
  FUNC_2(VAR_3->device,
   "queue_size %zu > ctrl sqsize %u, clamping down\n",
   VAR_5->queue_size, VAR_3->sqsize + 1);

 if (VAR_3->sqsize + 1 > VAR_3->maxcmd) {
  FUNC_2(VAR_3->device,
   "sqsize %u > ctrl maxcmd %u, clamping down\n",
   VAR_3->sqsize + 1, VAR_3->maxcmd);
  VAR_3->sqsize = VAR_3->maxcmd - 1;
 }

 if (VAR_3->queue_count > 1) {
  VAR_6 = FUNC_6(VAR_3, VAR_4);
  if (VAR_6)
   goto destroy_admin;
 }

 if (!FUNC_3(VAR_3, VAR_2)) {

  FUNC_0(VAR_3->state != VAR_1);
  VAR_6 = -VAR_0;
  goto destroy_io;
 }

 FUNC_4(VAR_3);
 return 0;

destroy_io:
 if (VAR_3->queue_count > 1)
  FUNC_8(VAR_3, VAR_4);
destroy_admin:
 FUNC_9(VAR_3, 0);
 FUNC_7(VAR_3, VAR_4);
 return VAR_6;
}
