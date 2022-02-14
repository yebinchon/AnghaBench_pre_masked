
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_6__ {void* module_type; void* media_type; } ;
struct TYPE_5__ {TYPE_3__ mac; } ;
struct hclgevf_dev {TYPE_2__ hw; TYPE_1__* pdev; } ;
typedef int resp_msg ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int *,int ,int,void**,int) ;

__attribute__((used)) static int FUNC_2(struct hclgevf_dev *VAR_1)
{
 u8 VAR_2[2];
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, 0, ((void*)0), 0,
       1, VAR_2, sizeof(VAR_2));
 if (VAR_3) {
  FUNC_0(&VAR_1->pdev->dev,
   "VF request to get the pf port media type failed %d",
   VAR_3);
  return VAR_3;
 }

 VAR_1->hw.mac.media_type = VAR_2[0];
 VAR_1->hw.mac.module_type = VAR_2[1];

 return 0;
}
