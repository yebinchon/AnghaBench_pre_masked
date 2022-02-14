
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mac {scalar_t__* hwlro_ip; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtk_mac *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->hwlro_ip[VAR_3])
   VAR_2++;
 }

 return VAR_2;
}
