
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int * dbuf_kva; int dbuf_pa; } ;
struct bfa_diag_s {TYPE_1__ fwping; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

void
FUNC_1(struct bfa_diag_s *VAR_1, u8 *VAR_2, u64 VAR_3)
{
 VAR_1->fwping.dbuf_kva = VAR_2;
 VAR_1->fwping.dbuf_pa = VAR_3;
 FUNC_0(VAR_1->fwping.dbuf_kva, 0, VAR_0);
}
