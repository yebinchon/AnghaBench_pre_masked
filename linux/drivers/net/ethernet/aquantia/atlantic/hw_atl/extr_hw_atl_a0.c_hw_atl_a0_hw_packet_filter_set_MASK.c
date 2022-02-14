
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_hw_s {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_2__ {unsigned int mc_list_count; scalar_t__ is_mc_list_enabled; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct aq_hw_s*) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int,unsigned int) ;
 int FUNC_3 (struct aq_hw_s*,scalar_t__) ;
 int FUNC_4 (struct aq_hw_s*,scalar_t__,int ) ;
 int FUNC_5 (struct aq_hw_s*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct aq_hw_s *VAR_5,
       unsigned int VAR_6)
{
 unsigned int VAR_7 = 0U;

 FUNC_5(VAR_5,
         FUNC_0(VAR_4));
 FUNC_4(VAR_5,
      FUNC_0(VAR_3), 0);
 FUNC_3(VAR_5, FUNC_0(VAR_2));

 VAR_5->aq_nic_cfg->is_mc_list_enabled =
   FUNC_0(VAR_3);

 for (VAR_7 = VAR_1; VAR_7 < VAR_0; ++VAR_7)
  FUNC_2(VAR_5,
        (VAR_5->aq_nic_cfg->is_mc_list_enabled &&
        (VAR_7 <= VAR_5->aq_nic_cfg->mc_list_count)) ?
        1U : 0U, VAR_7);

 return FUNC_1(VAR_5);
}
