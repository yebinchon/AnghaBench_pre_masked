
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int name; } ;
struct pnp_resource {struct resource res; } ;
struct pnp_dev {int dev; int name; } ;


 int FUNC_0 (int *,char*,struct resource*) ;
 int FUNC_1 (int *,char*,struct resource*) ;
 struct pnp_resource* FUNC_2 (struct pnp_dev*) ;

struct pnp_resource *FUNC_3(struct pnp_dev *VAR_0,
          struct resource *VAR_1)
{
 struct pnp_resource *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2) {
  FUNC_1(&VAR_0->dev, "can't add resource %pR\n", VAR_1);
  return ((void*)0);
 }

 VAR_2->res = *VAR_1;
 VAR_2->res.name = VAR_0->name;
 FUNC_0(&VAR_0->dev, "%pR\n", VAR_1);
 return VAR_2;
}
