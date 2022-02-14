
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 size_t* VAR_1 ;
 int FUNC_2 (struct hclge_dev*,struct hclge_desc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_2,
        int *VAR_3,
        u32 VAR_4)
{


 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct hclge_desc VAR_10[4];
 int VAR_11;

 VAR_11 = FUNC_2(VAR_2, VAR_10);
 if (VAR_11) {
  FUNC_1(&VAR_2->pdev->dev,
   "Get dfx bd num fail, status is %d.\n", VAR_11);
  return VAR_11;
 }

 VAR_5 = FUNC_0(VAR_10[0].data);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = VAR_1[VAR_9];
  VAR_7 = VAR_8 % VAR_5;
  VAR_6 = VAR_8 / VAR_5;
  VAR_3[VAR_9] = FUNC_3(VAR_10[VAR_6].data[VAR_7]);
 }

 return VAR_11;
}
