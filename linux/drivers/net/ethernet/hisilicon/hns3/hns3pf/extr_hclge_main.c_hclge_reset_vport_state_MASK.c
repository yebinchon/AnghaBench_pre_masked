
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int dummy; } ;
struct hclge_dev {int num_alloc_vport; struct hclge_vport* vport; } ;


 int FUNC_0 (struct hclge_vport*) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_0)
{
 struct hclge_vport *VAR_1 = VAR_0->vport;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_alloc_vport; VAR_2++) {
  FUNC_0(VAR_1);
  VAR_1++;
 }
}
