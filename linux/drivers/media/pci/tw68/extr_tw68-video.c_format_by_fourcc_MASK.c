
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw68_format {unsigned int fourcc; } ;


 unsigned int VAR_0 ;
 struct tw68_format const* VAR_1 ;

__attribute__((used)) static const struct tw68_format *FUNC_0(unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].fourcc == VAR_2)
   return VAR_1+VAR_3;
 return ((void*)0);
}
