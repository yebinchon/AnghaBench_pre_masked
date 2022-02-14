
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct reg_action {int value; int mask; int reg; } ;
struct rapl_primitive_info {size_t id; int mask; int shift; int unit; } ;
struct rapl_domain {TYPE_2__* rp; int * regs; } ;
typedef int ra ;
typedef enum rapl_primitives { ____Placeholder_rapl_primitives } rapl_primitives ;
struct TYPE_4__ {int lead_cpu; TYPE_1__* priv; } ;
struct TYPE_3__ {int (* write_raw ) (int,struct reg_action*) ;} ;


 int FUNC_0 (struct reg_action*,int ,int) ;
 int FUNC_1 (struct rapl_domain*,int ,unsigned long long,int) ;
 struct rapl_primitive_info* VAR_0 ;
 int FUNC_2 (int,struct reg_action*) ;

__attribute__((used)) static int FUNC_3(struct rapl_domain *VAR_1,
          enum rapl_primitives VAR_2,
          unsigned long long VAR_3)
{
 struct rapl_primitive_info *VAR_4 = &VAR_0[VAR_2];
 int VAR_5;
 u64 VAR_6;
 struct reg_action VAR_7;
 int VAR_8;

 VAR_5 = VAR_1->rp->lead_cpu;
 VAR_6 = FUNC_1(VAR_1, VAR_4->unit, VAR_3, 1);
 VAR_6 <<= VAR_4->shift;
 VAR_6 &= VAR_4->mask;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.reg = VAR_1->regs[VAR_4->id];
 VAR_7.mask = VAR_4->mask;
 VAR_7.value = VAR_6;

 VAR_8 = VAR_1->rp->priv->write_raw(VAR_5, &VAR_7);

 return VAR_8;
}
