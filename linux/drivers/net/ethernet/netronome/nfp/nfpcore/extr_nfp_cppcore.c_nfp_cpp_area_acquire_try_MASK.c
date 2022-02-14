
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_cpp_area {TYPE_2__* cpp; } ;
struct TYPE_4__ {TYPE_1__* op; } ;
struct TYPE_3__ {int (* area_acquire ) (struct nfp_cpp_area*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_cpp_area*) ;

__attribute__((used)) static bool FUNC_1(struct nfp_cpp_area *VAR_1, int *VAR_2)
{
 *VAR_2 = VAR_1->cpp->op->area_acquire(VAR_1);

 return *VAR_2 != -VAR_0;
}
