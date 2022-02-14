
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t10_pi_tuple {int dummy; } ;
struct nvme_ns {int lba_shift; int ms; int ext; int pi_type; TYPE_2__* head; int queue; void* noiob; } ;
struct nvme_id_ns {size_t flbas; int dps; TYPE_1__* lbaf; int noiob; } ;
struct gendisk {int queue; struct nvme_ns* private_data; } ;
struct TYPE_4__ {struct gendisk* disk; } ;
struct TYPE_3__ {int ds; int ms; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_ns*) ;
 int FUNC_3 (struct gendisk*,struct nvme_ns*,struct nvme_id_ns*) ;
 int FUNC_4 (struct gendisk*) ;

__attribute__((used)) static void FUNC_5(struct gendisk *VAR_3, struct nvme_id_ns *VAR_4)
{
 struct nvme_ns *VAR_5 = VAR_3->private_data;





 VAR_5->lba_shift = VAR_4->lbaf[VAR_4->flbas & VAR_1].ds;
 if (VAR_5->lba_shift == 0)
  VAR_5->lba_shift = 9;
 VAR_5->noiob = FUNC_1(VAR_4->noiob);
 VAR_5->ms = FUNC_1(VAR_4->lbaf[VAR_4->flbas & VAR_1].ms);
 VAR_5->ext = VAR_5->ms && (VAR_4->flbas & VAR_2);

 if (VAR_5->ms == sizeof(struct t10_pi_tuple))
  VAR_5->pi_type = VAR_4->dps & VAR_0;
 else
  VAR_5->pi_type = 0;

 if (VAR_5->noiob)
  FUNC_2(VAR_5);
 FUNC_3(VAR_3, VAR_5, VAR_4);







}
