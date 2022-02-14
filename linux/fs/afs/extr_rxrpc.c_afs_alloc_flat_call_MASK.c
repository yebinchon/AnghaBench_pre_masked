
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_net {int dummy; } ;
struct afs_call_type {int op; } ;
struct afs_call {size_t request_size; size_t reply_max; int waitq; int operation_ID; void* buffer; void* request; } ;


 int VAR_0 ;
 struct afs_call* FUNC_0 (struct afs_net*,struct afs_call_type const*,int ) ;
 int FUNC_1 (struct afs_call*,size_t) ;
 int FUNC_2 (struct afs_call*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (size_t,int ) ;

struct afs_call *FUNC_5(struct afs_net *VAR_1,
         const struct afs_call_type *VAR_2,
         size_t VAR_3, size_t VAR_4)
{
 struct afs_call *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (!VAR_5)
  goto nomem_call;

 if (VAR_3) {
  VAR_5->request_size = VAR_3;
  VAR_5->request = FUNC_4(VAR_3, VAR_0);
  if (!VAR_5->request)
   goto nomem_free;
 }

 if (VAR_4) {
  VAR_5->reply_max = VAR_4;
  VAR_5->buffer = FUNC_4(VAR_4, VAR_0);
  if (!VAR_5->buffer)
   goto nomem_free;
 }

 FUNC_1(VAR_5, VAR_5->reply_max);
 VAR_5->operation_ID = VAR_2->op;
 FUNC_3(&VAR_5->waitq);
 return VAR_5;

nomem_free:
 FUNC_2(VAR_5);
nomem_call:
 return ((void*)0);
}
