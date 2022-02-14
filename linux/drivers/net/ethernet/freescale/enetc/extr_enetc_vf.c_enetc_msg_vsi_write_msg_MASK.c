
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct enetc_msg_swbd {int dma; int size; } ;
struct enetc_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct enetc_hw*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct enetc_hw *VAR_2,
        struct enetc_msg_swbd *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->size) | FUNC_2(VAR_3->dma);
 FUNC_1(VAR_2, VAR_1, FUNC_3(VAR_3->dma));
 FUNC_1(VAR_2, VAR_0, VAR_4);
}
