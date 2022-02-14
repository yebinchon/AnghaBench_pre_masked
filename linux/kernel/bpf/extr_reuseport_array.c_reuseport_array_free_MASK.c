
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sock {int sk_callback_lock; int * sk_user_data; } ;
struct reuseport_array {int * ptrs; } ;
struct bpf_map {size_t max_entries; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct reuseport_array*) ;
 struct sock* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct reuseport_array* FUNC_5 (struct bpf_map*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct bpf_map *VAR_0)
{
 struct reuseport_array *VAR_1 = FUNC_5(VAR_0);
 struct sock *VAR_2;
 u32 VAR_3;

 FUNC_6();
 FUNC_3();
 for (VAR_3 = 0; VAR_3 < VAR_0->max_entries; VAR_3++) {
  VAR_2 = FUNC_2(VAR_1->ptrs[VAR_3]);
  if (VAR_2) {
   FUNC_7(&VAR_2->sk_callback_lock);





   VAR_2->sk_user_data = ((void*)0);
   FUNC_8(&VAR_2->sk_callback_lock);
   FUNC_0(VAR_1->ptrs[VAR_3], ((void*)0));
  }
 }
 FUNC_4();





 FUNC_1(VAR_1);
}
