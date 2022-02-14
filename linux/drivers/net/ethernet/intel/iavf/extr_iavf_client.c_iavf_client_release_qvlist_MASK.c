
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iavf_info {struct iavf_adapter* vf; } ;
struct TYPE_5__ {int asq_last_status; } ;
struct TYPE_6__ {TYPE_2__ aq; } ;
struct iavf_adapter {TYPE_3__ hw; TYPE_1__* pdev; scalar_t__ aq_required; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct iavf_info *VAR_3)
{
 struct iavf_adapter *VAR_4 = VAR_3->vf;
 enum iavf_status VAR_5;

 if (VAR_4->aq_required)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_4->hw,
         VAR_2,
         VAR_1, ((void*)0), 0, ((void*)0));

 if (VAR_5)
  FUNC_0(&VAR_4->pdev->dev,
   "Unable to send iWarp vector release message to PF, error %d, aq status %d\n",
   VAR_5, VAR_4->hw.aq.asq_last_status);

 return VAR_5;
}
