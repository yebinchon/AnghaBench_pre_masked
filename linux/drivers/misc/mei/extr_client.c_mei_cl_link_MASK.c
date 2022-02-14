
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int open_handle_count; int host_clients_map; int file_list; int dev; } ;
struct mei_cl {int host_client_id; int state; int link; struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,int ) ;

int FUNC_6(struct mei_cl *VAR_5)
{
 struct mei_device *VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_5 || !VAR_5->dev))
  return -VAR_0;

 VAR_6 = VAR_5->dev;

 VAR_7 = FUNC_3(VAR_6->host_clients_map, VAR_2);
 if (VAR_7 >= VAR_2) {
  FUNC_2(VAR_6->dev, "id exceeded %d", VAR_2);
  return -VAR_1;
 }

 if (VAR_6->open_handle_count >= VAR_4) {
  FUNC_2(VAR_6->dev, "open_handle_count exceeded %d",
   VAR_4);
  return -VAR_1;
 }

 VAR_6->open_handle_count++;

 VAR_5->host_client_id = VAR_7;
 FUNC_4(&VAR_5->link, &VAR_6->file_list);

 FUNC_5(VAR_7, VAR_6->host_clients_map);

 VAR_5->state = VAR_3;

 FUNC_1(VAR_6, VAR_5, "link cl\n");
 return 0;
}
