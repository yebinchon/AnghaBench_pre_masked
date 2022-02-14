
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {void* n_vendor_events; void* vendor_events; void* n_vendor_commands; void* vendor_commands; } ;


 void* FUNC_0 (void*) ;
 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_1(struct wiphy *VAR_2)
{
 VAR_2->vendor_commands = VAR_0;
 VAR_2->n_vendor_commands = FUNC_0(VAR_0);
 VAR_2->vendor_events = VAR_1;
 VAR_2->n_vendor_events = FUNC_0(VAR_1);
}
