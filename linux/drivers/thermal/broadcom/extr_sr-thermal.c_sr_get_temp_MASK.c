
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sr_tmon {int tmon_id; struct sr_thermal* priv; } ;
struct sr_thermal {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int *VAR_1)
{
 struct sr_tmon *VAR_2 = VAR_0;
 struct sr_thermal *VAR_3 = VAR_2->priv;

 *VAR_1 = FUNC_1(VAR_3->regs + FUNC_0(VAR_2->tmon_id));

 return 0;
}
