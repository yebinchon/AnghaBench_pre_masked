
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dev; int idr_lock; int lcids; } ;
struct glink_channel {int open_ack; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 struct glink_channel* FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct qcom_glink *VAR_1, unsigned int VAR_2)
{
 struct glink_channel *VAR_3;

 FUNC_3(&VAR_1->idr_lock);
 VAR_3 = FUNC_2(&VAR_1->lcids, VAR_2);
 FUNC_4(&VAR_1->idr_lock);
 if (!VAR_3) {
  FUNC_1(VAR_1->dev, "Invalid open ack packet\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_3->open_ack);

 return 0;
}
