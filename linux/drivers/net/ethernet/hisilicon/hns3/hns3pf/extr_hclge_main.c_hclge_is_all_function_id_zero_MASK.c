
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_desc {scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct hclge_desc *VAR_2)
{


 int VAR_3, VAR_4;

 for (VAR_3 = 1; VAR_3 < 3; VAR_3++)
  for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
   if (VAR_2[VAR_3].data[VAR_4])
    return 0;

 return 1;
}
