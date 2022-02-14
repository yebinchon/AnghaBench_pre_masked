
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uio_port {scalar_t__ size; TYPE_3__* portio; } ;
struct uio_mem {scalar_t__ size; TYPE_1__* map; } ;
struct uio_device {int * portio_dir; TYPE_2__* info; int * map_dir; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {struct uio_port* port; struct uio_mem* mem; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct uio_device *VAR_2)
{
 int VAR_3;
 struct uio_mem *VAR_4;
 struct uio_port *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->info->mem[VAR_3];
  if (VAR_4->size == 0)
   break;
  FUNC_0(&VAR_4->map->kobj);
 }
 FUNC_0(VAR_2->map_dir);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = &VAR_2->info->port[VAR_3];
  if (VAR_5->size == 0)
   break;
  FUNC_0(&VAR_5->portio->kobj);
 }
 FUNC_0(VAR_2->portio_dir);
}
