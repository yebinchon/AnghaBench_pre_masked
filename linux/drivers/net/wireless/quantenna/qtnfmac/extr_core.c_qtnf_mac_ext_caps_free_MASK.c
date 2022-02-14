
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ extended_capabilities_len; int * extended_capabilities_mask; int * extended_capabilities; } ;
struct qtnf_wmac {TYPE_1__ macinfo; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qtnf_wmac *VAR_0)
{
 if (VAR_0->macinfo.extended_capabilities_len) {
  FUNC_0(VAR_0->macinfo.extended_capabilities);
  VAR_0->macinfo.extended_capabilities = ((void*)0);

  FUNC_0(VAR_0->macinfo.extended_capabilities_mask);
  VAR_0->macinfo.extended_capabilities_mask = ((void*)0);

  VAR_0->macinfo.extended_capabilities_len = 0;
 }
}
