
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_hw_error {int msg; int int_msk; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_desc*,int ,int ) ;
 struct hclge_hw_error* VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 struct hclge_desc VAR_6[2];
 int VAR_7;


 VAR_7 = FUNC_1(VAR_4, &VAR_6[0], VAR_2,
        0);
 if (VAR_7) {
  FUNC_0(VAR_5, "failed(%d) to query ROCEE OVF error sts\n", VAR_7);
  return VAR_7;
 }


 if (FUNC_2(VAR_6[0].data[0]) & VAR_0) {
  const struct hclge_hw_error *VAR_8;
  u32 VAR_9;

  VAR_8 = &VAR_3[0];
  VAR_9 = VAR_1 &
     FUNC_2(VAR_6[0].data[0]);
  while (VAR_8->msg) {
   if (VAR_8->int_msk == VAR_9) {
    FUNC_0(VAR_5, "%s [error status=0x%x] found\n",
     VAR_8->msg,
     FUNC_2(VAR_6[0].data[0]));
    break;
   }
   VAR_8++;
  }
 }

 if (FUNC_2(VAR_6[0].data[1]) & VAR_0) {
  FUNC_0(VAR_5, "ROCEE TSP OVF [error status=0x%x] found\n",
   FUNC_2(VAR_6[0].data[1]));
 }

 if (FUNC_2(VAR_6[0].data[2]) & VAR_0) {
  FUNC_0(VAR_5, "ROCEE SCC OVF [error status=0x%x] found\n",
   FUNC_2(VAR_6[0].data[2]));
 }

 return 0;
}
