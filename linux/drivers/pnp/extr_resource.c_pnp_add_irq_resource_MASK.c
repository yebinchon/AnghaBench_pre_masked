
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; int end; } ;
struct pnp_resource {struct resource res; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int *,char*,struct resource*) ;
 struct pnp_resource* FUNC_2 (struct pnp_dev*) ;

struct pnp_resource *FUNC_3(struct pnp_dev *VAR_2, int VAR_3,
       int VAR_4)
{
 struct pnp_resource *VAR_5;
 struct resource *VAR_6;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5) {
  FUNC_0(&VAR_2->dev, "can't add resource for IRQ %d\n", VAR_3);
  return ((void*)0);
 }

 VAR_6 = &VAR_5->res;
 VAR_6->flags = VAR_0 | VAR_4;
 VAR_6->start = VAR_3;
 VAR_6->end = VAR_3;

 FUNC_1(VAR_1, &VAR_2->dev, "%pR\n", VAR_6);
 return VAR_5;
}
