
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_nic_cfg_s {int features; scalar_t__ is_lro; } ;
struct aq_hw_s {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int) ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*,int) ;
 int FUNC_4 (struct aq_hw_s*,int) ;
 int FUNC_5 (struct aq_hw_s*,int ) ;
 int FUNC_6 (struct aq_hw_s*,int) ;
 int FUNC_7 (struct aq_hw_s*,unsigned int,unsigned int) ;
 int FUNC_8 (struct aq_hw_s*,unsigned int) ;
 int FUNC_9 (struct aq_hw_s*,unsigned int) ;
 int FUNC_10 (struct aq_hw_s*,unsigned int) ;
 int FUNC_11 (struct aq_hw_s*,unsigned int) ;
 int FUNC_12 (struct aq_hw_s*,int) ;
 int FUNC_13 (struct aq_hw_s*,unsigned int) ;
 int FUNC_14 (struct aq_hw_s*,unsigned int) ;
 int FUNC_15 (struct aq_hw_s*,int) ;
 int FUNC_16 (struct aq_hw_s*,int) ;
 int FUNC_17 (struct aq_hw_s*,int) ;
 int FUNC_18 (struct aq_hw_s*,int) ;

__attribute__((used)) static int FUNC_19(struct aq_hw_s *VAR_3,
        struct aq_nic_cfg_s *VAR_4)
{
 unsigned int VAR_5;


 FUNC_17(VAR_3, 1);
 FUNC_18(VAR_3, 1);


 FUNC_3(VAR_3, !!(VAR_4->features &
       VAR_2));
 FUNC_15(VAR_3, !!(VAR_4->features &
           VAR_2));


 FUNC_16(VAR_3, 0xFFFFFFFFU);


 FUNC_14(VAR_3, 1U);


 {
  unsigned int VAR_6 = (8U < VAR_0) ? 0x3U :
   ((4U < VAR_0) ? 0x2U :
   ((2U < VAR_0) ? 0x1U : 0x0));

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_7(VAR_3, VAR_6, VAR_5);

  FUNC_12(VAR_3, 0x61AU);
  FUNC_5(VAR_3, 0);





  FUNC_6(VAR_3, 50);

  FUNC_11(VAR_3, 1U);

  FUNC_13(VAR_3, 2U);

  FUNC_9(VAR_3, 1U);

  FUNC_8(VAR_3, 10U);

  FUNC_10(VAR_3, 1U);

  FUNC_4(VAR_3,
          VAR_4->is_lro ? 0xFFFFFFFFU : 0U);
  FUNC_2(VAR_3,
          VAR_4->is_lro ? 0xFFFFFFFFU : 0U);

  FUNC_1(VAR_3, 1U);
 }
 return FUNC_0(VAR_3);
}
