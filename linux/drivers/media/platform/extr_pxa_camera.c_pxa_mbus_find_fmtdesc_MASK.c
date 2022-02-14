
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pxa_mbus_pixelfmt {int dummy; } ;
struct pxa_mbus_lookup {scalar_t__ code; struct pxa_mbus_pixelfmt const fmt; } ;



__attribute__((used)) static const struct pxa_mbus_pixelfmt *FUNC_0(
 u32 VAR_0,
 const struct pxa_mbus_lookup *VAR_1,
 int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3].code == VAR_0)
   return &VAR_1[VAR_3].fmt;

 return ((void*)0);
}
