
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int asq_last_status; } ;
struct iavf_hw {TYPE_1__ aq; } ;
struct iavf_adapter {int flags; TYPE_2__* pdev; struct iavf_hw hw; } ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ,int ) ;
 int FUNC_1 (struct iavf_hw*,int,int ,int *,int ,int *) ;
 int FUNC_2 (struct iavf_hw*,int ) ;
 int FUNC_3 (struct iavf_hw*,int) ;

__attribute__((used)) static int FUNC_4(struct iavf_adapter *VAR_1,
       enum virtchnl_ops VAR_2, u8 *VAR_3, u16 VAR_4)
{
 struct iavf_hw *VAR_5 = &VAR_1->hw;
 enum iavf_status VAR_6;

 if (VAR_1->flags & VAR_0)
  return 0;

 VAR_6 = FUNC_1(VAR_5, VAR_2, 0, VAR_3, VAR_4, ((void*)0));
 if (VAR_6)
  FUNC_0(&VAR_1->pdev->dev, "Unable to send opcode %d to PF, err %s, aq_err %s\n",
   VAR_2, FUNC_3(VAR_5, VAR_6),
   FUNC_2(VAR_5, VAR_5->aq.asq_last_status));
 return VAR_6;
}
