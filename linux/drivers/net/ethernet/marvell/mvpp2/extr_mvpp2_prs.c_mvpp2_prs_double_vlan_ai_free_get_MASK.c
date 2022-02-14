
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2 {int * prs_double_vlans; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mvpp2 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  if (!VAR_2->prs_double_vlans[VAR_3])
   return VAR_3;
 }

 return -VAR_0;
}
