
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_cpp_area {TYPE_2__* cpp; } ;
struct TYPE_4__ {TYPE_1__* op; } ;
struct TYPE_3__ {int (* area_write ) (struct nfp_cpp_area*,void const*,unsigned long,size_t) ;} ;


 int FUNC_0 (struct nfp_cpp_area*,void const*,unsigned long,size_t) ;

int FUNC_1(struct nfp_cpp_area *VAR_0,
         unsigned long VAR_1, const void *VAR_2,
         size_t VAR_3)
{
 return VAR_0->cpp->op->area_write(VAR_0, VAR_2, VAR_1, VAR_3);
}
