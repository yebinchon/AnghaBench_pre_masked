
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_msg_header {int dummy; } ;
struct wcn36xx_fw_msg_status_rsp {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2, size_t VAR_3)
{
 struct wcn36xx_fw_msg_status_rsp *VAR_4;

 if (VAR_3 < sizeof(struct wcn36xx_hal_msg_header) +
     sizeof(struct wcn36xx_fw_msg_status_rsp))
  return -VAR_0;

 VAR_4 = (struct wcn36xx_fw_msg_status_rsp *)
  (VAR_2 + sizeof(struct wcn36xx_hal_msg_header));

 if (VAR_1 != VAR_4->status)
  return VAR_4->status;

 return 0;
}
