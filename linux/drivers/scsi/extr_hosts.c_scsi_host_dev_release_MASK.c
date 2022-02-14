
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device* parent; } ;
struct TYPE_2__ {scalar_t__ tags; } ;
struct Scsi_Host {scalar_t__ shost_state; int host_no; struct Scsi_Host* shost_data; TYPE_1__ tag_set; int shost_dev; scalar_t__ work_q; scalar_t__ ehandler; scalar_t__ tmf_work_q; int hostt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct Scsi_Host* FUNC_1 (int *) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_2(VAR_2);
 struct device *VAR_4 = VAR_2->parent;

 FUNC_9(VAR_3->hostt);


 FUNC_7();

 if (VAR_3->tmf_work_q)
  FUNC_0(VAR_3->tmf_work_q);
 if (VAR_3->ehandler)
  FUNC_5(VAR_3->ehandler);
 if (VAR_3->work_q)
  FUNC_0(VAR_3->work_q);

 if (VAR_3->shost_state == VAR_0) {







  FUNC_4(FUNC_1(&VAR_3->shost_dev));
 }

 if (VAR_3->tag_set.tags)
  FUNC_8(VAR_3);

 FUNC_4(VAR_3->shost_data);

 FUNC_3(&VAR_1, VAR_3->host_no);

 if (VAR_4)
  FUNC_6(VAR_4);
 FUNC_4(VAR_3);
}
