
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_nic_cfg_s {scalar_t__ is_rss; } ;
struct aq_hw_s {struct aq_nic_cfg_s* aq_nic_cfg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct aq_hw_s*) ;
 int FUNC_2 (struct aq_hw_s*,int,int) ;
 int FUNC_3 (struct aq_hw_s*,unsigned int) ;
 int FUNC_4 (struct aq_hw_s*,unsigned int) ;
 int FUNC_5 (struct aq_hw_s*,unsigned int) ;
 int FUNC_6 (struct aq_hw_s*,int) ;
 int FUNC_7 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_8 (struct aq_hw_s*,int) ;
 int FUNC_9 (struct aq_hw_s*,unsigned int) ;
 int FUNC_10 (struct aq_hw_s*,unsigned int) ;
 int FUNC_11 (struct aq_hw_s*,unsigned int) ;
 int FUNC_12 (struct aq_hw_s*,int) ;
 int FUNC_13 (struct aq_hw_s*,int) ;
 int FUNC_14 (struct aq_hw_s*,int) ;
 int FUNC_15 (struct aq_hw_s*,unsigned int) ;
 int FUNC_16 (struct aq_hw_s*,unsigned int,int) ;
 int FUNC_17 (struct aq_hw_s*,int) ;
 int FUNC_18 (struct aq_hw_s*,unsigned int) ;
 int FUNC_19 (struct aq_hw_s*,unsigned int,int) ;

__attribute__((used)) static int FUNC_20(struct aq_hw_s *VAR_2)
{
 struct aq_nic_cfg_s *VAR_3 = VAR_2->aq_nic_cfg;
 int VAR_4;


 FUNC_9(VAR_2, 1U);


 FUNC_10(VAR_2, 1U);


 FUNC_8(VAR_2, VAR_3->is_rss ?
     0xB3333333U : 0x00000000U);


 for (VAR_4 = VAR_0; VAR_4--;) {
  FUNC_16(VAR_2, (VAR_4 == 0U) ? 1U : 0U, VAR_4);
  FUNC_19(VAR_2, 1U, VAR_4);
 }

 FUNC_6(VAR_2, 0x00000000U);
 FUNC_7(VAR_2, 0x00010FFFU, 0U);


 FUNC_13(VAR_2, 0x88A8U);
 FUNC_12(VAR_2, 0x8100U);

 FUNC_14(VAR_2, 1);


 FUNC_11(VAR_2, 1U);
 FUNC_15(VAR_2, 1U);


 FUNC_5(VAR_2, 1U);


 FUNC_2(VAR_2, 0x00005040U,
   FUNC_0(VAR_1) ? 0x000F0000U : 0x00000000U);

 FUNC_18(VAR_2, 1U);
 FUNC_17(VAR_2, 0xFFFFU & (~0U / 256U));

 FUNC_3(VAR_2, 0U);
 FUNC_4(VAR_2, 0U);

 return FUNC_1(VAR_2);
}
