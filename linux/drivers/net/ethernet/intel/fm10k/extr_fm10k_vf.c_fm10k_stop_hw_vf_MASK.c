
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int itr_scale; scalar_t__ max_queues; scalar_t__* perm_addr; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct fm10k_hw*) ;
 int FUNC_6 (struct fm10k_hw*,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__*) ;

__attribute__((used)) static s32 FUNC_8(struct fm10k_hw *VAR_2)
{
 u8 *VAR_3 = VAR_2->mac.perm_addr;
 u32 VAR_4 = 0, VAR_5 = 0, VAR_6;
 s32 VAR_7;
 u16 VAR_8;


 VAR_7 = FUNC_5(VAR_2);
 if (VAR_7 && VAR_7 != VAR_0)
  return VAR_7;


 if (FUNC_7(VAR_3)) {
  VAR_4 = (((u32)VAR_3[3]) << 24) |
        (((u32)VAR_3[4]) << 16) |
        (((u32)VAR_3[5]) << 8);
  VAR_5 = (((u32)0xFF) << 24) |
        (((u32)VAR_3[0]) << 16) |
        (((u32)VAR_3[1]) << 8) |
         ((u32)VAR_3[2]);
 }


 VAR_6 = VAR_2->mac.itr_scale << VAR_1;




 for (VAR_8 = 0; VAR_8 < VAR_2->mac.max_queues; VAR_8++) {
  FUNC_6(VAR_2, FUNC_3(VAR_8), VAR_4);
  FUNC_6(VAR_2, FUNC_2(VAR_8), VAR_5);
  FUNC_6(VAR_2, FUNC_1(VAR_8), VAR_4);
  FUNC_6(VAR_2, FUNC_0(VAR_8), VAR_5);





  FUNC_6(VAR_2, FUNC_4(VAR_8), VAR_6);
 }

 return VAR_7;
}
