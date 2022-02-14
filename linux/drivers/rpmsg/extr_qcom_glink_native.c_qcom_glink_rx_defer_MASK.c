
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int rx_work; int rx_lock; int rx_queue; int dev; } ;
struct glink_msg {int dummy; } ;
struct glink_defer_cmd {int node; int msg; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 struct glink_defer_cmd* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct qcom_glink*,int) ;
 int FUNC_6 (struct qcom_glink*) ;
 int FUNC_7 (struct qcom_glink*,int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct qcom_glink *VAR_3, size_t VAR_4)
{
 struct glink_defer_cmd *VAR_5;

 VAR_4 = FUNC_0(VAR_4, 8);

 if (FUNC_6(VAR_3) < sizeof(struct glink_msg) + VAR_4) {
  FUNC_2(VAR_3->dev, "Insufficient data in rx fifo");
  return -VAR_1;
 }

 VAR_5 = FUNC_3(sizeof(*VAR_5) + VAR_4, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->node);

 FUNC_7(VAR_3, &VAR_5->msg, 0, sizeof(VAR_5->msg) + VAR_4);

 FUNC_9(&VAR_3->rx_lock);
 FUNC_4(&VAR_5->node, &VAR_3->rx_queue);
 FUNC_10(&VAR_3->rx_lock);

 FUNC_8(&VAR_3->rx_work);
 FUNC_5(VAR_3, sizeof(VAR_5->msg) + VAR_4);

 return 0;
}
