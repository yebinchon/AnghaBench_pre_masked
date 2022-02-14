
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int length; int type; } ;
struct viosrp_fast_fail {TYPE_3__ common; } ;
struct TYPE_5__ {struct viosrp_fast_fail fast_fail; } ;
struct TYPE_6__ {TYPE_1__ mad; } ;
struct srp_event_struct {TYPE_2__ iu; } ;
struct ibmvscsi_host_data {TYPE_4__* host; int pool; } ;
struct TYPE_8__ {int host_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct srp_event_struct* FUNC_3 (int *) ;
 int FUNC_4 (struct srp_event_struct*,struct ibmvscsi_host_data*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct srp_event_struct*,int ,int ,int) ;
 int FUNC_6 (struct viosrp_fast_fail*,int ,int) ;
 int FUNC_7 (struct ibmvscsi_host_data*) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct ibmvscsi_host_data *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 struct viosrp_fast_fail *VAR_8;
 struct srp_event_struct *VAR_9;

 if (!VAR_2) {
  FUNC_7(VAR_5);
  return 0;
 }

 VAR_9 = FUNC_3(&VAR_5->pool);
 FUNC_0(!VAR_9);

 FUNC_5(VAR_9, VAR_3, VAR_1, VAR_4);

 VAR_8 = &VAR_9->iu.mad.fast_fail;
 FUNC_6(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->common.type = FUNC_2(VAR_0);
 VAR_8->common.length = FUNC_1(sizeof(*VAR_8));

 FUNC_8(VAR_5->host->host_lock, VAR_7);
 VAR_6 = FUNC_4(VAR_9, VAR_5, VAR_4 * 2);
 FUNC_9(VAR_5->host->host_lock, VAR_7);
 return VAR_6;
}
