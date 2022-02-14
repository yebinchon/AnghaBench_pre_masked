
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hclge_dev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_3, bool VAR_4)
{
 struct device *VAR_5 = &VAR_3->pdev->dev;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_0,
      VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_5, "fail(%d) to configure PPU MPF ECC error intr\n",
   VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3,
      VAR_1,
      VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_5, "fail(%d) to configure PPU MPF other intr\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3,
      VAR_2, VAR_4);
 if (VAR_6)
  FUNC_0(VAR_5, "fail(%d) to configure PPU PF error interrupts\n",
   VAR_6);
 return VAR_6;
}
