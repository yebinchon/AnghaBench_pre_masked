
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_format {unsigned int fourcc; } ;


 unsigned int FUNC_0 (struct tw686x_format const*) ;
 struct tw686x_format const* VAR_0 ;

__attribute__((used)) static const struct tw686x_format *FUNC_1(unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].fourcc == VAR_1)
   return &VAR_0[VAR_2];
 return ((void*)0);
}
