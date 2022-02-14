
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sja1105_private*,int) ;

int FUNC_1(struct sja1105_private *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }
 return 0;
}
