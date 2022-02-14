
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_rxrpc {int transport; } ;
struct rxrpc_call {int dummy; } ;
struct msghdr {int msg_flags; int msg_iter; scalar_t__ msg_controllen; int * msg_control; scalar_t__ msg_namelen; int * msg_name; } ;
struct kvec {int iov_len; int iov_base; } ;
struct afs_call {size_t addr_ix; int request_size; scalar_t__ last; scalar_t__ first; int error; int state; int async_work; scalar_t__ async; struct rxrpc_call* rxcall; TYPE_2__* net; TYPE_1__* type; int abort_code; int service_id; scalar_t__ send_pages; int request; scalar_t__ max_lifespan; int debug_id; int intr; int upgrade; int key; scalar_t__ last_to; scalar_t__ first_offset; int alist; } ;
struct afs_addr_cursor {size_t index; int responded; int error; int abort_code; TYPE_3__* alist; } ;
typedef int s64 ;
typedef int gfp_t ;
struct TYPE_6__ {struct sockaddr_rxrpc* addrs; } ;
struct TYPE_5__ {int socket; int nr_outstanding_calls; } ;
struct TYPE_4__ {int (* done ) (struct afs_call*) ;int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct rxrpc_call*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rxrpc_call*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,struct afs_call*,int *,int ,int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct afs_call*,int ) ;
 int VAR_9 ;
 int FUNC_8 (struct afs_call*) ;
 int FUNC_9 (struct afs_call*,struct msghdr*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,struct kvec*,int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct rxrpc_call*,int ,int,char*) ;
 struct rxrpc_call* FUNC_15 (int ,struct sockaddr_rxrpc*,int ,unsigned long,int,int ,int ,int ,int ,int ) ;
 int FUNC_16 (int ,struct rxrpc_call*) ;
 int FUNC_17 (int ,struct rxrpc_call*,int *,int,int *,int *) ;
 int FUNC_18 (int ,struct rxrpc_call*,struct msghdr*,int,int ) ;
 int FUNC_19 (int ,struct rxrpc_call*,scalar_t__) ;
 int FUNC_20 (struct afs_call*) ;
 int FUNC_21 (struct afs_call*) ;

void FUNC_22(struct afs_addr_cursor *VAR_12, struct afs_call *VAR_13, gfp_t VAR_14)
{
 struct sockaddr_rxrpc *VAR_15 = &VAR_12->alist->addrs[VAR_12->index];
 struct rxrpc_call *VAR_16;
 struct msghdr VAR_17;
 struct kvec VAR_18[1];
 s64 VAR_19;
 int VAR_20;

 FUNC_4(",{%pISp},", &VAR_15->transport);

 FUNC_0(VAR_13->type != ((void*)0));
 FUNC_0(VAR_13->type->name != ((void*)0));

 FUNC_3("____MAKE %p{%s,%x} [%d]____",
        VAR_13, VAR_13->type->name, FUNC_13(VAR_13->key),
        FUNC_10(&VAR_13->net->nr_outstanding_calls));

 VAR_13->addr_ix = VAR_12->index;
 VAR_13->alist = FUNC_6(VAR_12->alist);





 VAR_19 = VAR_13->request_size;
 if (VAR_13->send_pages) {
  if (VAR_13->last == VAR_13->first) {
   VAR_19 += VAR_13->last_to - VAR_13->first_offset;
  } else {




   VAR_19 += VAR_4 - VAR_13->first_offset;
   VAR_19 += VAR_13->last_to;
   VAR_19 += (VAR_13->last - VAR_13->first - 1) * VAR_4;
  }
 }




 if (VAR_13->async)
  FUNC_7(VAR_13, VAR_8);


 VAR_16 = FUNC_15(VAR_13->net->socket, VAR_15, VAR_13->key,
      (unsigned long)VAR_13,
      VAR_19, VAR_14,
      (VAR_13->async ?
       VAR_10 :
       VAR_11),
      VAR_13->upgrade,
      VAR_13->intr,
      VAR_13->debug_id);
 if (FUNC_1(VAR_16)) {
  VAR_20 = FUNC_2(VAR_16);
  VAR_13->error = VAR_20;
  goto error_kill_call;
 }

 VAR_13->rxcall = VAR_16;

 if (VAR_13->max_lifespan)
  FUNC_19(VAR_13->net->socket, VAR_16,
       VAR_13->max_lifespan);


 VAR_18[0].iov_base = VAR_13->request;
 VAR_18[0].iov_len = VAR_13->request_size;

 VAR_17.msg_name = ((void*)0);
 VAR_17.msg_namelen = 0;
 FUNC_12(&VAR_17.msg_iter, VAR_7, VAR_18, 1, VAR_13->request_size);
 VAR_17.msg_control = ((void*)0);
 VAR_17.msg_controllen = 0;
 VAR_17.msg_flags = VAR_3 | (VAR_13->send_pages ? VAR_2 : 0);

 VAR_20 = FUNC_18(VAR_13->net->socket, VAR_16,
         &VAR_17, VAR_13->request_size,
         VAR_9);
 if (VAR_20 < 0)
  goto error_do_abort;

 if (VAR_13->send_pages) {
  VAR_20 = FUNC_9(VAR_13, &VAR_17);
  if (VAR_20 < 0)
   goto error_do_abort;
 }







 return;

error_do_abort:
 if (VAR_20 != -VAR_1) {
  FUNC_14(VAR_13->net->socket, VAR_16,
     VAR_6, VAR_20, "KSD");
 } else {
  FUNC_12(&VAR_17.msg_iter, VAR_5, ((void*)0), 0, 0);
  FUNC_17(VAR_13->net->socket, VAR_16,
           &VAR_17.msg_iter, 0,
           &VAR_13->abort_code, &VAR_13->service_id);
  VAR_12->abort_code = VAR_13->abort_code;
  VAR_12->responded = 1;
 }
 VAR_13->error = VAR_20;
 FUNC_21(VAR_13);
error_kill_call:
 if (VAR_13->type->done)
  VAR_13->type->done(VAR_13);





 if (VAR_13->rxcall) {
  FUNC_16(VAR_13->net->socket, VAR_13->rxcall);
  VAR_13->rxcall = ((void*)0);
 }
 if (VAR_13->async) {
  if (FUNC_11(&VAR_13->async_work))
   FUNC_8(VAR_13);
  FUNC_8(VAR_13);
 }

 VAR_12->error = VAR_20;
 VAR_13->state = VAR_0;
 FUNC_5(" = %d", VAR_20);
}
