
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aq_hw_s {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_2__ {int flow_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,int ,int) ;
 int FUNC_2 (struct aq_hw_s*,int,int) ;
 int FUNC_3 (struct aq_hw_s*,int,int) ;
 int FUNC_4 (struct aq_hw_s*,int,int) ;
 int FUNC_5 (struct aq_hw_s*,unsigned int,unsigned int) ;
 int FUNC_6 (struct aq_hw_s*,int,int) ;
 int FUNC_7 (struct aq_hw_s*,int,int) ;
 int FUNC_8 (struct aq_hw_s*,int,int) ;
 int FUNC_9 (struct aq_hw_s*,unsigned int) ;
 int FUNC_10 (struct aq_hw_s*,int) ;
 int FUNC_11 (struct aq_hw_s*,int) ;
 int FUNC_12 (struct aq_hw_s*,unsigned int) ;
 int FUNC_13 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_14 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_15 (struct aq_hw_s*,unsigned int) ;
 int FUNC_16 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_17 (struct aq_hw_s*,int,unsigned int) ;

__attribute__((used)) static int FUNC_18(struct aq_hw_s *VAR_2)
{
 u32 VAR_3 = 0U;
 u32 VAR_4 = 0U;
 unsigned int VAR_5 = 0U;


 FUNC_10(VAR_2, 0x0U);
 FUNC_11(VAR_2, 0xA);


 FUNC_15(VAR_2, 0U);


 FUNC_12(VAR_2, 0U);
 FUNC_9(VAR_2, 0U);

 FUNC_16(VAR_2, 0xFFF, 0U);
 FUNC_17(VAR_2, 0x64, 0U);
 FUNC_13(VAR_2, 0x50, 0U);
 FUNC_14(VAR_2, 0x1E, 0U);


 VAR_4 = VAR_1;

 FUNC_8(VAR_2, VAR_4, VAR_3);
 FUNC_6(VAR_2,
         (VAR_4 *
         (1024 / 32U) * 66U) /
         100U, VAR_3);
 FUNC_7(VAR_2,
         (VAR_4 *
         (1024 / 32U) * 50U) /
         100U, VAR_3);


 VAR_3 = 0;
 VAR_4 = VAR_0;

 FUNC_4(VAR_2, VAR_4, VAR_3);
 FUNC_2(VAR_2,
         (VAR_4 *
         (1024U / 32U) * 66U) /
         100U, VAR_3);
 FUNC_3(VAR_2,
         (VAR_4 *
         (1024U / 32U) * 50U) /
         100U, VAR_3);

 FUNC_1(VAR_2, VAR_2->aq_nic_cfg->flow_control, VAR_3);


 for (VAR_5 = 8U; VAR_5--;)
  FUNC_5(VAR_2, VAR_5, 0U);

 return FUNC_0(VAR_2);
}
