
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_route_set {int n_src; int src; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,int ,int,int ) ;

bool FUNC_1(const struct ni_route_set *VAR_1,
        const int VAR_2)
{
 if (!FUNC_0(&VAR_2, VAR_1->src, VAR_1->n_src, sizeof(int),
       VAR_0))
  return 0;
 return 1;
}
