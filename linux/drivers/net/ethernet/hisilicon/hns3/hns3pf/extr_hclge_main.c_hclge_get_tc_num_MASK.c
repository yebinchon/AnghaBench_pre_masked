
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hclge_dev {int hw_tc_map; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static u32 FUNC_1(struct hclge_dev *VAR_1)
{
 unsigned int VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->hw_tc_map & FUNC_0(VAR_2))
   VAR_3++;
 return VAR_3;
}
