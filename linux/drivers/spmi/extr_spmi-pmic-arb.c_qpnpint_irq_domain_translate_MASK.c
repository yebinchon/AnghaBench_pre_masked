
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct spmi_pmic_arb {void* max_apid; void* min_apid; TYPE_2__* spmic; TYPE_1__* ver_ops; } ;
struct irq_fwspec {int* param; int param_count; } ;
struct irq_domain {struct spmi_pmic_arb* host_data; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct TYPE_6__ {TYPE_3__ dev; } ;
struct TYPE_5__ {int (* ppid_to_apid ) (struct spmi_pmic_arb*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,unsigned long,...) ;
 int FUNC_1 (TYPE_3__*,char*,int,int,int,int) ;
 scalar_t__ FUNC_2 (struct irq_domain*) ;
 unsigned long FUNC_3 (int,int,int,void*) ;
 int FUNC_4 (struct spmi_pmic_arb*,void*) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_2,
     struct irq_fwspec *VAR_3,
     unsigned long *VAR_4,
     unsigned int *VAR_5)
{
 struct spmi_pmic_arb *VAR_6 = VAR_2->host_data;
 u32 *VAR_7 = VAR_3->param;
 u16 VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(&VAR_6->spmic->dev, "intspec[0] 0x%1x intspec[1] 0x%02x intspec[2] 0x%02x\n",
  VAR_7[0], VAR_7[1], VAR_7[2]);

 if (FUNC_2(VAR_2) != VAR_6->spmic->dev.of_node)
  return -VAR_0;
 if (VAR_3->param_count != 4)
  return -VAR_0;
 if (VAR_7[0] > 0xF || VAR_7[1] > 0xFF || VAR_7[2] > 0x7)
  return -VAR_0;

 VAR_9 = VAR_7[0] << 8 | VAR_7[1];
 VAR_10 = VAR_6->ver_ops->ppid_to_apid(VAR_6, VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_6->spmic->dev, "failed to xlate sid = %#x, periph = %#x, irq = %u rc = %d\n",
  VAR_7[0], VAR_7[1], VAR_7[2], VAR_10);
  return VAR_10;
 }

 VAR_8 = VAR_10;

 if (VAR_8 > VAR_6->max_apid)
  VAR_6->max_apid = VAR_8;
 if (VAR_8 < VAR_6->min_apid)
  VAR_6->min_apid = VAR_8;

 *VAR_4 = FUNC_3(VAR_7[0], VAR_7[1], VAR_7[2], VAR_8);
 *VAR_5 = VAR_7[3] & VAR_1;

 FUNC_0(&VAR_6->spmic->dev, "out_hwirq = %lu\n", *VAR_4);

 return 0;
}
