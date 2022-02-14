
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_adapter {scalar_t__ msix_entries; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;

void FUNC_5(struct e1000_adapter *VAR_1)
{

 FUNC_1(VAR_1);

 FUNC_0(VAR_0, &VAR_1->state);

 if (VAR_1->msix_entries)
  FUNC_2(VAR_1);
 FUNC_3(VAR_1);



 FUNC_4(VAR_1);
}
