
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_route_tables {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int,int const,struct ni_route_tables const*) ;
 scalar_t__ FUNC_1 (int,int const,struct ni_route_tables const*) ;

__attribute__((used)) static inline s8 FUNC_2(int VAR_1, const int VAR_2,
     const struct ni_route_tables *VAR_3,
     const int VAR_4)
{
 if (VAR_1 < VAR_0) {
  VAR_1 += VAR_4;




  if (FUNC_1(VAR_1, VAR_2, VAR_3))
   return VAR_1;
  return -1;
 }





 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
