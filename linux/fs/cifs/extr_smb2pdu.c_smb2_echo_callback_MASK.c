
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int CreditRequest; } ;
struct smb2_echo_rsp {TYPE_1__ sync_hdr; } ;
struct mid_q_entry {scalar_t__ mid_state; scalar_t__ resp_buf; struct TCP_Server_Info* callback_data; } ;
struct cifs_credits {int instance; int value; } ;
struct TCP_Server_Info {int reconnect_instance; } ;


 int VAR_0 ;
 int FUNC_0 (struct mid_q_entry*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct TCP_Server_Info*,struct cifs_credits*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct mid_q_entry *VAR_3)
{
 struct TCP_Server_Info *VAR_4 = VAR_3->callback_data;
 struct smb2_echo_rsp *VAR_5 = (struct smb2_echo_rsp *)VAR_3->resp_buf;
 struct cifs_credits VAR_6 = { .value = 0, .instance = 0 };

 if (VAR_3->mid_state == VAR_2
     || VAR_3->mid_state == VAR_1) {
  VAR_6.value = FUNC_2(VAR_5->sync_hdr.CreditRequest);
  VAR_6.instance = VAR_4->reconnect_instance;
 }

 FUNC_0(VAR_3);
 FUNC_1(VAR_4, &VAR_6, VAR_0);
}
