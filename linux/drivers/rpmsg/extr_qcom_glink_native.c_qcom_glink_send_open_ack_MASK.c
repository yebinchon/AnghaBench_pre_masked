
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dummy; } ;
struct glink_msg {int param2; void* param1; void* cmd; } ;
struct glink_channel {int rcid; } ;
typedef int msg ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qcom_glink*,struct glink_msg*,int,int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct qcom_glink *VAR_1,
         struct glink_channel *VAR_2)
{
 struct glink_msg VAR_3;

 VAR_3.cmd = FUNC_0(VAR_0);
 VAR_3.param1 = FUNC_0(VAR_2->rcid);
 VAR_3.param2 = FUNC_1(0);

 FUNC_2(VAR_1, &VAR_3, sizeof(VAR_3), ((void*)0), 0, 1);
}
