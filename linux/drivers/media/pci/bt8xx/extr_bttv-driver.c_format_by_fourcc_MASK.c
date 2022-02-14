
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv_format {int fourcc; } ;


 unsigned int VAR_0 ;
 struct bttv_format const* VAR_1 ;

__attribute__((used)) static const struct bttv_format*
FUNC_0(int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (-1 == VAR_1[VAR_3].fourcc)
   continue;
  if (VAR_1[VAR_3].fourcc == VAR_2)
   return VAR_1+VAR_3;
 }
 return ((void*)0);
}
