
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct rtl8366_mib_counter {int name; } ;
struct realtek_smi {int num_ports; int num_mib_counters; int dev; TYPE_1__* ops; struct rtl8366_mib_counter* mib_counters; } ;
struct dsa_switch {struct realtek_smi* priv; } ;
struct TYPE_2__ {int (* get_mib_counter ) (struct realtek_smi*,int,struct rtl8366_mib_counter*,int *) ;} ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct realtek_smi*,int,struct rtl8366_mib_counter*,int *) ;

void FUNC_2(struct dsa_switch *VAR_0, int VAR_1, uint64_t *VAR_2)
{
 struct realtek_smi *VAR_3 = VAR_0->priv;
 int VAR_4;
 int VAR_5;

 if (VAR_1 >= VAR_3->num_ports)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_mib_counters; VAR_4++) {
  struct rtl8366_mib_counter *VAR_6;
  u64 VAR_7 = 0;

  VAR_6 = &VAR_3->mib_counters[VAR_4];
  VAR_5 = VAR_3->ops->get_mib_counter(VAR_3, VAR_1, VAR_6, &VAR_7);
  if (VAR_5) {
   FUNC_0(VAR_3->dev, "error reading MIB counter %s\n",
    VAR_6->name);
  }
  VAR_2[VAR_4] = VAR_7;
 }
}
