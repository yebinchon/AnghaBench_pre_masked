
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parahotplug_request {int list; } ;
struct TYPE_6__ {scalar_t__ active; } ;
struct TYPE_4__ {TYPE_3__ state; } ;
struct TYPE_5__ {TYPE_1__ device_change_state; } ;
struct controlvm_message {TYPE_2__ cmd; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;
 struct parahotplug_request* FUNC_2 (struct controlvm_message*) ;
 int FUNC_3 (struct parahotplug_request*) ;
 int FUNC_4 (struct parahotplug_request*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct controlvm_message *VAR_4)
{
 struct parahotplug_request *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return -VAR_1;




 if (VAR_4->cmd.device_change_state.state.active) {
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6)
   goto err_respond;
  FUNC_0(&VAR_4->hdr, VAR_0,
      &VAR_4->cmd.device_change_state.state);
  FUNC_3(VAR_5);
  return 0;
 }





 FUNC_5(&VAR_3);
 FUNC_1(&VAR_5->list, &VAR_2);
 FUNC_6(&VAR_3);
 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  goto err_respond;
 return 0;

err_respond:
 FUNC_0(&VAR_4->hdr, VAR_6,
     &VAR_4->cmd.device_change_state.state);
 return VAR_6;
}
