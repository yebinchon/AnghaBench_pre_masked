
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct cifs_credits {int dummy; } ;
struct cifs_writedata {unsigned int bytes; int refcount; struct cifs_credits credits; int list; TYPE_4__* cfile; } ;
struct cifs_aio_ctx {int dummy; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
struct TYPE_8__ {scalar_t__ invalidHandle; int tlink; } ;
struct TYPE_7__ {TYPE_1__* ses; } ;
struct TYPE_6__ {int (* wait_mtu_credits ) (struct TCP_Server_Info*,unsigned int,unsigned int*,struct cifs_credits*) ;int (* async_writev ) (struct cifs_writedata*,int ) ;} ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int VAR_0 ;
 int FUNC_0 (struct TCP_Server_Info*,struct cifs_credits*,int ) ;
 int FUNC_1 (struct TCP_Server_Info*,struct cifs_credits*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct TCP_Server_Info*,unsigned int,unsigned int*,struct cifs_credits*) ;
 int FUNC_7 (struct cifs_writedata*,int ) ;
 TYPE_3__* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct cifs_writedata *VAR_2, struct list_head *VAR_3,
 struct cifs_aio_ctx *VAR_4)
{
 unsigned int VAR_5;
 struct cifs_credits VAR_6;
 int VAR_7;
 struct TCP_Server_Info *VAR_8 =
  FUNC_8(VAR_2->cfile->tlink)->ses->server;

 do {
  if (VAR_2->cfile->invalidHandle) {
   VAR_7 = FUNC_2(VAR_2->cfile, 0);
   if (VAR_7 == -VAR_0)
    continue;
   else if (VAR_7)
    break;
  }







  do {
   VAR_7 = VAR_8->ops->wait_mtu_credits(VAR_8, VAR_2->bytes,
      &VAR_5, &VAR_6);
   if (VAR_7)
    goto fail;

   if (VAR_5 < VAR_2->bytes) {
    FUNC_0(VAR_8, &VAR_6, 0);
    FUNC_5(1000);
   }
  } while (VAR_5 < VAR_2->bytes);
  VAR_2->credits = VAR_6;

  VAR_7 = FUNC_1(VAR_8, &VAR_2->credits, VAR_2->bytes);

  if (!VAR_7) {
   if (VAR_2->cfile->invalidHandle)
    VAR_7 = -VAR_0;
   else
    VAR_7 = VAR_8->ops->async_writev(VAR_2,
     VAR_1);
  }


  if (!VAR_7) {
   FUNC_4(&VAR_2->list, VAR_3);
   return 0;
  }


  FUNC_0(VAR_8, &VAR_2->credits, 0);
 } while (VAR_7 == -VAR_0);

fail:
 FUNC_3(&VAR_2->refcount, VAR_1);
 return VAR_7;
}
