
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ open_handle_count; int host_clients_map; } ;
struct mei_cl {int link; int rd_pending; int rd_completed; int writing_state; int state; scalar_t__ host_client_id; struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mei_cl *VAR_2)
{
 struct mei_device *VAR_3;


 if (!VAR_2)
  return 0;

 if (FUNC_0(!VAR_2->dev))
  return 0;

 VAR_3 = VAR_2->dev;

 FUNC_1(VAR_3, VAR_2, "unlink client");

 if (VAR_3->open_handle_count > 0)
  VAR_3->open_handle_count--;


 if (VAR_2->host_client_id)
  FUNC_2(VAR_2->host_client_id, VAR_3->host_clients_map);

 FUNC_3(&VAR_2->link);

 VAR_2->state = VAR_0;
 VAR_2->writing_state = VAR_1;

 FUNC_0(!FUNC_4(&VAR_2->rd_completed) ||
  !FUNC_4(&VAR_2->rd_pending) ||
  !FUNC_4(&VAR_2->link));

 return 0;
}
