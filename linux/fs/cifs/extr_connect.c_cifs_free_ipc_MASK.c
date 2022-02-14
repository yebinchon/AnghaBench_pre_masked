
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cifs_tcon {int dummy; } ;
struct cifs_ses {struct cifs_tcon* tcon_ipc; TYPE_1__* server; } ;
struct TYPE_4__ {int (* tree_disconnect ) (int,struct cifs_tcon*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,struct cifs_tcon*) ;
 int FUNC_4 (struct cifs_tcon*) ;

__attribute__((used)) static int
FUNC_5(struct cifs_ses *VAR_1)
{
 int VAR_2 = 0, VAR_3;
 struct cifs_tcon *VAR_4 = VAR_1->tcon_ipc;

 if (VAR_4 == ((void*)0))
  return 0;

 if (VAR_1->server->ops->tree_disconnect) {
  VAR_3 = FUNC_2();
  VAR_2 = VAR_1->server->ops->tree_disconnect(VAR_3, VAR_4);
  FUNC_1(VAR_3);
 }

 if (VAR_2)
  FUNC_0(VAR_0, "failed to disconnect IPC tcon (rc=%d)\n", VAR_2);

 FUNC_4(VAR_4);
 VAR_1->tcon_ipc = ((void*)0);
 return VAR_2;
}
