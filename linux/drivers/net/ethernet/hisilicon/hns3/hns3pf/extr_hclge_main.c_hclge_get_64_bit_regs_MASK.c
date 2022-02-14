
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int * data; } ;
typedef int __le64 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 struct hclge_desc* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct hclge_desc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_5, u32 VAR_6,
     void *VAR_7)
{



 struct hclge_desc *VAR_8;
 u64 *VAR_9 = VAR_7;
 __le64 *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 if (VAR_6 == 0)
  return 0;

 VAR_11 = 1;
 VAR_12 = FUNC_0(VAR_6 + VAR_11,
          4);
 VAR_8 = FUNC_4(VAR_12, sizeof(struct hclge_desc), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(&VAR_8[0], VAR_4, 1);
 VAR_16 = FUNC_2(&VAR_5->hw, VAR_8, VAR_12);
 if (VAR_16) {
  FUNC_1(&VAR_5->pdev->dev,
   "Query 64 bit register cmd failed, ret = %d.\n", VAR_16);
  FUNC_5(VAR_8);
  return VAR_16;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  if (VAR_13 == 0) {
   VAR_10 = (__le64 *)(&VAR_8[VAR_13].data[0]);
   VAR_15 = 4 - VAR_11;
  } else {
   VAR_10 = (__le64 *)(&VAR_8[VAR_13]);
   VAR_15 = 4;
  }
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   *VAR_9++ = FUNC_6(*VAR_10++);

   VAR_6--;
   if (!VAR_6)
    break;
  }
 }

 FUNC_5(VAR_8);
 return 0;
}
