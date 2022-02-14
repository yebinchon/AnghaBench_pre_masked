
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int num_hwfns; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
struct qede_dev {scalar_t__ state; int cdev; TYPE_3__* ops; int rss_params_inited; int rss_key; int * rss_ind_table; TYPE_2__ dev_info; } ;
struct qed_update_vport_params {int update_rss_flg; int rss_params; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int (* vport_update ) (int ,struct qed_update_vport_params*) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (int *,scalar_t__ const*,int ) ;
 struct qede_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct qede_dev*,int *,int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,struct qed_update_vport_params*) ;
 int FUNC_8 (struct qed_update_vport_params*) ;
 struct qed_update_vport_params* FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8, const u32 *VAR_9,
    const u8 *VAR_10, const u8 VAR_11)
{
 struct qed_update_vport_params *VAR_12;
 struct qede_dev *VAR_13 = FUNC_4(VAR_8);
 int VAR_14, VAR_15 = 0;

 if (VAR_13->dev_info.common.num_hwfns > 1) {
  FUNC_0(VAR_13,
   "RSS configuration is not supported for 100G devices\n");
  return -VAR_1;
 }

 if (VAR_11 != VAR_2 && VAR_11 != VAR_3)
  return -VAR_1;

 if (!VAR_9 && !VAR_10)
  return 0;

 if (VAR_9) {
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
   VAR_13->rss_ind_table[VAR_14] = VAR_9[VAR_14];
  VAR_13->rss_params_inited |= VAR_4;
 }

 if (VAR_10) {
  FUNC_3(&VAR_13->rss_key, VAR_10, FUNC_6(VAR_8));
  VAR_13->rss_params_inited |= VAR_5;
 }

 FUNC_1(VAR_13);
 if (VAR_13->state == VAR_6) {
  VAR_12 = FUNC_9(sizeof(*VAR_12));
  if (!VAR_12) {
   FUNC_2(VAR_13);
   return -VAR_0;
  }
  FUNC_5(VAR_13, &VAR_12->rss_params,
         &VAR_12->update_rss_flg);
  VAR_15 = VAR_13->ops->vport_update(VAR_13->cdev, VAR_12);
  FUNC_8(VAR_12);
 }
 FUNC_2(VAR_13);

 return VAR_15;
}
