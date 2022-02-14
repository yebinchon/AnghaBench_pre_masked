
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct qede_dev {int cdev; TYPE_1__* ops; } ;
struct TYPE_5__ {int type; int vlan_valid; int vlan; } ;
struct TYPE_6__ {TYPE_2__ ucast; } ;
struct qed_filter_params {TYPE_3__ filter; int type; } ;
typedef int filter_cmd ;
typedef enum qed_filter_xcast_params_type { ____Placeholder_qed_filter_xcast_params_type } qed_filter_xcast_params_type ;
struct TYPE_4__ {int (* filter_config ) (int ,struct qed_filter_params*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qed_filter_params*,int ,int) ;
 int FUNC_1 (int ,struct qed_filter_params*) ;

__attribute__((used)) static int FUNC_2(struct qede_dev *VAR_1,
      enum qed_filter_xcast_params_type VAR_2,
      u16 VAR_3)
{
 struct qed_filter_params VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_0;
 VAR_4.filter.ucast.type = VAR_2;
 VAR_4.filter.ucast.vlan_valid = 1;
 VAR_4.filter.ucast.vlan = VAR_3;

 return VAR_1->ops->filter_config(VAR_1->cdev, &VAR_4);
}
