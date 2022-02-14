
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_tcb {int usrtags; } ;
struct TYPE_3__ {int scdev_depth; } ;
struct sym_lcb {TYPE_1__ s; int user_flags; int curr_flags; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct scsi_device {size_t id; int sdev_target; int lun; int tagged_supported; int host; } ;
struct TYPE_4__ {int max_tag; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;
 struct sym_hcb* FUNC_3 (int ) ;
 struct sym_lcb* FUNC_4 (struct sym_tcb*,int ) ;
 int FUNC_5 (struct sym_tcb*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_2)
{
 struct sym_hcb *VAR_3 = FUNC_3(VAR_2->host);
 struct sym_tcb *VAR_4 = &VAR_3->target[VAR_2->id];
 struct sym_lcb *VAR_5 = FUNC_4(VAR_4, VAR_2->lun);
 int VAR_6, VAR_7;




 VAR_5->curr_flags = VAR_5->user_flags;







 VAR_6 = VAR_1.max_tag;
 if (VAR_6 > VAR_4->usrtags)
  VAR_6 = VAR_4->usrtags;
 if (!VAR_2->tagged_supported)
  VAR_6 = 0;
 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;
 VAR_7 = VAR_6 ? VAR_6 : 1;
 FUNC_0(VAR_2, VAR_7);
 VAR_5->s.scdev_depth = VAR_7;
 FUNC_5(VAR_4, VAR_2->lun, VAR_6);

 if (!FUNC_2(VAR_2->sdev_target))
  FUNC_1(VAR_2);

 return 0;
}
