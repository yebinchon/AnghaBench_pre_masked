
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {TYPE_1__* bundle; } ;
struct fw_download {int id_map; int mutex; struct gb_connection* connection; int fw_requests; int * parent; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*,struct fw_download*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fw_download*) ;
 struct fw_download* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct gb_connection *VAR_2)
{
 struct fw_download *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_6(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->parent = &VAR_2->bundle->dev;
 FUNC_0(&VAR_3->fw_requests);
 FUNC_4(&VAR_3->id_map);
 FUNC_2(VAR_2, VAR_3);
 VAR_3->connection = VAR_2;
 FUNC_7(&VAR_3->mutex);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto err_destroy_id_map;

 return 0;

err_destroy_id_map:
 FUNC_3(&VAR_3->id_map);
 FUNC_5(VAR_3);

 return VAR_4;
}
