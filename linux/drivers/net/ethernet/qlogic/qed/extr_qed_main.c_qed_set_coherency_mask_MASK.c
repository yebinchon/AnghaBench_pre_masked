
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qed_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;

 if (FUNC_3(VAR_2, FUNC_0(64)) == 0) {
  if (FUNC_2(VAR_2, FUNC_0(64)) != 0) {
   FUNC_1(VAR_1,
      "Can't request 64-bit consistent allocations\n");
   return -VAR_0;
  }
 } else if (FUNC_3(VAR_2, FUNC_0(32)) != 0) {
  FUNC_1(VAR_1, "Can't request 64b/32b DMA addresses\n");
  return -VAR_0;
 }

 return 0;
}
