
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_nic_cfg_s {scalar_t__ is_rss; } ;
struct aq_hw_s {struct aq_nic_cfg_s* aq_nic_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int) ;
 int FUNC_3 (struct aq_hw_s*,unsigned int) ;
 int FUNC_4 (struct aq_hw_s*,int) ;
 int FUNC_5 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_6 (struct aq_hw_s*,int) ;
 int FUNC_7 (struct aq_hw_s*,unsigned int) ;
 int FUNC_8 (struct aq_hw_s*,unsigned int) ;
 int FUNC_9 (struct aq_hw_s*,int) ;
 int FUNC_10 (struct aq_hw_s*,int) ;
 int FUNC_11 (struct aq_hw_s*,int) ;
 int FUNC_12 (struct aq_hw_s*,unsigned int,int) ;
 int FUNC_13 (struct aq_hw_s*,int) ;
 int FUNC_14 (struct aq_hw_s*,unsigned int) ;
 int FUNC_15 (struct aq_hw_s*,unsigned int,int) ;

__attribute__((used)) static int FUNC_16(struct aq_hw_s *VAR_1)
{
 struct aq_nic_cfg_s *VAR_2 = VAR_1->aq_nic_cfg;
 int VAR_3;


 FUNC_7(VAR_1, 1U);


 FUNC_8(VAR_1, 1U);


 FUNC_6(VAR_1, VAR_2->is_rss ?
       0xB3333333U : 0x00000000U);


 for (VAR_3 = VAR_0; VAR_3--;) {
  FUNC_12(VAR_1, (VAR_3 == 0U) ? 1U : 0U, VAR_3);
  FUNC_15(VAR_1, 1U, VAR_3);
 }

 FUNC_4(VAR_1, 0x00000000U);
 FUNC_5(VAR_1, 0x00010FFFU, 0U);


 FUNC_10(VAR_1, 0x88A8U);
 FUNC_9(VAR_1, 0x8100U);
 FUNC_11(VAR_1, 1);


 FUNC_3(VAR_1, 1U);


 FUNC_14(VAR_1, 1U);
 FUNC_13(VAR_1, 0xFFFFU & (~0U / 256U));

 FUNC_1(VAR_1, 0U);
 FUNC_2(VAR_1, 0U);

 return FUNC_0(VAR_1);
}
