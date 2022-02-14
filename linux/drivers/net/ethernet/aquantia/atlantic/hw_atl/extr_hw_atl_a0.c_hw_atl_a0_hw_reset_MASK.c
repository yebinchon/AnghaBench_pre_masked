
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct aq_hw_s {TYPE_1__* aq_fw_ops; } ;
struct TYPE_2__ {int (* set_state ) (struct aq_hw_s*,int ) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct aq_hw_s*) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (struct aq_hw_s*,int) ;
 int FUNC_4 (struct aq_hw_s*,unsigned int) ;
 int VAR_2 ;
 int FUNC_5 (struct aq_hw_s*,unsigned int) ;
 int FUNC_6 (struct aq_hw_s*,unsigned int) ;
 int FUNC_7 (struct aq_hw_s*,unsigned int) ;
 int FUNC_8 (struct aq_hw_s*,unsigned int) ;
 int FUNC_9 (int ,struct aq_hw_s*,scalar_t__,int,unsigned int,unsigned int) ;
 int FUNC_10 (struct aq_hw_s*,int ) ;

__attribute__((used)) static int FUNC_11(struct aq_hw_s *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;

 FUNC_2(VAR_3, 1U);
 FUNC_6(VAR_3, 0U);
 FUNC_7(VAR_3, 0U);
 FUNC_8(VAR_3, 0U);

 FUNC_0();
 FUNC_3(VAR_3, 1);


 VAR_4 = FUNC_9(VAR_1,
     VAR_3, VAR_5, VAR_5 == 0,
     1000U, 10000U);
 if (VAR_4 < 0)
  goto err_exit;

 FUNC_4(VAR_3, 0U);
 FUNC_5(VAR_3, 1U);


 VAR_4 = FUNC_9(VAR_2,
     VAR_3, VAR_5, VAR_5 == 0,
     1000U, 10000U);
 if (VAR_4 < 0)
  goto err_exit;

 VAR_3->aq_fw_ops->set_state(VAR_3, VAR_0);

 VAR_4 = FUNC_1(VAR_3);

err_exit:
 return VAR_4;
}
