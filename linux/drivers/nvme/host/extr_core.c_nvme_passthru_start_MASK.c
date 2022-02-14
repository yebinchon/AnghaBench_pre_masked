
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct nvme_ns {int dummy; } ;
struct nvme_ctrl {TYPE_2__* subsys; int scan_lock; TYPE_1__* effects; int device; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int * acs; int * iocs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct nvme_ctrl*) ;
 int FUNC_7 (struct nvme_ctrl*) ;

__attribute__((used)) static u32 FUNC_8(struct nvme_ctrl *VAR_3, struct nvme_ns *VAR_4,
        u8 VAR_5)
{
 u32 VAR_6 = 0;

 if (VAR_4) {
  if (VAR_3->effects)
   VAR_6 = FUNC_1(VAR_3->effects->iocs[VAR_5]);
  if (VAR_6 & ~(VAR_1 | VAR_2))
   FUNC_0(VAR_3->device,
     "IO command:%02x has unhandled effects:%08x\n",
     VAR_5, VAR_6);
  return 0;
 }

 if (VAR_3->effects)
  VAR_6 = FUNC_1(VAR_3->effects->acs[VAR_5]);
 VAR_6 |= FUNC_3(VAR_5);





 if (VAR_6 & (VAR_2 | VAR_0)) {
  FUNC_2(&VAR_3->scan_lock);
  FUNC_2(&VAR_3->subsys->lock);
  FUNC_4(VAR_3->subsys);
  FUNC_5(VAR_3->subsys);
  FUNC_6(VAR_3);
  FUNC_7(VAR_3);
 }
 return VAR_6;
}
