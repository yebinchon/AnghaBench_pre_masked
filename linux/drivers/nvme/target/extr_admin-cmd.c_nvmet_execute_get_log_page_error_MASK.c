
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct nvmet_req {TYPE_1__* sq; } ;
struct nvmet_ctrl {size_t err_counter; int error_lock; int * slots; } ;
struct nvme_error_slot {int dummy; } ;
typedef int off_t ;
struct TYPE_2__ {struct nvmet_ctrl* ctrl; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct nvmet_req*,int,int *,int) ;
 int FUNC_1 (struct nvmet_req*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct nvmet_req *VAR_1)
{
 struct nvmet_ctrl *VAR_2 = VAR_1->sq->ctrl;
 unsigned long VAR_3;
 off_t VAR_4 = 0;
 u64 VAR_5;
 u64 VAR_6;

 FUNC_2(&VAR_2->error_lock, VAR_3);
 VAR_5 = VAR_2->err_counter % VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_0(VAR_1, VAR_4, &VAR_2->slots[VAR_5],
    sizeof(struct nvme_error_slot)))
   break;

  if (VAR_5 == 0)
   VAR_5 = VAR_0 - 1;
  else
   VAR_5--;
  VAR_4 += sizeof(struct nvme_error_slot);
 }
 FUNC_3(&VAR_2->error_lock, VAR_3);
 FUNC_1(VAR_1, 0);
}
