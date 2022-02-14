
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_cpp_area {int cpp; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_cpp_area*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct nfp_cpp_area *VAR_0)
{
 if (FUNC_0(&VAR_0->refcount))
  FUNC_2(VAR_0->cpp, "Warning: freeing busy area\n");
 FUNC_1(VAR_0);
}
