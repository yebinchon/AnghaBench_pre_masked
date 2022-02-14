
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae3_handle {TYPE_1__* pdev; } ;
typedef enum hnae3_hw_error_type { ____Placeholder_hnae3_hw_error_type } hnae3_hw_error_type ;
struct TYPE_5__ {int type; int msg; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_1,
      enum hnae3_hw_error_type VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].type == VAR_2) {
   FUNC_1(&VAR_1->pdev->dev, "Detected %s!\n",
    VAR_0[VAR_3].msg);
   break;
  }
 }
}
