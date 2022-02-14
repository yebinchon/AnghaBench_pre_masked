
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {void** data; int flag; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_16, bool VAR_17)
{
 struct device *VAR_18 = &VAR_16->pdev->dev;
 struct hclge_desc VAR_19[2];
 int VAR_20;


 FUNC_4(&VAR_19[0], VAR_5, 0);
 VAR_19[0].flag |= FUNC_0(VAR_4);
 FUNC_4(&VAR_19[1], VAR_5, 0);

 if (VAR_17) {
  VAR_19[0].data[0] = FUNC_1(VAR_10);
  VAR_19[0].data[2] = FUNC_1(VAR_0 |
     VAR_2);
  VAR_19[0].data[3] = FUNC_1(VAR_8);
  VAR_19[0].data[4] = FUNC_1(VAR_14 |
           VAR_12);
  VAR_19[0].data[5] = FUNC_1(VAR_6);
 }

 VAR_19[1].data[0] = FUNC_1(VAR_11);
 VAR_19[1].data[2] = FUNC_1(VAR_1 |
    VAR_3);
 VAR_19[1].data[3] = FUNC_1(VAR_9);
 VAR_19[1].data[4] = FUNC_1(VAR_15 |
          VAR_13);
 VAR_19[1].data[5] = FUNC_1(VAR_7);

 VAR_20 = FUNC_3(&VAR_16->hw, &VAR_19[0], 2);
 if (VAR_20)
  FUNC_2(VAR_18,
   "fail(%d) to configure common err interrupts\n", VAR_20);

 return VAR_20;
}
