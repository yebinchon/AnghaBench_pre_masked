
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int epid; int code; } ;
union fjes_device_command_res {TYPE_1__ unshare_buffer; } ;
union fjes_device_command_req {TYPE_1__ unshare_buffer; } ;
struct TYPE_4__ {int buffer_share_bit; int res_buf_size; int req_buf_size; struct fjes_device_shared_info* share; union fjes_device_command_res* res_buf; union fjes_device_command_res* req_buf; } ;
struct fjes_hw {int my_epid; TYPE_2__ hw_info; int base; } ;
struct fjes_device_shared_info {int dummy; } ;
typedef enum fjes_dev_command_response_e { ____Placeholder_fjes_dev_command_response_e } fjes_dev_command_response_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct fjes_hw*,int ) ;
 int FUNC_2 (union fjes_device_command_res*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (union fjes_device_command_res*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (union fjes_device_command_res*) ;

int FUNC_8(struct fjes_hw *VAR_8, int VAR_9)
{
 union fjes_device_command_req *VAR_10 = VAR_8->hw_info.req_buf;
 union fjes_device_command_res *VAR_11 = VAR_8->hw_info.res_buf;
 struct fjes_device_shared_info *VAR_12 = VAR_8->hw_info.share;
 enum fjes_dev_command_response_e VAR_13;
 int VAR_14;
 int VAR_15;

 if (!VAR_8->base)
  return -VAR_2;

 if (!VAR_10 || !VAR_11 || !VAR_12)
  return -VAR_2;

 if (!FUNC_4(VAR_9, &VAR_8->hw_info.buffer_share_bit))
  return 0;

 FUNC_2(VAR_10, 0, VAR_8->hw_info.req_buf_size);
 FUNC_2(VAR_11, 0, VAR_8->hw_info.res_buf_size);

 VAR_10->unshare_buffer.length =
   VAR_6;
 VAR_10->unshare_buffer.epid = VAR_9;

 VAR_11->unshare_buffer.length = 0;
 VAR_11->unshare_buffer.code = 0;

 FUNC_7(VAR_10);
 VAR_13 = FUNC_1(VAR_8, VAR_3);

 VAR_14 = VAR_5 * 1000;
 while ((VAR_13 == VAR_4) &&
        (VAR_11->unshare_buffer.length ==
  VAR_7) &&
        (VAR_11->unshare_buffer.code ==
  133) &&
        (VAR_14 > 0)) {
  FUNC_3(200 + VAR_8->my_epid * 20);
  VAR_14 -= (200 + VAR_8->my_epid * 20);

  VAR_11->unshare_buffer.length = 0;
  VAR_11->unshare_buffer.code = 0;

  VAR_13 =
  FUNC_1(VAR_8, VAR_3);
 }

 VAR_15 = 0;

 FUNC_5(VAR_11, VAR_14);

 if (VAR_11->unshare_buffer.length !=
   VAR_7) {
  FUNC_6("Invalid res_buf");
  VAR_15 = -VAR_1;
 } else if (VAR_13 == VAR_4) {
  switch (VAR_11->unshare_buffer.code) {
  case 132:
   VAR_15 = 0;
   FUNC_0(VAR_9, &VAR_8->hw_info.buffer_share_bit);
   break;
  case 133:
   FUNC_6("Busy Timeout");
   VAR_15 = -VAR_0;
   break;
  default:
   VAR_15 = -VAR_2;
   break;
  }
 } else {
  switch (VAR_13) {
  case 128:
   VAR_15 = -VAR_2;
   break;
  case 129:
   FUNC_6("Timeout");
   VAR_15 = -VAR_0;
   break;
  case 131:
  case 130:
  default:
   VAR_15 = -VAR_2;
   break;
  }
 }

 return VAR_15;
}
