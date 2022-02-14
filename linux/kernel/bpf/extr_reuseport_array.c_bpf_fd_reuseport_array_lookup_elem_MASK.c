
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sock {int dummy; } ;
struct bpf_map {int value_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sock* FUNC_2 (struct bpf_map*,void*) ;
 int FUNC_3 (struct sock*) ;

int FUNC_4(struct bpf_map *VAR_2, void *VAR_3,
           void *VAR_4)
{
 struct sock *VAR_5;
 int VAR_6;

 if (VAR_2->value_size != sizeof(u64))
  return -VAR_1;

 FUNC_0();
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5) {
  *(u64 *)VAR_4 = FUNC_3(VAR_5);
  VAR_6 = 0;
 } else {
  VAR_6 = -VAR_0;
 }
 FUNC_1();

 return VAR_6;
}
