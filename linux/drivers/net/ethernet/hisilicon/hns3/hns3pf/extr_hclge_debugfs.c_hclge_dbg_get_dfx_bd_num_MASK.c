
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {scalar_t__* data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclge_dev*,struct hclge_desc*) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, int VAR_2)
{


 struct hclge_desc VAR_3[4];
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (VAR_6) {
  FUNC_1(&VAR_1->pdev->dev,
   "get dfx bdnum fail, ret = %d\n", VAR_6);
  return VAR_6;
 }

 VAR_4 = FUNC_0(VAR_3[0].data);
 VAR_5 = VAR_2 % VAR_4;
 return (int)VAR_3[VAR_2 / VAR_4].data[VAR_5];
}
