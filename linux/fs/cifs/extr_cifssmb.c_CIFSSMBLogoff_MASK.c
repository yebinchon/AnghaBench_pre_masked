
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cifs_ses {int session_mutex; int Suid; TYPE_3__* server; scalar_t__ need_reconnect; } ;
struct TYPE_7__ {scalar_t__ sign; } ;
struct TYPE_5__ {int Uid; int Flags2; int Mid; } ;
struct TYPE_6__ {int AndXCommand; TYPE_1__ hdr; } ;
typedef TYPE_2__ LOGOFF_ANDX_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int const,struct cifs_ses*,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int *,void**) ;

int
FUNC_7(const unsigned int VAR_5, struct cifs_ses *VAR_6)
{
 LOGOFF_ANDX_REQ *VAR_7;
 int VAR_8 = 0;

 FUNC_1(VAR_2, "In SMBLogoff for session disconnect\n");






 if (!VAR_6 || !VAR_6->server)
  return -VAR_1;

 FUNC_4(&VAR_6->session_mutex);
 if (VAR_6->need_reconnect)
  goto session_already_dead;

 VAR_8 = FUNC_6(VAR_4, 2, ((void*)0), (void **)&VAR_7);
 if (VAR_8) {
  FUNC_5(&VAR_6->session_mutex);
  return VAR_8;
 }

 VAR_7->hdr.Mid = FUNC_3(VAR_6->server);

 if (VAR_6->server->sign)
  VAR_7->hdr.Flags2 |= VAR_3;

 VAR_7->hdr.Uid = VAR_6->Suid;

 VAR_7->AndXCommand = 0xFF;
 VAR_8 = FUNC_0(VAR_5, VAR_6, (char *) VAR_7, 0);
 FUNC_2(VAR_7);
session_already_dead:
 FUNC_5(&VAR_6->session_mutex);




 if (VAR_8 == -VAR_0)
  VAR_8 = 0;
 return VAR_8;
}
