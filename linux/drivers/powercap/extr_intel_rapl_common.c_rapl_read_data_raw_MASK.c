
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct reg_action {int value; int reg; int mask; } ;
struct rapl_primitive_info {int flag; size_t id; int shift; int unit; int mask; int name; } ;
struct TYPE_4__ {int* primitives; } ;
struct rapl_domain {size_t id; TYPE_3__* rp; TYPE_1__ rdd; int * regs; } ;
typedef enum rapl_primitives { ____Placeholder_rapl_primitives } rapl_primitives ;
struct TYPE_6__ {int lead_cpu; TYPE_2__* priv; } ;
struct TYPE_5__ {int* limits; scalar_t__ (* read_raw ) (int,struct reg_action*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct rapl_domain*,int ,int,int ) ;
 struct rapl_primitive_info* VAR_6 ;
 scalar_t__ FUNC_2 (int,struct reg_action*) ;

__attribute__((used)) static int FUNC_3(struct rapl_domain *VAR_7,
         enum rapl_primitives VAR_8, bool VAR_9, u64 *VAR_10)
{
 u64 VAR_11;
 struct rapl_primitive_info *VAR_12 = &VAR_6[VAR_8];
 struct reg_action VAR_13;
 int VAR_14;

 if (!VAR_12->name || VAR_12->flag & VAR_5)
  return -VAR_0;

 VAR_13.reg = VAR_7->regs[VAR_12->id];
 if (!VAR_13.reg)
  return -VAR_0;

 VAR_14 = VAR_7->rp->lead_cpu;


 if (VAR_8 == VAR_2 && VAR_7->rp->priv->limits[VAR_7->id] == 2) {
  VAR_12->mask = VAR_3;
  VAR_12->shift = 63;
 }

 if (VAR_12->flag & VAR_4) {
  *VAR_10 = VAR_7->rdd.primitives[VAR_8];
  return 0;
 }

 VAR_13.mask = VAR_12->mask;

 if (VAR_7->rp->priv->read_raw(VAR_14, &VAR_13)) {
  FUNC_0("failed to read reg 0x%llx on cpu %d\n", VAR_13.reg, VAR_14);
  return -VAR_1;
 }

 VAR_11 = VAR_13.value >> VAR_12->shift;

 if (VAR_9)
  *VAR_10 = FUNC_1(VAR_7, VAR_12->unit, VAR_11, 0);
 else
  *VAR_10 = VAR_11;

 return 0;
}
