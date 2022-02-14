
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unspec ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_family; int sk_cgrp_data; } ;
struct TYPE_2__ {int * effective; } ;
struct cgroup {TYPE_1__ bpf; } ;
struct bpf_sock_addr_kern {void* t_ctx; struct sockaddr* uaddr; struct sock* sk; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct bpf_sock_addr_kern*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;
 struct cgroup* FUNC_2 (int *) ;

int FUNC_3(struct sock *VAR_4,
          struct sockaddr *VAR_5,
          enum bpf_attach_type VAR_6,
          void *VAR_7)
{
 struct bpf_sock_addr_kern VAR_8 = {
  .sk = VAR_4,
  .uaddr = VAR_5,
  .t_ctx = VAR_7,
 };
 struct sockaddr_storage VAR_9;
 struct cgroup *VAR_10;
 int VAR_11;




 if (VAR_4->sk_family != VAR_0 && VAR_4->sk_family != VAR_1)
  return 0;

 if (!VAR_8.uaddr) {
  FUNC_1(&VAR_9, 0, sizeof(VAR_9));
  VAR_8.uaddr = (struct sockaddr *)&VAR_9;
 }

 VAR_10 = FUNC_2(&VAR_4->sk_cgrp_data);
 VAR_11 = FUNC_0(VAR_10->bpf.effective[VAR_6], &VAR_8, VAR_2);

 return VAR_11 == 1 ? 0 : -VAR_3;
}
