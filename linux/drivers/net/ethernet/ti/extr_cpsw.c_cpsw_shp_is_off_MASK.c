
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_slave {int slave_num; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {struct cpsw_slave* slaves; TYPE_1__* regs; } ;
struct TYPE_2__ {int ptype; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct cpsw_common*,struct cpsw_priv*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct cpsw_priv *VAR_1)
{
 struct cpsw_common *VAR_2 = VAR_1->cpsw;
 struct cpsw_slave *VAR_3;
 u32 VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_1(&VAR_2->regs->ptype);

 VAR_3 = &VAR_2->slaves[FUNC_0(VAR_2, VAR_1)];
 VAR_4 = VAR_0 + 3 * VAR_3->slave_num;
 VAR_5 = 7 << VAR_4;
 VAR_6 = VAR_6 & VAR_5;

 return !VAR_6;
}
