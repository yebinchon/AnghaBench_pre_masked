
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ses_component {scalar_t__ addr; } ;
struct enclosure_device {int components; TYPE_1__* component; } ;
struct efd {scalar_t__ addr; TYPE_2__* dev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {struct ses_component* scratch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct enclosure_device*,int,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct enclosure_device *VAR_1,
          void *VAR_2)
{
 struct efd *VAR_3 = VAR_2;
 int VAR_4;
 struct ses_component *VAR_5;

 if (!VAR_1->component[0].scratch)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->components; VAR_4++) {
  VAR_5 = VAR_1->component[VAR_4].scratch;
  if (VAR_5->addr != VAR_3->addr)
   continue;

  if (FUNC_0(VAR_1, VAR_4, VAR_3->dev) == 0)
   FUNC_1(&VAR_3->dev->kobj, VAR_0);
  return 1;
 }
 return 0;
}
