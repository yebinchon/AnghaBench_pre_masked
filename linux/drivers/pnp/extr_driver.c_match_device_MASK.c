
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_driver {struct pnp_device_id* id_table; } ;
struct pnp_device_id {scalar_t__* id; } ;
struct pnp_dev {int id; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__*) ;

__attribute__((used)) static const struct pnp_device_id *FUNC_1(struct pnp_driver *VAR_0,
      struct pnp_dev *VAR_1)
{
 const struct pnp_device_id *VAR_2 = VAR_0->id_table;

 if (!VAR_2)
  return ((void*)0);

 while (*VAR_2->id) {
  if (FUNC_0(VAR_1->id, VAR_2->id))
   return VAR_2;
  VAR_2++;
 }
 return ((void*)0);
}
