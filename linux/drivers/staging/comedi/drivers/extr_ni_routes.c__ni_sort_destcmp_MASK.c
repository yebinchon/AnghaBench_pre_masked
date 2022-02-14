
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_route_set {scalar_t__ dest; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct ni_route_set *VAR_2 = VAR_0;
 const struct ni_route_set *VAR_3 = VAR_1;

 if (VAR_2->dest < VAR_3->dest)
  return -1;
 else if (VAR_2->dest > VAR_3->dest)
  return 1;
 return 0;
}
