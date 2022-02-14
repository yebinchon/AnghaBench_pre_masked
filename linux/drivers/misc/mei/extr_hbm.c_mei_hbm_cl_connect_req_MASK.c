
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {int dummy; } ;
struct hbm_client_connect_request {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,int ,struct hbm_client_connect_request*,int) ;

int FUNC_1(struct mei_device *VAR_1, struct mei_cl *VAR_2)
{
 struct hbm_client_connect_request VAR_3;

 return FUNC_0(VAR_1, VAR_2, VAR_0,
    &VAR_3, sizeof(VAR_3));
}
