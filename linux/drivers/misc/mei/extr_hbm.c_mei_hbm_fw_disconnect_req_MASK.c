
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl_cb {int dummy; } ;
struct mei_cl {scalar_t__ timer_count; int state; } ;
struct hbm_client_connect_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,char*) ;
 struct mei_cl_cb* FUNC_1 (struct mei_cl*,int ,int ,int *) ;
 struct mei_cl* FUNC_2 (struct mei_device*,struct hbm_client_connect_request*) ;

__attribute__((used)) static int FUNC_3(struct mei_device *VAR_3,
  struct hbm_client_connect_request *VAR_4)
{
 struct mei_cl *VAR_5;
 struct mei_cl_cb *VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3, VAR_5, "fw disconnect request received\n");
  VAR_5->state = VAR_1;
  VAR_5->timer_count = 0;

  VAR_6 = FUNC_1(VAR_5, 0, VAR_2,
            ((void*)0));
  if (!VAR_6)
   return -VAR_0;
 }
 return 0;
}
