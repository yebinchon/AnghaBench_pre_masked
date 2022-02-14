
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;
struct rtl8366_mib_counter {int name; } ;
struct realtek_smi {int num_ports; int num_mib_counters; struct rtl8366_mib_counter* mib_counters; } ;
struct dsa_switch {struct realtek_smi* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct dsa_switch *VAR_1, int VAR_2, u32 VAR_3,
    uint8_t *VAR_4)
{
 struct realtek_smi *VAR_5 = VAR_1->priv;
 struct rtl8366_mib_counter *VAR_6;
 int VAR_7;

 if (VAR_2 >= VAR_5->num_ports)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_mib_counters; VAR_7++) {
  VAR_6 = &VAR_5->mib_counters[VAR_7];
  FUNC_0(VAR_4 + VAR_7 * VAR_0,
   VAR_6->name, VAR_0);
 }
}
