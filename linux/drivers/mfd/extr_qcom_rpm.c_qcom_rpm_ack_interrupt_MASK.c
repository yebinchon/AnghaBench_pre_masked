
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qcom_rpm {int ack_status; int ack; int dev; TYPE_1__* data; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ack_sel_size; scalar_t__ ack_ctx_off; scalar_t__ ack_sel_off; } ;


 int VAR_0 ;
 int FUNC_0 (struct qcom_rpm*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct qcom_rpm *VAR_4 = VAR_3;
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(FUNC_0(VAR_4, VAR_4->data->ack_ctx_off));
 for (VAR_6 = 0; VAR_6 < VAR_4->data->ack_sel_size; VAR_6++)
  FUNC_5(0,
   FUNC_0(VAR_4, VAR_4->data->ack_sel_off + VAR_6));
 FUNC_4(0, FUNC_0(VAR_4, VAR_4->data->ack_ctx_off));

 if (VAR_5 & VAR_1) {
  FUNC_2(VAR_4->dev, "ignoring notification!\n");
 } else {
  VAR_4->ack_status = VAR_5;
  FUNC_1(&VAR_4->ack);
 }

 return VAR_0;
}
