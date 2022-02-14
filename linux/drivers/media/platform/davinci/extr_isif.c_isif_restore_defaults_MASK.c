
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum vpss_ccdc_source_sel { ____Placeholder_vpss_ccdc_source_sel } vpss_ccdc_source_sel ;
struct TYPE_3__ {int config_params; } ;
struct TYPE_4__ {int dev; TYPE_1__ bayer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
 enum vpss_ccdc_source_sel VAR_6 = VAR_1;

 FUNC_0(VAR_4.dev, "\nstarting isif_restore_defaults...");
 VAR_4.bayer.config_params = VAR_5;

 FUNC_2(VAR_2, 1);
 FUNC_2(VAR_3, 1);
 FUNC_2(VAR_0, 1);

 FUNC_1();
 FUNC_3(VAR_6);
 FUNC_0(VAR_4.dev, "\nEnd of isif_restore_defaults...");
}
