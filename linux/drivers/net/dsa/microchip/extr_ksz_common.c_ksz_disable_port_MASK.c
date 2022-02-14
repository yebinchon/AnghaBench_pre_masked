
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {int on_ports; int live_ports; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int FUNC_0 (struct dsa_switch*,int) ;

void FUNC_1(struct dsa_switch *VAR_0, int VAR_1)
{
 struct ksz_device *VAR_2 = VAR_0->priv;

 if (!FUNC_0(VAR_0, VAR_1))
  return;

 VAR_2->on_ports &= ~(1 << VAR_1);
 VAR_2->live_ports &= ~(1 << VAR_1);




}
