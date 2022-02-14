
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_request {int data_size; scalar_t__ checksum; int mailbox_version; int mailbox_id; int struct_version; } ;
struct wilco_ec_message {int request_size; struct wilco_ec_request* request_data; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wilco_ec_request*,int ,int) ;
 scalar_t__ FUNC_1 (struct wilco_ec_request*,int) ;

__attribute__((used)) static void FUNC_2(struct wilco_ec_message *VAR_2,
        struct wilco_ec_request *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->struct_version = VAR_0;
 VAR_3->mailbox_id = VAR_2->type;
 VAR_3->mailbox_version = VAR_1;
 VAR_3->data_size = VAR_2->request_size;


 VAR_3->checksum = FUNC_1(VAR_3, sizeof(*VAR_3));
 VAR_3->checksum += FUNC_1(VAR_2->request_data, VAR_2->request_size);
 VAR_3->checksum = -VAR_3->checksum;
}
