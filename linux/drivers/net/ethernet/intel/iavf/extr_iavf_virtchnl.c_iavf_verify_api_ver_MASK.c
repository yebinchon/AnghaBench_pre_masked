
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtchnl_version_info {scalar_t__ major; scalar_t__ minor; } ;
struct iavf_hw {int dummy; } ;
struct TYPE_3__ {int cookie_low; int cookie_high; } ;
struct iavf_arq_event_info {scalar_t__ msg_buf; TYPE_1__ desc; int buf_len; } ;
struct iavf_adapter {struct virtchnl_version_info pf_version; TYPE_2__* pdev; struct iavf_hw hw; } ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct iavf_hw*,struct iavf_arq_event_info*,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct iavf_adapter *VAR_7)
{
 struct virtchnl_version_info *VAR_8;
 struct iavf_hw *VAR_9 = &VAR_7->hw;
 struct iavf_arq_event_info VAR_10;
 enum virtchnl_ops VAR_11;
 enum iavf_status VAR_12;

 VAR_10.buf_len = VAR_3;
 VAR_10.msg_buf = FUNC_3(VAR_10.buf_len, VAR_2);
 if (!VAR_10.msg_buf) {
  VAR_12 = -VAR_1;
  goto out;
 }

 while (1) {
  VAR_12 = FUNC_1(VAR_9, &VAR_10, ((void*)0));



  if (VAR_12)
   goto out_alloc;
  VAR_11 =
      (enum virtchnl_ops)FUNC_4(VAR_10.desc.cookie_high);
  if (VAR_11 == VAR_4)
   break;
 }


 VAR_12 = (enum iavf_status)FUNC_4(VAR_10.desc.cookie_low);
 if (VAR_12)
  goto out_alloc;

 if (VAR_11 != VAR_4) {
  FUNC_0(&VAR_7->pdev->dev, "Invalid reply type %d from PF\n",
   VAR_11);
  VAR_12 = -VAR_0;
  goto out_alloc;
 }

 VAR_8 = (struct virtchnl_version_info *)VAR_10.msg_buf;
 VAR_7->pf_version = *VAR_8;

 if ((VAR_8->major > VAR_5) ||
     ((VAR_8->major == VAR_5) &&
      (VAR_8->minor > VAR_6)))
  VAR_12 = -VAR_0;

out_alloc:
 FUNC_2(VAR_10.msg_buf);
out:
 return VAR_12;
}
