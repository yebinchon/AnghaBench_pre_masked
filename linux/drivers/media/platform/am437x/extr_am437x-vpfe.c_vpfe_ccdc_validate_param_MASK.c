
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct vpfe_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ gamma_wd; int enable; } ;
struct vpfe_ccdc_config_params_raw {TYPE_1__ alaw; int data_sz; } ;
struct vpfe_ccdc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct vpfe_device* FUNC_2 (struct vpfe_ccdc*) ;
 int FUNC_3 (int,struct vpfe_device*,char*) ;

__attribute__((used)) static int
FUNC_4(struct vpfe_ccdc *VAR_3,
    struct vpfe_ccdc_config_params_raw *VAR_4)
{
 struct vpfe_device *VAR_5 = FUNC_2(VAR_3);
 u8 VAR_6, VAR_7;

 if (!VAR_4->alaw.enable)
  return 0;

 VAR_6 = FUNC_1(VAR_4->alaw.gamma_wd);
 VAR_7 = FUNC_0(VAR_4->data_sz);

 if (VAR_4->alaw.gamma_wd > VAR_1 ||
     VAR_4->alaw.gamma_wd < VAR_2 ||
     VAR_6 > VAR_7) {
  FUNC_3(1, VAR_5, "Invalid data line select\n");
  return -VAR_0;
 }

 return 0;
}
