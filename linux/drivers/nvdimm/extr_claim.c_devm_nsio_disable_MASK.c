
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct nd_namespace_io {int bb; int addr; struct resource res; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct resource*) ;

void FUNC_4(struct device *VAR_0, struct nd_namespace_io *VAR_1)
{
 struct resource *VAR_2 = &VAR_1->res;

 FUNC_1(VAR_0, VAR_1->addr);
 FUNC_0(VAR_0, &VAR_1->bb);
 FUNC_2(VAR_0, VAR_2->start, FUNC_3(VAR_2));
}
