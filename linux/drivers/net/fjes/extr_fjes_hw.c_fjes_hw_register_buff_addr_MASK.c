
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ length; int epid; int* buffer; int code; } ;
union fjes_device_command_res {TYPE_3__ share_buffer; } ;
union fjes_device_command_req {TYPE_3__ share_buffer; } ;
typedef int u8 ;
struct TYPE_8__ {int buffer_share_bit; int res_buf_size; int req_buf_size; union fjes_device_command_res* res_buf; union fjes_device_command_res* req_buf; } ;
struct fjes_hw {int my_epid; TYPE_4__ hw_info; } ;
struct TYPE_6__ {int size; scalar_t__ buffer; } ;
struct TYPE_5__ {int size; scalar_t__ buffer; } ;
struct ep_share_mem_info {TYPE_2__ rx; TYPE_1__ tx; } ;
typedef enum fjes_dev_command_response_e { ____Placeholder_fjes_dev_command_response_e } fjes_dev_command_response_e ;
typedef void* __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;


 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct fjes_hw*,int ) ;
 int FUNC_2 (union fjes_device_command_res*,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int *) ;
 scalar_t__ FUNC_7 (int,int *) ;
 int FUNC_8 (union fjes_device_command_res*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (union fjes_device_command_res*,struct ep_share_mem_info*) ;
 int FUNC_11 (void*) ;

int FUNC_12(struct fjes_hw *VAR_8, int VAR_9,
          struct ep_share_mem_info *VAR_10)
{
 union fjes_device_command_req *VAR_11 = VAR_8->hw_info.req_buf;
 union fjes_device_command_res *VAR_12 = VAR_8->hw_info.res_buf;
 enum fjes_dev_command_response_e VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;
 void *VAR_18;
 int VAR_19;

 if (FUNC_7(VAR_9, &VAR_8->hw_info.buffer_share_bit))
  return 0;

 FUNC_2(VAR_11, 0, VAR_8->hw_info.req_buf_size);
 FUNC_2(VAR_12, 0, VAR_8->hw_info.res_buf_size);

 VAR_11->share_buffer.length = FUNC_0(
      VAR_10->tx.size,
      VAR_10->rx.size);
 VAR_11->share_buffer.epid = VAR_9;

 VAR_17 = 0;
 VAR_11->share_buffer.buffer[VAR_17++] = VAR_10->tx.size;
 VAR_14 = VAR_10->tx.size / VAR_3;
 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  VAR_18 = ((u8 *)(VAR_10->tx.buffer)) +
    (VAR_16 * VAR_3);
  VAR_11->share_buffer.buffer[VAR_17++] =
    (__le64)(FUNC_5(FUNC_11(VAR_18)) +
      FUNC_4(VAR_18));
 }

 VAR_11->share_buffer.buffer[VAR_17++] = VAR_10->rx.size;
 VAR_14 = VAR_10->rx.size / VAR_3;
 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  VAR_18 = ((u8 *)(VAR_10->rx.buffer)) +
    (VAR_16 * VAR_3);
  VAR_11->share_buffer.buffer[VAR_17++] =
    (__le64)(FUNC_5(FUNC_11(VAR_18)) +
      FUNC_4(VAR_18));
 }

 VAR_12->share_buffer.length = 0;
 VAR_12->share_buffer.code = 0;

 FUNC_10(VAR_11, VAR_10);

 VAR_13 = FUNC_1(VAR_8, VAR_4);

 VAR_15 = VAR_6 * 1000;
 while ((VAR_13 == VAR_5) &&
        (VAR_12->share_buffer.length ==
  VAR_7) &&
        (VAR_12->share_buffer.code == 133) &&
        (VAR_15 > 0)) {
   FUNC_3(200 + VAR_8->my_epid * 20);
   VAR_15 -= (200 + VAR_8->my_epid * 20);

   VAR_12->share_buffer.length = 0;
   VAR_12->share_buffer.code = 0;

   VAR_13 = FUNC_1(
     VAR_8, VAR_4);
 }

 VAR_19 = 0;

 FUNC_8(VAR_12, VAR_15);

 if (VAR_12->share_buffer.length !=
   VAR_7) {
  FUNC_9("Invalid res_buf");
  VAR_19 = -VAR_1;
 } else if (VAR_13 == VAR_5) {
  switch (VAR_12->share_buffer.code) {
  case 132:
   VAR_19 = 0;
   FUNC_6(VAR_9, &VAR_8->hw_info.buffer_share_bit);
   break;
  case 133:
   FUNC_9("Busy Timeout");
   VAR_19 = -VAR_0;
   break;
  default:
   VAR_19 = -VAR_2;
   break;
  }
 } else {
  switch (VAR_13) {
  case 128:
   VAR_19 = -VAR_2;
   break;
  case 129:
   FUNC_9("Timeout");
   VAR_19 = -VAR_0;
   break;
  case 131:
  case 130:
  default:
   VAR_19 = -VAR_2;
   break;
  }
 }

 return VAR_19;
}
