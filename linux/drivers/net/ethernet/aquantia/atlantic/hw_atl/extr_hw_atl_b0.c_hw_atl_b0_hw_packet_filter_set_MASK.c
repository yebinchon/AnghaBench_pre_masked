
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_nic_cfg_s {unsigned int mc_list_count; scalar_t__ is_mc_list_enabled; scalar_t__ is_vlan_force_promisc; } ;
struct aq_hw_s {struct aq_nic_cfg_s* aq_nic_cfg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct aq_hw_s*) ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*,int) ;
 int FUNC_4 (struct aq_hw_s*,unsigned int,unsigned int) ;
 int FUNC_5 (struct aq_hw_s*,scalar_t__) ;
 int FUNC_6 (struct aq_hw_s*,int,int ) ;
 int FUNC_7 (struct aq_hw_s*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct aq_hw_s *VAR_6,
       unsigned int VAR_7)
{
 unsigned int VAR_8 = 0U;
 struct aq_nic_cfg_s *VAR_9 = VAR_6->aq_nic_cfg;

 FUNC_7(VAR_6,
         FUNC_0(VAR_5));

 FUNC_2(VAR_6,
         FUNC_0(VAR_5) ||
         VAR_9->is_vlan_force_promisc);

 FUNC_6(VAR_6,
      FUNC_0(VAR_2) &&
      FUNC_0(VAR_4), 0);

 FUNC_3(VAR_6,
           FUNC_0(VAR_2) &&
           FUNC_0(VAR_4));

 FUNC_5(VAR_6, FUNC_0(VAR_3));


 for (VAR_8 = VAR_1; VAR_8 < VAR_0; ++VAR_8)
  FUNC_4(VAR_6,
        (VAR_9->is_mc_list_enabled &&
         (VAR_8 <= VAR_9->mc_list_count)) ?
        1U : 0U, VAR_8);

 return FUNC_1(VAR_6);
}
