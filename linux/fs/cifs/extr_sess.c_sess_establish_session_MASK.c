
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sess_data {struct cifs_ses* ses; } ;
struct TYPE_5__ {int len; int response; } ;
struct cifs_ses {int need_reconnect; int status; TYPE_3__* server; TYPE_2__ auth_key; } ;
struct TYPE_4__ {int len; int response; } ;
struct TYPE_6__ {int session_estab; int sequence_number; int srv_mutex; TYPE_1__ session_key; scalar_t__ sign; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct sess_data *VAR_5)
{
 struct cifs_ses *VAR_6 = VAR_5->ses;

 FUNC_2(&VAR_6->server->srv_mutex);
 if (!VAR_6->server->session_estab) {
  if (VAR_6->server->sign) {
   VAR_6->server->session_key.response =
    FUNC_1(VAR_6->auth_key.response,
    VAR_6->auth_key.len, VAR_3);
   if (!VAR_6->server->session_key.response) {
    FUNC_3(&VAR_6->server->srv_mutex);
    return -VAR_1;
   }
   VAR_6->server->session_key.len =
      VAR_6->auth_key.len;
  }
  VAR_6->server->sequence_number = 0x2;
  VAR_6->server->session_estab = 1;
 }
 FUNC_3(&VAR_6->server->srv_mutex);

 FUNC_0(VAR_2, "CIFS session established successfully\n");
 FUNC_4(&VAR_4);
 VAR_6->status = VAR_0;
 VAR_6->need_reconnect = 0;
 FUNC_5(&VAR_4);

 return 0;
}
