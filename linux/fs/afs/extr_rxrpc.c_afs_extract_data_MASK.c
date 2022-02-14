
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iov_iter {int dummy; } ;
struct afs_net {int socket; } ;
struct afs_call {int error; int state; int service_id; int rxcall; TYPE_1__* type; struct iov_iter* _iter; struct afs_net* net; } ;
typedef enum afs_call_state { ____Placeholder_afs_call_state } afs_call_state ;
struct TYPE_2__ {int name; } ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (struct afs_call*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct afs_call*,int,int ) ;
 int FUNC_4 (struct afs_call*,int,int ) ;
 int FUNC_5 (struct iov_iter*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ,struct iov_iter*,int,int *,int *) ;

int FUNC_8(struct afs_call *VAR_4, bool VAR_5)
{
 struct afs_net *VAR_6 = VAR_4->net;
 struct iov_iter *VAR_7 = VAR_4->_iter;
 enum afs_call_state VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 FUNC_1("{%s,%zu},%d", VAR_4->type->name, FUNC_5(VAR_7), VAR_5);

 VAR_10 = FUNC_7(VAR_6->socket, VAR_4->rxcall, VAR_7,
         VAR_5, &VAR_9,
         &VAR_4->service_id);
 if (VAR_10 == 0 || VAR_10 == -VAR_2)
  return VAR_10;

 VAR_8 = FUNC_0(VAR_4->state);
 if (VAR_10 == 1) {
  switch (VAR_8) {
  case 130:
   FUNC_4(VAR_4, VAR_8, VAR_0);
   break;
  case 128:
   FUNC_4(VAR_4, VAR_8, VAR_1);
   break;
  case 129:
   FUNC_6("prem complete %d", VAR_4->error);
   return FUNC_2(VAR_4, VAR_3);
  default:
   break;
  }
  return 0;
 }

 FUNC_3(VAR_4, VAR_10, VAR_9);
 return VAR_10;
}
