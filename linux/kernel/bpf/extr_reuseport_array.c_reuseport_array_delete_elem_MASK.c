
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sock {int sk_callback_lock; int sk_user_data; } ;
struct reuseport_array {int * ptrs; } ;
struct bpf_map {size_t max_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct sock* FUNC_4 (int ,int ) ;
 struct reuseport_array* FUNC_5 (struct bpf_map*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct bpf_map *VAR_3, void *VAR_4)
{
 struct reuseport_array *VAR_5 = FUNC_5(VAR_3);
 u32 VAR_6 = *(u32 *)VAR_4;
 struct sock *VAR_7;
 int VAR_8;

 if (VAR_6 >= VAR_3->max_entries)
  return -VAR_0;

 if (!FUNC_3(VAR_5->ptrs[VAR_6]))
  return -VAR_1;

 FUNC_6(&VAR_2);

 VAR_7 = FUNC_4(VAR_5->ptrs[VAR_6],
           FUNC_2(&VAR_2));
 if (VAR_7) {
  FUNC_8(&VAR_7->sk_callback_lock);
  FUNC_1(VAR_7->sk_user_data, ((void*)0));
  FUNC_0(VAR_5->ptrs[VAR_6], ((void*)0));
  FUNC_9(&VAR_7->sk_callback_lock);
  VAR_8 = 0;
 } else {
  VAR_8 = -VAR_1;
 }

 FUNC_7(&VAR_2);

 return VAR_8;
}
