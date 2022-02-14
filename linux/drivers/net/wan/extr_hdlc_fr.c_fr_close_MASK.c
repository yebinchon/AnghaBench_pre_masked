
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvc_device {struct pvc_device* next; scalar_t__ ether; scalar_t__ main; } ;
struct net_device {int dummy; } ;
typedef int hdlc_device ;
struct TYPE_2__ {struct pvc_device* first_pvc; } ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_1(VAR_0);
 struct pvc_device *VAR_2 = FUNC_2(VAR_1)->first_pvc;

 while (VAR_2) {
  if (VAR_2->main)
   FUNC_0(VAR_2->main);
  if (VAR_2->ether)
   FUNC_0(VAR_2->ether);
  VAR_2 = VAR_2->next;
 }
}
