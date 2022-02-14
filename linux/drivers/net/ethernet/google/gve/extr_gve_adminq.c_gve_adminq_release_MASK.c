
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_priv {TYPE_1__* reg_bar0; } ;
struct TYPE_2__ {int adminq_pfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct gve_priv *VAR_2)
{
 int VAR_3 = 0;


 FUNC_5(0x0, &VAR_2->reg_bar0->adminq_pfn);
 while (FUNC_4(&VAR_2->reg_bar0->adminq_pfn)) {




  if (VAR_3 == VAR_1)
   FUNC_0(1, "Unrecoverable platform error!");
  VAR_3++;
  FUNC_6(VAR_0);
 }
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
