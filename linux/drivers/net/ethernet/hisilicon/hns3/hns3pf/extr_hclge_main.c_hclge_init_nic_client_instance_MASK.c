
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hnae3_client {TYPE_4__* ops; } ;
struct hnae3_ae_dev {TYPE_2__* pdev; struct hclge_dev* priv; } ;
struct TYPE_11__ {struct hnae3_client* client; } ;
struct hclge_vport {TYPE_5__ nic; } ;
struct TYPE_7__ {int reset_cnt; } ;
struct hclge_dev {int state; TYPE_3__* vport; TYPE_1__ rst_stats; } ;
struct TYPE_10__ {int (* init_instance ) (TYPE_5__*) ;int (* uninit_instance ) (TYPE_5__*,int ) ;} ;
struct TYPE_9__ {int nic; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclge_dev*,int) ;
 int FUNC_3 (struct hclge_dev*) ;
 int FUNC_4 (struct hnae3_client*,struct hnae3_ae_dev*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct hnae3_ae_dev *VAR_4,
       struct hclge_vport *VAR_5)
{
 struct hnae3_client *VAR_6 = VAR_5->nic.client;
 struct hclge_dev *VAR_7 = VAR_4->priv;
 int VAR_8;
 int VAR_9;

 VAR_8 = VAR_7->rst_stats.reset_cnt;
 VAR_9 = VAR_6->ops->init_instance(&VAR_5->nic);
 if (VAR_9)
  return VAR_9;

 FUNC_7(VAR_1, &VAR_7->state);
 if (FUNC_10(VAR_2, &VAR_7->state) ||
     VAR_8 != VAR_7->rst_stats.reset_cnt) {
  VAR_9 = -VAR_0;
  goto init_nic_err;
 }


 VAR_9 = FUNC_2(VAR_7, 1);
 if (VAR_9) {
  FUNC_1(&VAR_4->pdev->dev,
   "fail(%d) to enable hw error interrupts\n", VAR_9);
  goto init_nic_err;
 }

 FUNC_4(VAR_6, VAR_4, 1);

 if (FUNC_6(&VAR_7->vport->nic))
  FUNC_3(VAR_7);

 return VAR_9;

init_nic_err:
 FUNC_0(VAR_1, &VAR_7->state);
 while (FUNC_10(VAR_2, &VAR_7->state))
  FUNC_5(VAR_3);

 VAR_6->ops->uninit_instance(&VAR_5->nic, 0);

 return VAR_9;
}
