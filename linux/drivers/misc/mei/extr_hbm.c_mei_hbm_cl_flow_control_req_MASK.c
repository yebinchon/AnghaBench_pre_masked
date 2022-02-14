
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {int dummy; } ;
struct hbm_flow_control {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,int ,struct hbm_flow_control*,int) ;

int FUNC_2(struct mei_device *VAR_1, struct mei_cl *VAR_2)
{
 struct hbm_flow_control VAR_3;

 FUNC_0(VAR_1, VAR_2, "sending flow control\n");
 return FUNC_1(VAR_1, VAR_2, VAR_0,
    &VAR_3, sizeof(VAR_3));
}
