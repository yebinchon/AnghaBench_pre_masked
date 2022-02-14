
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sfp_mem_s {int dummy; } ;
struct bfa_sfp_s {int * dbuf_kva; int dbuf_pa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int) ;

void
FUNC_2(struct bfa_sfp_s *VAR_1, u8 *VAR_2, u64 VAR_3)
{
 VAR_1->dbuf_kva = VAR_2;
 VAR_1->dbuf_pa = VAR_3;
 FUNC_1(VAR_1->dbuf_kva, 0, sizeof(struct sfp_mem_s));

 VAR_2 += FUNC_0(sizeof(struct sfp_mem_s), VAR_0);
 VAR_3 += FUNC_0(sizeof(struct sfp_mem_s), VAR_0);
}
