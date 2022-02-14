
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct net_device {int base_addr; int name; } ;
struct hp100_private {scalar_t__ rxrcommit; TYPE_1__* rxrtail; } ;
struct TYPE_3__ {struct TYPE_3__* next; scalar_t__ pdl_paddr; scalar_t__* pdl; } ;
typedef TYPE_1__ hp100_ring_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 struct hp100_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 int VAR_5 = VAR_4->base_addr;

 struct hp100_private *VAR_6 = FUNC_4(VAR_4);
 hp100_ring_t *VAR_7;






 FUNC_3(VAR_1);

 while (VAR_6->rxrcommit < VAR_0) {



  VAR_7 = VAR_6->rxrtail;
  if (0 == FUNC_0(VAR_7, VAR_4)) {
   return;
  }
  FUNC_1((u32) VAR_7->pdl_paddr, VAR_2);

  VAR_6->rxrcommit += 1;
  VAR_6->rxrtail = VAR_7->next;
 }
}
