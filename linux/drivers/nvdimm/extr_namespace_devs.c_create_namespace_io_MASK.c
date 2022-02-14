
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; int flags; int name; } ;
struct nd_region {scalar_t__ ndr_size; scalar_t__ ndr_start; int dev; } ;
struct device {int * parent; int * type; } ;
struct TYPE_2__ {struct device dev; } ;
struct nd_namespace_io {struct resource res; TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct device** FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct nd_namespace_io*) ;
 struct nd_namespace_io* FUNC_3 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct device **FUNC_4(struct nd_region *VAR_3)
{
 struct nd_namespace_io *VAR_4;
 struct device *VAR_5, **VAR_6;
 struct resource *VAR_7;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_1(2, sizeof(struct device *), VAR_0);
 if (!VAR_6) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_5 = &VAR_4->common.dev;
 VAR_5->type = &VAR_2;
 VAR_5->parent = &VAR_3->dev;
 VAR_7 = &VAR_4->res;
 VAR_7->name = FUNC_0(&VAR_3->dev);
 VAR_7->flags = VAR_1;
 VAR_7->start = VAR_3->ndr_start;
 VAR_7->end = VAR_7->start + VAR_3->ndr_size - 1;

 VAR_6[0] = VAR_5;
 return VAR_6;
}
