
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_err_reg_hist {size_t pos; int * tstamp; int * reg; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct ufs_err_reg_hist *VAR_1,
       u32 VAR_2)
{
 VAR_1->reg[VAR_1->pos] = VAR_2;
 VAR_1->tstamp[VAR_1->pos] = FUNC_0();
 VAR_1->pos = (VAR_1->pos + 1) % VAR_0;
}
