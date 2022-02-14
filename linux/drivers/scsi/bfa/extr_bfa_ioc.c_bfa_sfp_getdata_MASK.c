
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfp_mem_s {int dummy; } ;
struct bfi_sfp_req_s {int memtype; int alen; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_sfp_s {int lock; int memtype; int dbuf_pa; int state; TYPE_1__ mbcmd; } ;
typedef enum bfi_sfp_mem_e { ____Placeholder_bfi_sfp_mem_e } bfi_sfp_mem_e ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct bfa_sfp_s*) ;
 int FUNC_3 (struct bfa_sfp_s*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_sfp_s *VAR_0, enum bfi_sfp_mem_e VAR_1)
{
 struct bfi_sfp_req_s *VAR_2 = (struct bfi_sfp_req_s *)VAR_0->mbcmd.msg;

 FUNC_0(VAR_0->lock != 0);
 FUNC_3(VAR_0, VAR_0->state);

 VAR_0->lock = 1;
 VAR_0->memtype = VAR_1;
 VAR_2->memtype = VAR_1;


 FUNC_1(&VAR_2->alen, sizeof(struct sfp_mem_s), VAR_0->dbuf_pa);

 FUNC_2(VAR_0);
}
