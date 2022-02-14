
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_4__ {int hw_addr; } ;
struct ixgbevf_adapter {TYPE_1__ hw; } ;


 size_t FUNC_0 (size_t*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int,size_t,size_t) ;
 int FUNC_3 (TYPE_1__*,int,size_t) ;
 size_t FUNC_4 (TYPE_1__*,int) ;
 size_t* VAR_0 ;

__attribute__((used)) static bool FUNC_5(struct ixgbevf_adapter *VAR_1, u64 *VAR_2,
        int VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 if (FUNC_1(VAR_1->hw.hw_addr)) {
  *VAR_2 = 1;
  return 1;
 }
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_8 = FUNC_4(&VAR_1->hw, VAR_3);
  FUNC_3(&VAR_1->hw, VAR_3,
    VAR_0[VAR_6] & VAR_5);
  VAR_7 = FUNC_4(&VAR_1->hw, VAR_3);
  if (VAR_7 != (VAR_0[VAR_6] & VAR_5 & VAR_4)) {
   FUNC_2(&VAR_1->hw,
          "pattern test reg %04X failed: got 0x%08X expected 0x%08X\n",
          VAR_3, VAR_7,
          VAR_0[VAR_6] & VAR_5 & VAR_4);
   *VAR_2 = VAR_3;
   FUNC_3(&VAR_1->hw, VAR_3, VAR_8);
   return 1;
  }
  FUNC_3(&VAR_1->hw, VAR_3, VAR_8);
 }
 return 0;
}
