
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int mps; int state; scalar_t__ last_active_jiffies; } ;
struct hclge_dev {int num_alloc_vport; struct hclge_vport* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 1; VAR_5 < VAR_4->num_alloc_vport; VAR_5++) {
  struct hclge_vport *VAR_6 = &VAR_4->vport[VAR_5];

  if (FUNC_2(VAR_3, VAR_6->last_active_jiffies + 8 * VAR_2))
   FUNC_0(VAR_1, &VAR_6->state);


  if (!FUNC_1(VAR_1, &VAR_6->state))
   VAR_6->mps = VAR_0;
 }
}
