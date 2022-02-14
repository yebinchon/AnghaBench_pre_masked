
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_slave {int slave_num; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {TYPE_1__* regs; struct cpsw_slave* slaves; } ;
struct TYPE_2__ {int ptype; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct cpsw_common*,struct cpsw_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct cpsw_priv *VAR_1, int VAR_2, int VAR_3)
{
 struct cpsw_common *VAR_4 = VAR_1->cpsw;
 struct cpsw_slave *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_1(&VAR_4->regs->ptype);

 VAR_5 = &VAR_4->slaves[FUNC_0(VAR_4, VAR_1)];
 VAR_6 = VAR_0 + 3 * VAR_5->slave_num;
 VAR_7 = (1 << --VAR_2) << VAR_6;
 VAR_8 = VAR_3 ? VAR_8 | VAR_7 : VAR_8 & ~VAR_7;

 FUNC_2(VAR_8, &VAR_4->regs->ptype);
}
