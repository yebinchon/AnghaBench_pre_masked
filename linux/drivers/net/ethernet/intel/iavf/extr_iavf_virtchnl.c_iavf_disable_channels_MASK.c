
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct iavf_adapter {scalar_t__ current_op; int aq_required; int flags; TYPE_2__ ch_config; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct iavf_adapter*,scalar_t__,int *,int ) ;

void FUNC_2(struct iavf_adapter *VAR_5)
{
 if (VAR_5->current_op != VAR_3) {

  FUNC_0(&VAR_5->pdev->dev, "Cannot configure mqprio, command %d pending\n",
   VAR_5->current_op);
  return;
 }

 VAR_5->ch_config.state = VAR_4;
 VAR_5->flags |= VAR_1;
 VAR_5->current_op = VAR_2;
 VAR_5->aq_required &= ~VAR_0;
 FUNC_1(VAR_5, VAR_2, ((void*)0), 0);
}
