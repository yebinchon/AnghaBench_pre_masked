
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct domain_device {struct domain_device* parent; TYPE_1__* port; } ;
struct TYPE_2__ {int id; } ;



__attribute__((used)) static int FUNC_0(struct domain_device *VAR_0)
{
 struct domain_device *VAR_1 = VAR_0->parent;


 if (!VAR_1)
  return VAR_0->port->id;
 while (VAR_1) {
  struct domain_device *VAR_2 = VAR_1->parent;
  if (!VAR_2)
   return VAR_1->port->id;
  VAR_1 = VAR_1->parent;
 }
 return 0;
}
