
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct aq_hw_s {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_2__ {int wol; } ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*,int *) ;
 int FUNC_1 (struct aq_hw_s*,int *) ;

__attribute__((used)) static int FUNC_2(struct aq_hw_s *VAR_1, unsigned int VAR_2,
        u8 *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->aq_nic_cfg->wol & VAR_0) {
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4 < 0)
   goto err_exit;
  VAR_4 = FUNC_1(VAR_1, VAR_3);
 }

err_exit:
 return VAR_4;
}
