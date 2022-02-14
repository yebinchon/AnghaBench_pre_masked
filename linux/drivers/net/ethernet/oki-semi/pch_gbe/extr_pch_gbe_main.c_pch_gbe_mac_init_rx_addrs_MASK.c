
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_6__ {int addr; } ;
struct pch_gbe_hw {TYPE_2__* reg; TYPE_3__ mac; } ;
struct TYPE_5__ {int ADDR_MASK; TYPE_1__* mac_adr; } ;
struct TYPE_4__ {int low; int high; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct pch_gbe_hw*,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct pch_gbe_hw *VAR_1, u16 VAR_2)
{
 u32 VAR_3;


 FUNC_1(VAR_1, VAR_1->mac.addr, 0);


 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(0, &VAR_1->reg->mac_adr[VAR_3].high);
  FUNC_0(0, &VAR_1->reg->mac_adr[VAR_3].low);
 }
 FUNC_0(0xFFFE, &VAR_1->reg->ADDR_MASK);

 FUNC_2(&VAR_1->reg->ADDR_MASK, VAR_0);
}
