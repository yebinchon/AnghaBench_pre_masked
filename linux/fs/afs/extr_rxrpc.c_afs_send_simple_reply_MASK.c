
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int msg_iter; scalar_t__ msg_namelen; int * msg_name; } ;
struct kvec {size_t iov_len; void* iov_base; } ;
struct afs_net {int socket; } ;
struct afs_call {int rxcall; struct afs_net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,struct kvec*,int,size_t) ;
 int FUNC_4 (int ,int ,int ,int,char*) ;
 int FUNC_5 (int ,int ,struct msghdr*,size_t,int ) ;
 int FUNC_6 (int ,int ,size_t) ;

void FUNC_7(struct afs_call *VAR_4, const void *VAR_5, size_t VAR_6)
{
 struct afs_net *VAR_7 = VAR_4->net;
 struct msghdr VAR_8;
 struct kvec VAR_9[1];
 int VAR_10;

 FUNC_1("");

 FUNC_6(VAR_7->socket, VAR_4->rxcall, VAR_6);

 VAR_9[0].iov_base = (void *) VAR_5;
 VAR_9[0].iov_len = VAR_6;
 VAR_8.msg_name = ((void*)0);
 VAR_8.msg_namelen = 0;
 FUNC_3(&VAR_8.msg_iter, VAR_2, VAR_9, 1, VAR_6);
 VAR_8.msg_control = ((void*)0);
 VAR_8.msg_controllen = 0;
 VAR_8.msg_flags = 0;

 VAR_10 = FUNC_5(VAR_7->socket, VAR_4->rxcall, &VAR_8, VAR_6,
       VAR_3);
 if (VAR_10 >= 0) {

  FUNC_2(" [replied]");
  return;
 }

 if (VAR_10 == -VAR_0) {
  FUNC_0("oom");
  FUNC_4(VAR_7->socket, VAR_4->rxcall,
     VAR_1, -VAR_0, "KOO");
 }
 FUNC_2(" [error]");
}
