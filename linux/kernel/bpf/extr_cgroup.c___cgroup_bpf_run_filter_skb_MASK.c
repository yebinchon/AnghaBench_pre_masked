
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; int sk_cgrp_data; } ;
struct sk_buff {unsigned int data; struct sock* sk; } ;
struct TYPE_2__ {int * effective; } ;
struct cgroup {TYPE_1__ bpf; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*,int ) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct sk_buff*,void**) ;
 int FUNC_5 (struct sk_buff*,void*) ;
 int FUNC_6 (struct sock*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 struct cgroup* FUNC_8 (int *) ;

int FUNC_9(struct sock *VAR_5,
    struct sk_buff *VAR_6,
    enum bpf_attach_type VAR_7)
{
 unsigned int VAR_8 = VAR_6->data - FUNC_7(VAR_6);
 struct sock *VAR_9;
 void *VAR_10;
 struct cgroup *VAR_11;
 int VAR_12;

 if (!VAR_5 || !FUNC_6(VAR_5))
  return 0;

 if (VAR_5->sk_family != VAR_0 && VAR_5->sk_family != VAR_1)
  return 0;

 VAR_11 = FUNC_8(&VAR_5->sk_cgrp_data);
 VAR_9 = VAR_6->sk;
 VAR_6->sk = VAR_5;
 FUNC_3(VAR_6, VAR_8);


 FUNC_4(VAR_6, &VAR_10);

 if (VAR_7 == VAR_2) {
  VAR_12 = FUNC_0(
   VAR_11->bpf.effective[VAR_7], VAR_6, VAR_4);
 } else {
  VAR_12 = FUNC_1(VAR_11->bpf.effective[VAR_7], VAR_6,
       VAR_4);
  VAR_12 = (VAR_12 == 1 ? 0 : -VAR_3);
 }
 FUNC_5(VAR_6, VAR_10);
 FUNC_2(VAR_6, VAR_8);
 VAR_6->sk = VAR_9;

 return VAR_12;
}
