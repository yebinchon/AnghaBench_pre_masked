
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct bfa_rport_s {int dummy; } ;
struct bfa_meminfo_s {int dummy; } ;
struct bfa_mem_kva_s {int dummy; } ;
struct TYPE_2__ {int num_rports; } ;
struct bfa_iocfc_cfg_s {TYPE_1__ fwcfg; } ;


 struct bfa_mem_kva_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 int FUNC_1 (struct bfa_meminfo_s*,struct bfa_mem_kva_s*,int) ;

void
FUNC_2(struct bfa_iocfc_cfg_s *VAR_1, struct bfa_meminfo_s *VAR_2,
  struct bfa_s *VAR_3)
{
 struct bfa_mem_kva_s *VAR_4 = FUNC_0(VAR_3);

 if (VAR_1->fwcfg.num_rports < VAR_0)
  VAR_1->fwcfg.num_rports = VAR_0;


 FUNC_1(VAR_2, VAR_4,
  VAR_1->fwcfg.num_rports * sizeof(struct bfa_rport_s));
}
