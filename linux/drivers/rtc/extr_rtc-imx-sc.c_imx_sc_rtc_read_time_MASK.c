
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_timer_get_rtc_time {int time; struct imx_sc_rpc_msg hdr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,struct imx_sc_msg_timer_get_rtc_time*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct imx_sc_msg_timer_get_rtc_time VAR_6;
 struct imx_sc_rpc_msg *VAR_7 = &VAR_6.hdr;
 int VAR_8;

 VAR_7->ver = VAR_1;
 VAR_7->svc = VAR_0;
 VAR_7->func = VAR_2;
 VAR_7->size = 1;

 VAR_8 = FUNC_1(VAR_3, &VAR_6, 1);
 if (VAR_8) {
  FUNC_0(VAR_4, "read rtc time failed, ret %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_2(VAR_6.time, VAR_5);

 return 0;
}
