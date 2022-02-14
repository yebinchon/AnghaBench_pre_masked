
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_spin_lock {int dummy; } ;
typedef int atomic_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static inline void FUNC_3(struct bpf_spin_lock *VAR_1)
{
 atomic_t *VAR_2 = (void *)VAR_1;

 FUNC_0(sizeof(*VAR_2) != sizeof(*VAR_1));
 do {
  FUNC_1(VAR_2, !VAR_0);
 } while (FUNC_2(VAR_2, 1));
}
