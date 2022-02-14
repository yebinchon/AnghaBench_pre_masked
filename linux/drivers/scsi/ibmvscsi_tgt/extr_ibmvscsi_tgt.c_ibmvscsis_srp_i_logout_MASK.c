
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct viosrp_crq {int dummy; } ;
struct srp_i_logout {int tag; } ;
struct scsi_info {scalar_t__ debit; int waiting_rsp; int dev; int schedule_q; } ;
struct mad_common {int dummy; } ;
struct iu_entry {int dummy; } ;
struct TYPE_5__ {int len; int tag; int format; } ;
struct ibmvscsis_cmd {int list; TYPE_2__ rsp; struct iu_entry* iue; } ;
struct TYPE_4__ {struct srp_i_logout i_logout; } ;
struct TYPE_6__ {TYPE_1__ srp; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct scsi_info*,int ,int ) ;
 int FUNC_2 (struct scsi_info*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (struct iu_entry*) ;

__attribute__((used)) static long FUNC_6(struct scsi_info *VAR_4,
       struct ibmvscsis_cmd *VAR_5,
       struct viosrp_crq *VAR_6)
{
 struct iu_entry *VAR_7 = VAR_5->iue;
 struct srp_i_logout *VAR_8 = &FUNC_5(VAR_7)->srp.i_logout;
 long VAR_9 = VAR_0;

 if ((VAR_4->debit > 0) || !FUNC_4(&VAR_4->schedule_q) ||
     !FUNC_4(&VAR_4->waiting_rsp)) {
  FUNC_0(&VAR_4->dev, "i_logout: outstanding work\n");
  FUNC_1(VAR_4, VAR_1, 0);
 } else {
  VAR_5->rsp.format = VAR_2;
  VAR_5->rsp.tag = VAR_8->tag;
  VAR_5->rsp.len = sizeof(struct mad_common);
  FUNC_3(&VAR_5->list, &VAR_4->waiting_rsp);
  FUNC_2(VAR_4);

  FUNC_1(VAR_4, VAR_3, 0);
 }

 return VAR_9;
}
