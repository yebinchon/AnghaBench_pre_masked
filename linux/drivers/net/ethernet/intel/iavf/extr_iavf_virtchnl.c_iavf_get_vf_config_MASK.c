
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct virtchnl_vsi_resource {int dummy; } ;
struct virtchnl_vf_resource {int dummy; } ;
struct iavf_hw {int dummy; } ;
struct TYPE_2__ {int cookie_low; int cookie_high; } ;
struct iavf_arq_event_info {int buf_len; int msg_buf; int msg_len; TYPE_1__ desc; } ;
struct iavf_adapter {int vf_res; struct iavf_hw hw; } ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iavf_hw*,struct iavf_arq_event_info*,int *) ;
 int FUNC_1 (struct iavf_adapter*) ;
 int FUNC_2 (struct iavf_hw*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int) ;

int FUNC_8(struct iavf_adapter *VAR_4)
{
 struct iavf_hw *VAR_5 = &VAR_4->hw;
 struct iavf_arq_event_info VAR_6;
 enum virtchnl_ops VAR_7;
 enum iavf_status VAR_8;
 u16 VAR_9;

 VAR_9 = sizeof(struct virtchnl_vf_resource) +
  VAR_2 * sizeof(struct virtchnl_vsi_resource);
 VAR_6.buf_len = VAR_9;
 VAR_6.msg_buf = FUNC_4(VAR_6.buf_len, VAR_1);
 if (!VAR_6.msg_buf) {
  VAR_8 = -VAR_0;
  goto out;
 }

 while (1) {



  VAR_8 = FUNC_0(VAR_5, &VAR_6, ((void*)0));
  if (VAR_8)
   goto out_alloc;
  VAR_7 =
      (enum virtchnl_ops)FUNC_5(VAR_6.desc.cookie_high);
  if (VAR_7 == VAR_3)
   break;
 }

 VAR_8 = (enum iavf_status)FUNC_5(VAR_6.desc.cookie_low);
 FUNC_6(VAR_4->vf_res, VAR_6.msg_buf, FUNC_7(VAR_6.msg_len, VAR_9));




 if (!VAR_8)
  FUNC_1(VAR_4);
 FUNC_2(VAR_5, VAR_4->vf_res);
out_alloc:
 FUNC_3(VAR_6.msg_buf);
out:
 return VAR_8;
}
