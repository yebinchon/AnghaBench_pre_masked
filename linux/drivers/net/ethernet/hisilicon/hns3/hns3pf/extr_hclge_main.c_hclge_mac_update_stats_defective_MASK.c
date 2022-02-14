
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mac_stats; } ;
struct hclge_dev {TYPE_2__* pdev; int hw; TYPE_1__ hw_stats; } ;
struct hclge_desc {int * data; } ;
typedef int __le64 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_4)
{


 u64 *VAR_5 = (u64 *)(&VAR_4->hw_stats.mac_stats);
 struct hclge_desc VAR_6[21];
 __le64 *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_2(&VAR_6[0], VAR_1, 1);
 VAR_11 = FUNC_1(&VAR_4->hw, VAR_6, 21);
 if (VAR_11) {
  FUNC_0(&VAR_4->pdev->dev,
   "Get MAC pkt stats fail, status = %d.\n", VAR_11);

  return VAR_11;
 }

 for (VAR_8 = 0; VAR_8 < 21; VAR_8++) {

  if (FUNC_4(VAR_8 == 0)) {
   VAR_7 = (__le64 *)(&VAR_6[VAR_8].data[0]);
   VAR_10 = VAR_2;
  } else {
   VAR_7 = (__le64 *)(&VAR_6[VAR_8]);
   VAR_10 = VAR_3;
  }

  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   *VAR_5 += FUNC_3(*VAR_7);
   VAR_5++;
   VAR_7++;
  }
 }

 return 0;
}
