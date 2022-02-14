
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int flr_rst_cnt; int pf_rst_cnt; } ;
struct hclge_dev {int reset_type; TYPE_2__* pdev; int hw; TYPE_1__ rst_stats; int flr_state; int state; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct hclge_dev*,int ) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct hclge_dev*,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct hclge_dev *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;

 switch (VAR_5->reset_type) {
 case 129:



  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_3(VAR_5, 0);
  if (VAR_7) {
   FUNC_1(&VAR_5->pdev->dev,
    "asserting function reset fail %d!\n", VAR_7);
   return VAR_7;
  }






  FUNC_10(VAR_2, &VAR_5->state);
  VAR_5->rst_stats.pf_rst_cnt++;
  break;
 case 130:



  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7)
   return VAR_7;

  FUNC_10(VAR_2, &VAR_5->state);
  FUNC_10(VAR_4, &VAR_5->flr_state);
  VAR_5->rst_stats.flr_rst_cnt++;
  break;
 case 128:
  FUNC_5(VAR_5);
  VAR_6 = FUNC_6(&VAR_5->hw, VAR_0);
  FUNC_8(&VAR_5->hw, VAR_0,
    FUNC_0(VAR_3) | VAR_6);
  break;
 default:
  break;
 }


 FUNC_9(VAR_1);
 FUNC_7(VAR_5, 1);
 FUNC_2(&VAR_5->pdev->dev, "prepare wait ok\n");

 return VAR_7;
}
