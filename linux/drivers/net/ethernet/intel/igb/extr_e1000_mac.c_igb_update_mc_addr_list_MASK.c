
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int mta_reg_count; int * mta_shadow; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int *) ;
 int FUNC_3 (int **,int ,int) ;
 int FUNC_4 () ;

void FUNC_5(struct e1000_hw *VAR_2,
        u8 *VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 int VAR_8;


 FUNC_3(&VAR_2->mac.mta_shadow, 0, sizeof(VAR_2->mac.mta_shadow));


 for (VAR_8 = 0; (u32) VAR_8 < VAR_4; VAR_8++) {
  VAR_5 = FUNC_2(VAR_2, VAR_3);

  VAR_7 = (VAR_5 >> 5) & (VAR_2->mac.mta_reg_count - 1);
  VAR_6 = VAR_5 & 0x1F;

  VAR_2->mac.mta_shadow[VAR_7] |= FUNC_0(VAR_6);
  VAR_3 += (VAR_1);
 }


 for (VAR_8 = VAR_2->mac.mta_reg_count - 1; VAR_8 >= 0; VAR_8--)
  FUNC_1(VAR_0, VAR_8, VAR_2->mac.mta_shadow[VAR_8]);
 FUNC_4();
}
