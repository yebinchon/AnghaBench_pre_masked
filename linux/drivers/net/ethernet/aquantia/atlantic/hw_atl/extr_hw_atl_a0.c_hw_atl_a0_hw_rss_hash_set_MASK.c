
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct aq_rss_parameters {int * hash_secret_key; } ;
struct aq_nic_cfg_s {scalar_t__ is_rss; } ;
struct aq_hw_s {struct aq_nic_cfg_s* aq_nic_cfg; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct aq_hw_s*) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int) ;
 int FUNC_3 (struct aq_hw_s*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (struct aq_hw_s*,unsigned int) ;
 int FUNC_5 (int ,struct aq_hw_s*,scalar_t__,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct aq_hw_s *VAR_1,
         struct aq_rss_parameters *VAR_2)
{
 struct aq_nic_cfg_s *VAR_3 = VAR_1->aq_nic_cfg;
 int VAR_4 = 0;
 unsigned int VAR_5 = 0U;
 unsigned int VAR_6 = 0U;
 u32 VAR_7;

 for (VAR_5 = 10, VAR_6 = 0U; VAR_5--; ++VAR_6) {
  u32 VAR_8 = VAR_3->is_rss ?
   FUNC_0(VAR_2->hash_secret_key[VAR_5]) : 0U;
  FUNC_3(VAR_1, VAR_8);
  FUNC_2(VAR_1, VAR_6);
  FUNC_4(VAR_1, 1U);
  VAR_4 = FUNC_5(VAR_0,
      VAR_1, VAR_7, VAR_7 == 0,
      1000U, 10000U);
  if (VAR_4 < 0)
   goto err_exit;
 }

 VAR_4 = FUNC_1(VAR_1);

err_exit:
 return VAR_4;
}
