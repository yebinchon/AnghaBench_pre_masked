
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct socket {int file; struct sock_reuseport* sk; } ;
struct sock_reuseport {int sk_callback_lock; int sk_user_data; int sk_reuseport_cb; } ;
struct sock {int sk_callback_lock; int sk_user_data; int sk_reuseport_cb; } ;
struct reuseport_array {int * ptrs; } ;
struct bpf_map {size_t max_entries; int value_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct sock_reuseport* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sock_reuseport*) ;
 struct sock_reuseport* FUNC_5 (int ,int ) ;
 struct reuseport_array* FUNC_6 (struct bpf_map*) ;
 int FUNC_7 (struct reuseport_array*,struct sock_reuseport*,struct sock_reuseport*,struct sock_reuseport*,int) ;
 int FUNC_8 (struct sock_reuseport*) ;
 int VAR_4 ;
 struct socket* FUNC_9 (int,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct bpf_map *VAR_5, void *VAR_6,
           void *VAR_7, u64 VAR_8)
{
 struct reuseport_array *VAR_9 = FUNC_6(VAR_5);
 struct sock *VAR_10 = ((void*)0), *VAR_11, *VAR_12;
 struct sock_reuseport *VAR_13;
 u32 VAR_14 = *(u32 *)VAR_6;
 struct socket *VAR_15;
 int VAR_16, VAR_17;

 if (VAR_8 > VAR_0)
  return -VAR_2;

 if (VAR_14 >= VAR_5->max_entries)
  return -VAR_1;

 if (VAR_5->value_size == sizeof(u64)) {
  u64 VAR_18 = *(u64 *)VAR_7;

  if (VAR_18 > VAR_3)
   return -VAR_2;
  VAR_17 = VAR_18;
 } else {
  VAR_17 = *(int *)VAR_7;
 }

 VAR_15 = FUNC_9(VAR_17, &VAR_16);
 if (!VAR_15)
  return VAR_16;

 VAR_12 = VAR_15->sk;
 if (!VAR_12) {
  VAR_16 = -VAR_2;
  goto put_file;
 }


 VAR_16 = FUNC_7(VAR_9, VAR_12,
        FUNC_3(VAR_9->ptrs[VAR_14]),
        FUNC_3(VAR_12->sk_reuseport_cb),
        VAR_8);
 if (VAR_16)
  goto put_file;

 FUNC_10(&VAR_4);





 FUNC_12(&VAR_12->sk_callback_lock);

 VAR_11 = FUNC_5(VAR_9->ptrs[VAR_14],
     FUNC_2(&VAR_4));
 VAR_13 = FUNC_5(VAR_12->sk_reuseport_cb,
       FUNC_2(&VAR_4));
 VAR_16 = FUNC_7(VAR_9, VAR_12, VAR_11, VAR_13, VAR_8);
 if (VAR_16)
  goto put_file_unlock;


 VAR_16 = FUNC_8(VAR_13);
 if (VAR_16 < 0)
  goto put_file_unlock;

 FUNC_0(VAR_12->sk_user_data, &VAR_9->ptrs[VAR_14]);
 FUNC_4(VAR_9->ptrs[VAR_14], VAR_12);
 VAR_10 = VAR_11;
 VAR_16 = 0;

put_file_unlock:
 FUNC_13(&VAR_12->sk_callback_lock);

 if (VAR_10) {
  FUNC_12(&VAR_10->sk_callback_lock);
  FUNC_0(VAR_10->sk_user_data, ((void*)0));
  FUNC_13(&VAR_10->sk_callback_lock);
 }

 FUNC_11(&VAR_4);
put_file:
 FUNC_1(VAR_15->file);
 return VAR_16;
}
