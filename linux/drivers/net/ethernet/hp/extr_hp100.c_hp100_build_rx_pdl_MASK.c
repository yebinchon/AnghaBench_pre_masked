
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct net_device {int base_addr; int name; } ;
struct TYPE_6__ {int* pdl; TYPE_2__* skb; } ;
typedef TYPE_1__ hp100_ring_t ;
struct TYPE_7__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_2__* FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_8(hp100_ring_t * VAR_2,
         struct net_device *VAR_3)
{
 VAR_2->skb = FUNC_1(VAR_3, FUNC_5(VAR_0 + 2, 4));

 if (((void*)0) != VAR_2->skb) {





  FUNC_7(VAR_2->skb, 2);

  VAR_2->skb->data = FUNC_6(VAR_2->skb, VAR_0);
  VAR_2->pdl[0] = 0x00020000;
  VAR_2->pdl[3] = FUNC_3(FUNC_2(VAR_3),
            VAR_2->skb->data);
  VAR_2->pdl[4] = VAR_0;





  return 1;
 }
 VAR_2->pdl[0] = 0x00010000;

 return 0;
}
