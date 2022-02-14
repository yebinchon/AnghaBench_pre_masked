
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {scalar_t__* vector_status; int num_msi_left; int num_msi_used; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_1, int VAR_2)
{
 if (VAR_1->vector_status[VAR_2] == VAR_0) {
  FUNC_0(&VAR_1->pdev->dev,
    "vector(vector_id %d) has been freed.\n", VAR_2);
  return;
 }

 VAR_1->vector_status[VAR_2] = VAR_0;
 VAR_1->num_msi_left += 1;
 VAR_1->num_msi_used -= 1;
}
