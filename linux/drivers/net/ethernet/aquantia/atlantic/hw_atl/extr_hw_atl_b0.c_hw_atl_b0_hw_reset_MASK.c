
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_hw_s {TYPE_1__* aq_fw_ops; } ;
struct TYPE_2__ {int (* set_state ) (struct aq_hw_s*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*) ;
 int FUNC_2 (struct aq_hw_s*,int ) ;

__attribute__((used)) static int FUNC_3(struct aq_hw_s *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->aq_fw_ops->set_state(VAR_1, VAR_0);

 VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
