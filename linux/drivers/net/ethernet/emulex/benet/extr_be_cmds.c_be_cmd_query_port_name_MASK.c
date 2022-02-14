
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_get_port_name {size_t* port_name; } ;
struct TYPE_2__ {int version; } ;
struct be_cmd_req_get_port_name {TYPE_1__ hdr; } ;
struct be_adapter {size_t port_name; size_t hba_port_num; int mbox_lock; } ;


 int FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_3 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

int FUNC_7(struct be_adapter *VAR_2)
{
 struct be_cmd_req_get_port_name *VAR_3;
 struct be_mcc_wrb *VAR_4;
 int VAR_5;

 if (FUNC_4(&VAR_2->mbox_lock))
  return -1;

 VAR_4 = FUNC_6(VAR_2);
 VAR_3 = FUNC_3(VAR_4);

 FUNC_2(&VAR_3->hdr, VAR_0,
          VAR_1, sizeof(*VAR_3), VAR_4,
          ((void*)0));
 if (!FUNC_0(VAR_2))
  VAR_3->hdr.version = 1;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  struct be_cmd_resp_get_port_name *VAR_6 = FUNC_3(VAR_4);

  VAR_2->port_name = VAR_6->port_name[VAR_2->hba_port_num];
 } else {
  VAR_2->port_name = VAR_2->hba_port_num + '0';
 }

 FUNC_5(&VAR_2->mbox_lock);
 return VAR_5;
}
