
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int num_ports; int num_mib_counters; } ;
struct dsa_switch {struct realtek_smi* priv; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct dsa_switch *VAR_2, int VAR_3, int VAR_4)
{
 struct realtek_smi *VAR_5 = VAR_2->priv;


 if (VAR_4 != VAR_1)
  return 0;
 if (VAR_3 >= VAR_5->num_ports)
  return -VAR_0;

 return VAR_5->num_mib_counters;
}
