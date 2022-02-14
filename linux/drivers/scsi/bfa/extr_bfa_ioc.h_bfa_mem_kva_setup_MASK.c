
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qe; } ;
struct bfa_meminfo_s {TYPE_1__ kva_info; } ;
struct bfa_mem_kva_s {size_t mem_len; int qe; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct bfa_meminfo_s *VAR_0,
         struct bfa_mem_kva_s *VAR_1,
         size_t VAR_2)
{
 VAR_1->mem_len = VAR_2;
 if (VAR_2)
  FUNC_0(&VAR_1->qe, &VAR_0->kva_info.qe);
}
