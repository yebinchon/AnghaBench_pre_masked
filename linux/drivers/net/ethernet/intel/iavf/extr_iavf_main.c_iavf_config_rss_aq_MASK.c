
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int asq_last_status; } ;
struct iavf_hw {TYPE_3__ aq; } ;
struct iavf_aqc_get_set_rss_key_data {int dummy; } ;
struct TYPE_4__ {int id; } ;
struct iavf_adapter {scalar_t__ current_op; TYPE_2__* pdev; int rss_lut_size; int rss_lut; TYPE_1__ vsi; struct iavf_hw hw; scalar_t__ rss_key; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;
 int FUNC_1 (struct iavf_hw*,int ,struct iavf_aqc_get_set_rss_key_data*) ;
 int FUNC_2 (struct iavf_hw*,int ,int,int ,int ) ;
 int FUNC_3 (struct iavf_hw*,int ) ;
 int FUNC_4 (struct iavf_hw*,int) ;

__attribute__((used)) static int FUNC_5(struct iavf_adapter *VAR_2)
{
 struct iavf_aqc_get_set_rss_key_data *VAR_3 =
  (struct iavf_aqc_get_set_rss_key_data *)VAR_2->rss_key;
 struct iavf_hw *VAR_4 = &VAR_2->hw;
 int VAR_5 = 0;

 if (VAR_2->current_op != VAR_1) {

  FUNC_0(&VAR_2->pdev->dev, "Cannot configure RSS, command %d pending\n",
   VAR_2->current_op);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_2->vsi.id, VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_2->pdev->dev, "Cannot set RSS key, err %s aq_err %s\n",
   FUNC_4(VAR_4, VAR_5),
   FUNC_3(VAR_4, VAR_4->aq.asq_last_status));
  return VAR_5;

 }

 VAR_5 = FUNC_2(VAR_4, VAR_2->vsi.id, 0,
      VAR_2->rss_lut, VAR_2->rss_lut_size);
 if (VAR_5) {
  FUNC_0(&VAR_2->pdev->dev, "Cannot set RSS lut, err %s aq_err %s\n",
   FUNC_4(VAR_4, VAR_5),
   FUNC_3(VAR_4, VAR_4->aq.asq_last_status));
 }

 return VAR_5;

}
