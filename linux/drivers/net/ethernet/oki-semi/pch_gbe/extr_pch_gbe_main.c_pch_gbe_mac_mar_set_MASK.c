
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pch_gbe_hw {TYPE_2__* reg; } ;
struct pch_gbe_adapter {int netdev; } ;
struct TYPE_4__ {int ADDR_MASK; TYPE_1__* mac_adr; } ;
struct TYPE_3__ {int low; int high; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,char*,int) ;
 struct pch_gbe_adapter* FUNC_3 (struct pch_gbe_hw*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct pch_gbe_hw *VAR_1, u8 * VAR_2, u32 VAR_3)
{
 struct pch_gbe_adapter *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5, VAR_6, VAR_7;

 FUNC_2(VAR_4->netdev, "index : 0x%x\n", VAR_3);





 VAR_6 = ((u32) VAR_2[0] | ((u32) VAR_2[1] << 8) |
     ((u32) VAR_2[2] << 16) | ((u32) VAR_2[3] << 24));
 VAR_5 = ((u32) VAR_2[4] | ((u32) VAR_2[5] << 8));

 VAR_7 = FUNC_0(&VAR_1->reg->ADDR_MASK);
 FUNC_1((VAR_7 | (0x0001 << VAR_3)), &VAR_1->reg->ADDR_MASK);

 FUNC_4(&VAR_1->reg->ADDR_MASK, VAR_0);

 FUNC_1(VAR_6, &VAR_1->reg->mac_adr[VAR_3].high);
 FUNC_1(VAR_5, &VAR_1->reg->mac_adr[VAR_3].low);

 FUNC_1((VAR_7 & ~(0x0001 << VAR_3)), &VAR_1->reg->ADDR_MASK);

 FUNC_4(&VAR_1->reg->ADDR_MASK, VAR_0);
}
