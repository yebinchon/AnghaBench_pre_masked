
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int name; } ;
struct TYPE_3__ {int * skb; int pdl_paddr; int * pdl; } ;
typedef TYPE_1__ hp100_ring_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct net_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
       register hp100_ring_t * VAR_2,
       register u32 * VAR_3)
{
 if (0 != (((unsigned long) VAR_3) & 0xf))
  FUNC_0("hp100: %s: Init txpdl: Unaligned pdlptr 0x%lx.\n", VAR_1->name, (unsigned long) VAR_3);

 VAR_2->pdl = VAR_3;
 VAR_2->pdl_paddr = FUNC_2(VAR_1, VAR_3);
 VAR_2->skb = ((void*)0);

 return FUNC_1(VAR_0 * 2 + 2, 4);
}
