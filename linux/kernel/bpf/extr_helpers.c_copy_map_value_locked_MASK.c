
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_spin_lock {int dummy; } ;
struct bpf_map {int spin_lock_off; } ;


 int FUNC_0 (struct bpf_spin_lock*) ;
 int FUNC_1 (struct bpf_spin_lock*) ;
 int FUNC_2 (struct bpf_map*,void*,void*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct bpf_map *VAR_0, void *VAR_1, void *VAR_2,
      bool VAR_3)
{
 struct bpf_spin_lock *VAR_4;

 if (VAR_3)
  VAR_4 = VAR_2 + VAR_0->spin_lock_off;
 else
  VAR_4 = VAR_1 + VAR_0->spin_lock_off;
 FUNC_3();
 FUNC_0(VAR_4);
 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_4);
 FUNC_4();
}
