
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*,int,int,int,int) ;

void FUNC_1(struct aq_hw_s *VAR_0,
          u32 VAR_1, u32 VAR_2)
{

 static u32 VAR_3[8] = {
   0x000054c4U, 0x000054C4U, 0x000054C4U, 0x000054C4U,
   0x000054c4U, 0x000054C4U, 0x000054C4U, 0x000054C4U
  };


 static u32 VAR_4[8] = {
   0x00000007U, 0x00000070U, 0x00000700U, 0x00007000U,
   0x00070000U, 0x00700000U, 0x07000000U, 0x70000000U
  };


 static u32 VAR_5[8] = {
   0U, 4U, 8U, 12U, 16U, 20U, 24U, 28U
  };

 FUNC_0(VAR_0, VAR_3[VAR_2],
       VAR_4[VAR_2],
       VAR_5[VAR_2],
       VAR_1);
}
