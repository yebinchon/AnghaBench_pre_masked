
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dev; } ;
struct mei_cl_cb {int fop_type; int list; } ;
struct mei_cl {int wait; int rx_wait; int rx_flow_ctrl_creds; int rd_completed; int tx_wait; int writing_state; struct mei_device* dev; } ;


 int FUNC_0 (int ) ;







 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mei_cl*) ;
 int FUNC_4 (struct mei_cl*) ;
 int FUNC_5 (struct mei_cl*) ;
 int FUNC_6 (struct mei_cl_cb*) ;
 int FUNC_7 (struct mei_cl_cb*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct mei_cl *VAR_1, struct mei_cl_cb *VAR_2)
{
 struct mei_device *VAR_3 = VAR_1->dev;

 switch (VAR_2->fop_type) {
 case 128:
  FUNC_7(VAR_2);
  VAR_1->writing_state = VAR_0;
  if (FUNC_10(&VAR_1->tx_wait)) {
   FUNC_12(&VAR_1->tx_wait);
  } else {
   FUNC_9(VAR_3->dev);
   FUNC_8(VAR_3->dev);
  }
  break;

 case 129:
  FUNC_2(&VAR_2->list, &VAR_1->rd_completed);
  if (!FUNC_4(VAR_1) &&
      !FUNC_1(!VAR_1->rx_flow_ctrl_creds))
   VAR_1->rx_flow_ctrl_creds--;
  if (!FUNC_3(VAR_1))
   FUNC_12(&VAR_1->rx_wait);
  break;

 case 134:
 case 133:
 case 130:
 case 131:
  if (FUNC_10(&VAR_1->wait))
   FUNC_11(&VAR_1->wait);

  break;
 case 132:
  FUNC_6(VAR_2);
  FUNC_5(VAR_1);
  break;
 default:
  FUNC_0(0);
 }
}
