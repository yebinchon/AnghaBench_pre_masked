
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_switch_channel_rsp_msg {int status; int channel_number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (void*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, size_t VAR_2)
{
 struct wcn36xx_hal_switch_channel_rsp_msg *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_3 = (struct wcn36xx_hal_switch_channel_rsp_msg *)VAR_1;
 FUNC_0(VAR_0, "channel switched to: %d, status: %d\n",
      VAR_3->channel_number, VAR_3->status);
 return VAR_4;
}
