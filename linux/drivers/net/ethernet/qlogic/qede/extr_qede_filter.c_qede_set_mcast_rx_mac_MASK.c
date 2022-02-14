
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_3__* ops; } ;
struct TYPE_4__ {int type; int num; int * mac; } ;
struct TYPE_5__ {TYPE_1__ mcast; } ;
struct qed_filter_params {TYPE_2__ filter; int type; } ;
typedef int filter_cmd ;
typedef enum qed_filter_xcast_params_type { ____Placeholder_qed_filter_xcast_params_type } qed_filter_xcast_params_type ;
struct TYPE_6__ {int (* filter_config ) (int ,struct qed_filter_params*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (struct qed_filter_params*,int ,int) ;
 int FUNC_2 (int ,struct qed_filter_params*) ;

__attribute__((used)) static int FUNC_3(struct qede_dev *VAR_2,
     enum qed_filter_xcast_params_type VAR_3,
     unsigned char *VAR_4, int VAR_5)
{
 struct qed_filter_params VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_1;
 VAR_6.filter.mcast.type = VAR_3;
 VAR_6.filter.mcast.num = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++, VAR_4 += VAR_0)
  FUNC_0(VAR_6.filter.mcast.mac[VAR_7], VAR_4);

 return VAR_2->ops->filter_config(VAR_2->cdev, &VAR_6);
}
