
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smd_edge {int dev; } ;
struct qcom_smd_channel {scalar_t__ remote_state; int state_change_event; int bounce_buffer; int fifo_size; struct qcom_smd_edge* edge; } ;
typedef int rpmsg_rx_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (struct qcom_smd_channel*,int ) ;
 int FUNC_4 (struct qcom_smd_channel*,scalar_t__) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct qcom_smd_channel *VAR_8,
     rpmsg_rx_cb_t VAR_9)
{
 struct qcom_smd_edge *VAR_10 = VAR_8->edge;
 size_t VAR_11;
 int VAR_12;




 VAR_11 = FUNC_2(VAR_8->fifo_size, VAR_7);
 VAR_8->bounce_buffer = FUNC_1(VAR_11, VAR_2);
 if (!VAR_8->bounce_buffer)
  return -VAR_0;

 FUNC_3(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_6);


 VAR_12 = FUNC_5(VAR_8->state_change_event,
   VAR_8->remote_state == VAR_6 ||
   VAR_8->remote_state == VAR_5,
   VAR_3);
 if (!VAR_12) {
  FUNC_0(&VAR_10->dev, "remote side did not enter opening state\n");
  goto out_close_timeout;
 }

 FUNC_4(VAR_8, VAR_5);


 VAR_12 = FUNC_5(VAR_8->state_change_event,
   VAR_8->remote_state == VAR_5,
   VAR_3);
 if (!VAR_12) {
  FUNC_0(&VAR_10->dev, "remote side did not enter open state\n");
  goto out_close_timeout;
 }

 return 0;

out_close_timeout:
 FUNC_4(VAR_8, VAR_4);
 return -VAR_1;
}
