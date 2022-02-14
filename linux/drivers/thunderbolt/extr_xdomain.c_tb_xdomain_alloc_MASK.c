
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uuid_t ;
typedef int u64 ;
struct TYPE_6__ {int groups; int * type; int * bus; int parent; } ;
struct tb_xdomain {int needs_uuid; struct tb_xdomain* local_uuid; TYPE_1__ dev; void* remote_uuid; int properties_changed_work; int get_properties_work; int get_uuid_work; int lock; int service_ids; int route; struct tb* tb; } ;
struct tb {int index; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tb_xdomain*) ;
 void* FUNC_6 (int const*,int,int ) ;
 struct tb_xdomain* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct tb_xdomain *FUNC_12(struct tb *VAR_7, struct device *VAR_8,
        u64 VAR_9, const uuid_t *VAR_10,
        const uuid_t *VAR_11)
{
 struct tb_xdomain *VAR_12;

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->tb = VAR_7;
 VAR_12->route = VAR_9;
 FUNC_4(&VAR_12->service_ids);
 FUNC_8(&VAR_12->lock);
 FUNC_0(&VAR_12->get_uuid_work, VAR_3);
 FUNC_0(&VAR_12->get_properties_work, VAR_2);
 FUNC_0(&VAR_12->properties_changed_work,
     VAR_4);

 VAR_12->local_uuid = FUNC_6(VAR_10, sizeof(uuid_t), VAR_0);
 if (!VAR_12->local_uuid)
  goto err_free;

 if (VAR_11) {
  VAR_12->remote_uuid = FUNC_6(VAR_11, sizeof(uuid_t),
       VAR_0);
  if (!VAR_12->remote_uuid)
   goto err_free_local_uuid;
 } else {
  VAR_12->needs_uuid = 1;
 }

 FUNC_2(&VAR_12->dev);
 VAR_12->dev.parent = FUNC_3(VAR_8);
 VAR_12->dev.bus = &VAR_1;
 VAR_12->dev.type = &VAR_5;
 VAR_12->dev.groups = VAR_6;
 FUNC_1(&VAR_12->dev, "%u-%llx", VAR_7->index, VAR_9);





 FUNC_11(&VAR_12->dev);
 FUNC_10(&VAR_12->dev);
 FUNC_9(&VAR_12->dev);

 return VAR_12;

err_free_local_uuid:
 FUNC_5(VAR_12->local_uuid);
err_free:
 FUNC_5(VAR_12);

 return ((void*)0);
}
