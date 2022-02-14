
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hclge_vport {int dummy; } ;
struct hclge_dev {scalar_t__ num_alloc_vport; struct hclge_vport* vport; } ;


 int FUNC_0 (struct hclge_vport*) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_0)
{
 struct hclge_vport *VAR_1 = VAR_0->vport;
 int VAR_2;
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_alloc_vport; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_1++;
 }

 return 0;
}
