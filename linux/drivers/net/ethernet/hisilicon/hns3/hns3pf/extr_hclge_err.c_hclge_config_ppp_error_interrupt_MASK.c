
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {void** data; int flag; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int revision; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_13, u32 VAR_14,
         bool VAR_15)
{
 struct device *VAR_16 = &VAR_13->pdev->dev;
 struct hclge_desc VAR_17[2];
 int VAR_18;


 FUNC_4(&VAR_17[0], VAR_14, 0);
 VAR_17[0].flag |= FUNC_0(VAR_0);
 FUNC_4(&VAR_17[1], VAR_14, 0);

 if (VAR_14 == VAR_1) {
  if (VAR_15) {
   VAR_17[0].data[0] =
    FUNC_1(VAR_3);
   VAR_17[0].data[1] =
    FUNC_1(VAR_5);
   VAR_17[0].data[4] = FUNC_1(VAR_11);
  }

  VAR_17[1].data[0] =
   FUNC_1(VAR_4);
  VAR_17[1].data[1] =
   FUNC_1(VAR_6);
  if (VAR_13->pdev->revision >= 0x21)
   VAR_17[1].data[2] =
    FUNC_1(VAR_12);
 } else if (VAR_14 == VAR_2) {
  if (VAR_15) {
   VAR_17[0].data[0] =
    FUNC_1(VAR_7);
   VAR_17[0].data[1] =
    FUNC_1(VAR_9);
  }

  VAR_17[1].data[0] =
    FUNC_1(VAR_8);
  VAR_17[1].data[1] =
    FUNC_1(VAR_10);
 }

 VAR_18 = FUNC_3(&VAR_13->hw, &VAR_17[0], 2);
 if (VAR_18)
  FUNC_2(VAR_16, "fail(%d) to configure PPP error intr\n", VAR_18);

 return VAR_18;
}
