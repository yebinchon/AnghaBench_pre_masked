
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2255_fmt {int fourcc; } ;


 unsigned int FUNC_0 (struct s2255_fmt const*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct s2255_fmt const* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const struct s2255_fmt *FUNC_1(int VAR_4)
{
 unsigned int VAR_5;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (-1 == VAR_2[VAR_5].fourcc)
   continue;
  if (!VAR_3 && ((VAR_2[VAR_5].fourcc == VAR_0) ||
         (VAR_2[VAR_5].fourcc == VAR_1)))
   continue;
  if (VAR_2[VAR_5].fourcc == VAR_4)
   return VAR_2 + VAR_5;
 }
 return ((void*)0);
}
