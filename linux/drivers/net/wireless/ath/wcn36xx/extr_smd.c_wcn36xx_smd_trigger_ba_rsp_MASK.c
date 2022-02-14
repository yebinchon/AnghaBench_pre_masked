
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_trigger_ba_rsp_msg {int status; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, int VAR_2)
{
 struct wcn36xx_hal_trigger_ba_rsp_msg *VAR_3;

 if (VAR_2 < sizeof(*VAR_3))
  return -VAR_0;

 VAR_3 = (struct wcn36xx_hal_trigger_ba_rsp_msg *) VAR_1;
 return VAR_3->status;
}
