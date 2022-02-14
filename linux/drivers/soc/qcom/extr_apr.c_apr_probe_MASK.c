
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct rpmsg_device {int ept; struct device dev; } ;
struct apr {int svcs_idr; int svcs_lock; int rx_lock; int rx_list; int rx_work; struct device* dev; int rxwq; int ch; int dest_domain_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct apr*) ;
 struct apr* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct rpmsg_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct apr *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_4->of_node, "qcom,apr-domain", &VAR_5->dest_domain_id);
 if (VAR_6) {
  FUNC_3(VAR_4, "APR Domain ID not specified in DT\n");
  return VAR_6;
 }

 FUNC_4(VAR_4, VAR_5);
 VAR_5->ch = VAR_3->ept;
 VAR_5->dev = VAR_4;
 VAR_5->rxwq = FUNC_2("qcom_apr_rx");
 if (!VAR_5->rxwq) {
  FUNC_3(VAR_5->dev, "Failed to start Rx WQ\n");
  return -VAR_0;
 }
 FUNC_1(&VAR_5->rx_work, VAR_2);
 FUNC_0(&VAR_5->rx_list);
 FUNC_9(&VAR_5->rx_lock);
 FUNC_9(&VAR_5->svcs_lock);
 FUNC_6(&VAR_5->svcs_idr);
 FUNC_8(VAR_4);

 return 0;
}
