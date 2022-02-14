
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct softing_platform_data {int manf; unsigned int prod; } ;


 struct softing_platform_data* VAR_0 ;

__attribute__((used)) static const struct softing_platform_data
*FUNC_0(unsigned int VAR_1, unsigned int VAR_2)
{
 const struct softing_platform_data *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->manf; ++VAR_3) {
  if ((VAR_3->manf == VAR_1) && (VAR_3->prod == VAR_2))
   return VAR_3;
 }
 return ((void*)0);
}
