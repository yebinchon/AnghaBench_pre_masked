
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hclge_dev *VAR_2,
     struct hclge_desc *VAR_3, int *VAR_4,
     int *VAR_5)
{


 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
   if (VAR_6 == 0 && VAR_7 == 0)
    continue;

   FUNC_0(&VAR_2->pdev->dev, "0x%04x | 0x%08x\n",
     *VAR_4,
     FUNC_1(VAR_3[VAR_6].data[VAR_7]));
   *VAR_4 += sizeof(u32);
   *VAR_5 -= sizeof(u32);
   if (*VAR_5 <= 0)
    return;
  }
 }
}
