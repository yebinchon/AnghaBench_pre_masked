
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclge_mac {scalar_t__ media_type; scalar_t__ speed_type; int speed; } ;
struct TYPE_4__ {struct hclge_mac mac; } ;
struct hclge_dev {int support_sfp_query; TYPE_1__* pdev; TYPE_2__ hw; } ;
struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hclge_dev*,int,int ) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_mac*) ;
 int FUNC_2 (struct hclge_dev*,int*) ;
 int FUNC_3 (struct hclge_mac*) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_5)
{
 struct hclge_mac *VAR_6 = &VAR_5->hw.mac;
 int VAR_7 = VAR_2;
 int VAR_8;


 if (VAR_6->media_type == VAR_3)
  return 0;


 if (!VAR_5->support_sfp_query)
  return 0;

 if (VAR_5->pdev->revision >= 0x21)
  VAR_8 = FUNC_1(VAR_5, VAR_6);
 else
  VAR_8 = FUNC_2(VAR_5, &VAR_7);

 if (VAR_8 == -VAR_0) {
  VAR_5->support_sfp_query = 0;
  return VAR_8;
 } else if (VAR_8) {
  return VAR_8;
 }

 if (VAR_5->pdev->revision >= 0x21) {
  if (VAR_6->speed_type == VAR_4) {
   FUNC_3(VAR_6);
   return 0;
  }
  return FUNC_0(VAR_5, VAR_6->speed,
            VAR_1);
 } else {
  if (VAR_7 == VAR_2)
   return 0;


  return FUNC_0(VAR_5, VAR_7, VAR_1);
 }
}
