
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct net_device {int base_addr; int name; } ;
struct hp100_private {TYPE_1__* txring; TYPE_1__* txrtail; TYPE_1__* txrhead; scalar_t__ txrcommit; TYPE_1__* rxring; TYPE_1__* rxrtail; TYPE_1__* rxrhead; scalar_t__ rxrcommit; int * page_vaddr_algn; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ hp100_ring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,TYPE_1__*,int *) ;
 int FUNC_1 (struct net_device*,TYPE_1__*,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 struct hp100_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 struct hp100_private *VAR_5 = FUNC_4(VAR_4);
 hp100_ring_t *VAR_6;
 u_int *VAR_7;
 int VAR_8;
 if (!VAR_5->page_vaddr_algn)
  FUNC_5("hp100: %s: Warning: lp->page_vaddr_algn not initialised!\n", VAR_4->name);
 else {




  FUNC_3(VAR_5->page_vaddr_algn, 0, VAR_0);
  VAR_7 = VAR_5->page_vaddr_algn;

  VAR_5->rxrcommit = 0;
  VAR_6 = VAR_5->rxrhead = VAR_5->rxrtail = &(VAR_5->rxring[0]);


  for (VAR_8 = VAR_1 - 1; VAR_8 >= 0; VAR_8--) {
   VAR_5->rxring[VAR_8].next = VAR_6;
   VAR_6 = &(VAR_5->rxring[VAR_8]);
   VAR_7 += FUNC_0(VAR_4, VAR_6, VAR_7);
  }


  VAR_5->txrcommit = 0;
  VAR_6 = VAR_5->txrhead = VAR_5->txrtail = &(VAR_5->txring[0]);
  for (VAR_8 = VAR_2 - 1; VAR_8 >= 0; VAR_8--) {
   VAR_5->txring[VAR_8].next = VAR_6;
   VAR_6 = &(VAR_5->txring[VAR_8]);
   VAR_7 += FUNC_1(VAR_4, VAR_6, VAR_7);
  }
 }
}
