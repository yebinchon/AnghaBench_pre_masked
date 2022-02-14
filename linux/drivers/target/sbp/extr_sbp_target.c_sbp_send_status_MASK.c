
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct sbp_target_request {int orb_pointer; int se_cmd; TYPE_1__ status; struct sbp_login_descriptor* login; } ;
struct sbp_login_descriptor {int status_fifo_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct sbp_target_request*,int ,int ,TYPE_1__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sbp_target_request *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6;
 struct sbp_login_descriptor *VAR_7 = VAR_3->login;

 VAR_6 = (((FUNC_0(VAR_3->status.status) >> 24) & 0x07) + 1) * 4;

 VAR_4 = FUNC_2(VAR_3, VAR_2,
   VAR_7->status_fifo_addr, &VAR_3->status, VAR_6);
 if (VAR_4 != VAR_1) {
  FUNC_1("sbp_send_status: write failed: 0x%x\n", VAR_4);
  VAR_5 = -VAR_0;
  goto put_ref;
 }

 FUNC_1("sbp_send_status: status write complete for ORB: 0x%llx\n",
   VAR_3->orb_pointer);





put_ref:
 FUNC_3(&VAR_3->se_cmd);
 return VAR_5;
}
