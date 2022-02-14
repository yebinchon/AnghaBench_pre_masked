
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_request {int dummy; } ;
struct wilco_ec_message {int request_size; int response_size; int flags; int type; } ;
struct wilco_ec_device {int mailbox_lock; struct wilco_ec_request* data_buffer; int dev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wilco_ec_message*,struct wilco_ec_request*) ;
 int FUNC_4 (struct wilco_ec_device*,struct wilco_ec_message*,struct wilco_ec_request*) ;

int FUNC_5(struct wilco_ec_device *VAR_0, struct wilco_ec_message *VAR_1)
{
 struct wilco_ec_request *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->dev, "type=%04x flags=%02x rslen=%zu rqlen=%zu\n",
  VAR_1->type, VAR_1->flags, VAR_1->response_size, VAR_1->request_size);

 FUNC_1(&VAR_0->mailbox_lock);

 VAR_2 = VAR_0->data_buffer;
 FUNC_3(VAR_1, VAR_2);

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->mailbox_lock);

 return VAR_3;

}
