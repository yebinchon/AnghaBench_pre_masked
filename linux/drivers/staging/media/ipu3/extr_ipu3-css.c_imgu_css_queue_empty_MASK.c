
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_css {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct imgu_css*,unsigned int) ;

bool FUNC_1(struct imgu_css *VAR_1)
{
 unsigned int VAR_2;
 bool VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 &= FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
