
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct output {int resp_len; } ;
struct net_device {int dummy; } ;
struct input {int resp_addr; } ;
struct bnxt_fw_msg {scalar_t__ resp_max_len; int resp; int timeout; int msg_len; struct input* msg; } ;
struct bnxt_en_dev {struct net_device* net; } ;
struct bnxt {int hwrm_cmd_lock; struct output* hwrm_cmd_resp_addr; int hwrm_cmd_resp_dma_addr; scalar_t__ fw_reset_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct input*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct output*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct bnxt* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct bnxt_en_dev *VAR_2, int VAR_3,
    struct bnxt_fw_msg *VAR_4)
{
 struct net_device *VAR_5 = VAR_2->net;
 struct bnxt *VAR_6 = FUNC_6(VAR_5);
 struct input *VAR_7;
 int VAR_8;

 if (VAR_3 != VAR_0 && VAR_6->fw_reset_state)
  return -VAR_1;

 FUNC_4(&VAR_6->hwrm_cmd_lock);
 VAR_7 = VAR_4->msg;
 VAR_7->resp_addr = FUNC_1(VAR_6->hwrm_cmd_resp_dma_addr);
 VAR_8 = FUNC_0(VAR_6, VAR_4->msg, VAR_4->msg_len,
    VAR_4->timeout);
 if (!VAR_8) {
  struct output *VAR_9 = VAR_6->hwrm_cmd_resp_addr;
  u32 VAR_10 = FUNC_2(VAR_9->resp_len);

  if (VAR_4->resp_max_len < VAR_10)
   VAR_10 = VAR_4->resp_max_len;

  FUNC_3(VAR_4->resp, VAR_9, VAR_10);
 }
 FUNC_5(&VAR_6->hwrm_cmd_lock);
 return VAR_8;
}
