
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {void* end; void* start; int flags; } ;
struct pnp_resource {struct resource res; } ;
struct pnp_dev {int dev; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long long,unsigned long long) ;
 int FUNC_1 (int ,int *,char*,struct resource*) ;
 struct pnp_resource* FUNC_2 (struct pnp_dev*) ;

struct pnp_resource *FUNC_3(struct pnp_dev *VAR_2,
       resource_size_t VAR_3,
       resource_size_t VAR_4)
{
 struct pnp_resource *VAR_5;
 struct resource *VAR_6;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5) {
  FUNC_0(&VAR_2->dev, "can't add resource for BUS %#llx-%#llx\n",
   (unsigned long long) VAR_3,
   (unsigned long long) VAR_4);
  return ((void*)0);
 }

 VAR_6 = &VAR_5->res;
 VAR_6->flags = VAR_0;
 VAR_6->start = VAR_3;
 VAR_6->end = VAR_4;

 FUNC_1(VAR_1, &VAR_2->dev, "%pR\n", VAR_6);
 return VAR_5;
}
