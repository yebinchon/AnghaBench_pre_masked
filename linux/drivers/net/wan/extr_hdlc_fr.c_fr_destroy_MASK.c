
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvc_device {scalar_t__ ether; scalar_t__ main; struct pvc_device* next; } ;
struct net_device {int dummy; } ;
typedef int hdlc_device ;
struct TYPE_2__ {int dce_changed; scalar_t__ dce_pvc_count; struct pvc_device* first_pvc; } ;


 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pvc_device*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_0(VAR_0);
 struct pvc_device *VAR_2 = FUNC_2(VAR_1)->first_pvc;
 FUNC_2(VAR_1)->first_pvc = ((void*)0);
 FUNC_2(VAR_1)->dce_pvc_count = 0;
 FUNC_2(VAR_1)->dce_changed = 1;

 while (VAR_2) {
  struct pvc_device *VAR_3 = VAR_2->next;

  if (VAR_2->main)
   FUNC_3(VAR_2->main);

  if (VAR_2->ether)
   FUNC_3(VAR_2->ether);

  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
}
