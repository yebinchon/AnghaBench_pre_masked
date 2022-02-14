
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi {int ctrl_epid; struct htc_target* htc; } ;
struct htc_target {int dummy; } ;
struct TYPE_2__ {int rx; int tx; struct wmi* priv; } ;
struct htc_service_connreq {int service_id; TYPE_1__ ep_callbacks; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
typedef int connect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct htc_target*,struct htc_service_connreq*,int*) ;
 int FUNC_1 (struct htc_service_connreq*,int ,int) ;

int FUNC_2(struct htc_target *VAR_3, struct wmi *VAR_4,
        enum htc_endpoint_id *VAR_5)
{
 struct htc_service_connreq VAR_6;
 int VAR_7;

 VAR_4->htc = VAR_3;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.ep_callbacks.priv = VAR_4;
 VAR_6.ep_callbacks.tx = VAR_2;
 VAR_6.ep_callbacks.rx = VAR_1;
 VAR_6.service_id = VAR_0;

 VAR_7 = FUNC_0(VAR_3, &VAR_6, &VAR_4->ctrl_epid);
 if (VAR_7)
  return VAR_7;

 *VAR_5 = VAR_4->ctrl_epid;

 return 0;
}
