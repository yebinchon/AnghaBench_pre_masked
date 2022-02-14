
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct tlb_client_info {size_t next; } ;
struct slave {int dummy; } ;
struct bonding {int dummy; } ;
struct TYPE_4__ {struct tlb_client_info* tx_hashtbl; } ;
struct TYPE_3__ {size_t head; } ;


 TYPE_2__ FUNC_0 (struct bonding*) ;
 TYPE_1__ FUNC_1 (struct slave*) ;
 size_t VAR_0 ;
 int FUNC_2 (struct slave*) ;
 int FUNC_3 (struct tlb_client_info*,int) ;

__attribute__((used)) static void FUNC_4(struct bonding *VAR_1, struct slave *VAR_2,
    int VAR_3)
{
 struct tlb_client_info *VAR_4;
 u32 VAR_5;


 VAR_4 = FUNC_0(VAR_1).tx_hashtbl;


 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_2).head;
  while (VAR_5 != VAR_0) {
   u32 VAR_6 = VAR_4[VAR_5].next;
   FUNC_3(&VAR_4[VAR_5], VAR_3);
   VAR_5 = VAR_6;
  }
 }

 FUNC_2(VAR_2);
}
