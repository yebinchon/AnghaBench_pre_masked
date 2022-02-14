
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bfa_tskim_s {int dummy; } ;
struct bfa_ioim_sp_s {int dummy; } ;
struct bfa_ioim_s {int dummy; } ;
struct TYPE_2__ {int num_ioim_reqs; int num_tskim_reqs; } ;
struct bfa_iocfc_cfg_s {TYPE_1__ fwcfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_iocfc_cfg_s*,int*) ;

__attribute__((used)) static void
FUNC_1(struct bfa_iocfc_cfg_s *VAR_1, u32 *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);




 *VAR_2 += VAR_1->fwcfg.num_ioim_reqs *
   (sizeof(struct bfa_ioim_s) + sizeof(struct bfa_ioim_sp_s));




 if (VAR_1->fwcfg.num_tskim_reqs < VAR_0)
  VAR_1->fwcfg.num_tskim_reqs = VAR_0;
 *VAR_2 += VAR_1->fwcfg.num_tskim_reqs * sizeof(struct bfa_tskim_s);
}
