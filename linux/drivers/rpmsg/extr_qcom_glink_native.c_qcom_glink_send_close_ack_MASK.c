
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dummy; } ;
struct glink_msg {scalar_t__ param2; void* param1; void* cmd; } ;
typedef int req ;


 unsigned int VAR_0 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct qcom_glink*,struct glink_msg*,int,int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qcom_glink *VAR_1,
          unsigned int VAR_2)
{
 struct glink_msg VAR_3;

 VAR_3.cmd = FUNC_0(VAR_0);
 VAR_3.param1 = FUNC_0(VAR_2);
 VAR_3.param2 = 0;

 FUNC_1(VAR_1, &VAR_3, sizeof(VAR_3), ((void*)0), 0, 1);
}
