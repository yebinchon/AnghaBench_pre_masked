
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct nfp_cpp_area {TYPE_2__* cpp; } ;
struct TYPE_4__ {TYPE_1__* op; } ;
struct TYPE_3__ {struct resource* (* area_resource ) (struct nfp_cpp_area*) ;} ;


 struct resource* FUNC_0 (struct nfp_cpp_area*) ;

struct resource *FUNC_1(struct nfp_cpp_area *VAR_0)
{
 struct resource *VAR_1 = ((void*)0);

 if (VAR_0->cpp->op->area_resource)
  VAR_1 = VAR_0->cpp->op->area_resource(VAR_0);

 return VAR_1;
}
