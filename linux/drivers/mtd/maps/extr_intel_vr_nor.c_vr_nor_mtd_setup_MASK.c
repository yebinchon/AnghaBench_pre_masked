
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vr_nor_mtd {TYPE_2__* dev; TYPE_3__* info; int map; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (char const* const,int *) ;

__attribute__((used)) static int FUNC_1(struct vr_nor_mtd *VAR_1)
{
 static const char * const VAR_2[] =
     { "cfi_probe", "jedec_probe", ((void*)0) };
 const char * const *VAR_3;

 for (VAR_3 = VAR_2; !VAR_1->info && *VAR_3; VAR_3++)
  VAR_1->info = FUNC_0(*VAR_3, &VAR_1->map);
 if (!VAR_1->info)
  return -VAR_0;

 VAR_1->info->dev.parent = &VAR_1->dev->dev;

 return 0;
}
