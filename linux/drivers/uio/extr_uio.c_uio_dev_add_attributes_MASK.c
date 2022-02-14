
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio_portio {int kobj; struct uio_port* port; } ;
struct uio_port {scalar_t__ size; struct uio_portio* portio; } ;
struct uio_mem {scalar_t__ size; struct uio_map* map; } ;
struct uio_map {int kobj; struct uio_mem* mem; } ;
struct TYPE_4__ {int kobj; } ;
struct uio_device {TYPE_2__ dev; int * map_dir; TYPE_1__* info; int * portio_dir; } ;
struct TYPE_3__ {struct uio_mem* mem; struct uio_port* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (int *,int *,char*,int) ;
 void* FUNC_2 (char*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct uio_device *VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 struct uio_mem *VAR_13;
 struct uio_map *VAR_14;
 struct uio_port *VAR_15;
 struct uio_portio *VAR_16;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_13 = &VAR_7->info->mem[VAR_9];
  if (VAR_13->size == 0)
   break;
  if (!VAR_11) {
   VAR_11 = 1;
   VAR_7->map_dir = FUNC_2("maps",
       &VAR_7->dev.kobj);
   if (!VAR_7->map_dir) {
    VAR_8 = -VAR_0;
    goto err_map;
   }
  }
  VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_1);
  if (!VAR_14) {
   VAR_8 = -VAR_0;
   goto err_map;
  }
  FUNC_3(&VAR_14->kobj, &VAR_5);
  VAR_14->mem = VAR_13;
  VAR_13->map = VAR_14;
  VAR_8 = FUNC_1(&VAR_14->kobj, VAR_7->map_dir, "map%d", VAR_9);
  if (VAR_8)
   goto err_map_kobj;
  VAR_8 = FUNC_5(&VAR_14->kobj, VAR_2);
  if (VAR_8)
   goto err_map_kobj;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_15 = &VAR_7->info->port[VAR_10];
  if (VAR_15->size == 0)
   break;
  if (!VAR_12) {
   VAR_12 = 1;
   VAR_7->portio_dir = FUNC_2("portio",
       &VAR_7->dev.kobj);
   if (!VAR_7->portio_dir) {
    VAR_8 = -VAR_0;
    goto err_portio;
   }
  }
  VAR_16 = FUNC_6(sizeof(*VAR_16), VAR_1);
  if (!VAR_16) {
   VAR_8 = -VAR_0;
   goto err_portio;
  }
  FUNC_3(&VAR_16->kobj, &VAR_6);
  VAR_16->port = VAR_15;
  VAR_15->portio = VAR_16;
  VAR_8 = FUNC_1(&VAR_16->kobj, VAR_7->portio_dir,
       "port%d", VAR_10);
  if (VAR_8)
   goto err_portio_kobj;
  VAR_8 = FUNC_5(&VAR_16->kobj, VAR_2);
  if (VAR_8)
   goto err_portio_kobj;
 }

 return 0;

err_portio:
 VAR_10--;
err_portio_kobj:
 for (; VAR_10 >= 0; VAR_10--) {
  VAR_15 = &VAR_7->info->port[VAR_10];
  VAR_16 = VAR_15->portio;
  FUNC_4(&VAR_16->kobj);
 }
 FUNC_4(VAR_7->portio_dir);
err_map:
 VAR_9--;
err_map_kobj:
 for (; VAR_9 >= 0; VAR_9--) {
  VAR_13 = &VAR_7->info->mem[VAR_9];
  VAR_14 = VAR_13->map;
  FUNC_4(&VAR_14->kobj);
 }
 FUNC_4(VAR_7->map_dir);
 FUNC_0(&VAR_7->dev, "error creating sysfs files (%d)\n", VAR_8);
 return VAR_8;
}
