
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_adapter {scalar_t__ current_op; int aq_required; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct iavf_adapter*,scalar_t__,int *,int ) ;

void FUNC_2(struct iavf_adapter *VAR_3)
{
 if (VAR_3->current_op != VAR_2) {

  FUNC_0(&VAR_3->pdev->dev, "Cannot get RSS hash capabilities, command %d pending\n",
   VAR_3->current_op);
  return;
 }
 VAR_3->current_op = VAR_1;
 VAR_3->aq_required &= ~VAR_0;
 FUNC_1(VAR_3, VAR_1, ((void*)0), 0);
}
