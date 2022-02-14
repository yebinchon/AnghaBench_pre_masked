
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbphy_driver {struct gbphy_device_id* id_table; } ;
struct gbphy_device_id {scalar_t__ protocol_id; } ;
struct gbphy_device {TYPE_1__* cport_desc; } ;
struct TYPE_2__ {scalar_t__ protocol_id; } ;



__attribute__((used)) static const struct gbphy_device_id *
FUNC_0(struct gbphy_device *VAR_0,
     struct gbphy_driver *VAR_1)
{
 const struct gbphy_device_id *VAR_2 = VAR_1->id_table;

 if (!VAR_2)
  return ((void*)0);

 for (; VAR_2->protocol_id; VAR_2++)
  if (VAR_2->protocol_id == VAR_0->cport_desc->protocol_id)
   return VAR_2;

 return ((void*)0);
}
