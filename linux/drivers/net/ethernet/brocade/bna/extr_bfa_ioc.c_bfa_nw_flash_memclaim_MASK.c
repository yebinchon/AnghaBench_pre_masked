
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct bfa_flash {int * dbuf_kva; int dbuf_pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void
FUNC_2(struct bfa_flash *VAR_2, u8 *VAR_3, u64 VAR_4)
{
 VAR_2->dbuf_kva = VAR_3;
 VAR_2->dbuf_pa = VAR_4;
 FUNC_0(VAR_2->dbuf_kva, 0, VAR_1);
 VAR_3 += FUNC_1(VAR_1, VAR_0);
 VAR_4 += FUNC_1(VAR_1, VAR_0);
}
