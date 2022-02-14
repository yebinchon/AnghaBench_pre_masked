
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iavf_info {struct iavf_adapter* vf; } ;
struct iavf_client {int dummy; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct TYPE_6__ {TYPE_1__ aq; } ;
struct iavf_adapter {TYPE_3__ hw; TYPE_2__* pdev; scalar_t__ aq_required; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *,int ,int *) ;

__attribute__((used)) static u32 FUNC_2(struct iavf_info *VAR_3,
         struct iavf_client *VAR_4,
         u8 *VAR_5, u16 VAR_6)
{
 struct iavf_adapter *VAR_7 = VAR_3->vf;
 enum iavf_status VAR_8;

 if (VAR_7->aq_required)
  return -VAR_0;

 VAR_8 = FUNC_1(&VAR_7->hw, VAR_2,
         VAR_1, VAR_5, VAR_6, ((void*)0));
 if (VAR_8)
  FUNC_0(&VAR_7->pdev->dev, "Unable to send iWarp message to PF, error %d, aq status %d\n",
   VAR_8, VAR_7->hw.aq.asq_last_status);

 return VAR_8;
}
