
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int hwmon_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct nfp_pf *VAR_1)
{
 if (!FUNC_0(VAR_0) || !VAR_1->hwmon_dev)
  return;

 FUNC_1(VAR_1->hwmon_dev);
}
