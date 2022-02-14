
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int flr_rst_cnt; int vf_func_rst_cnt; } ;
struct hclgevf_dev {int reset_type; TYPE_2__* pdev; int state; TYPE_1__ rst_stats; int flr_state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct hclgevf_dev*,int) ;
 int FUNC_2 (struct hclgevf_dev*,int ,int ,int *,int ,int,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct hclgevf_dev *VAR_4)
{


 int VAR_5 = 0;

 switch (VAR_4->reset_type) {
 case 128:
  VAR_5 = FUNC_2(VAR_4, VAR_2, 0, ((void*)0),
        0, 1, ((void*)0), sizeof(u8));
  VAR_4->rst_stats.vf_func_rst_cnt++;
  break;
 case 129:
  FUNC_4(VAR_3, &VAR_4->flr_state);
  VAR_4->rst_stats.flr_rst_cnt++;
  break;
 default:
  break;
 }

 FUNC_4(VAR_1, &VAR_4->state);

 FUNC_3(100);
 FUNC_1(VAR_4, 1);
 FUNC_0(&VAR_4->pdev->dev, "prepare reset(%d) wait done, ret:%d\n",
   VAR_4->reset_type, VAR_5);

 return VAR_5;
}
