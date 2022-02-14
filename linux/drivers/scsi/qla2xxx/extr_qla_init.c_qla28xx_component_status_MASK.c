
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla27xx_image_status {int dummy; } ;
struct TYPE_2__ {void* npiv_config_2_3; void* npiv_config_0_1; void* vpd_nvram; void* board_config; } ;
struct active_regions {TYPE_1__ aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct qla27xx_image_status*,int ) ;

__attribute__((used)) static void
FUNC_1(
    struct active_regions *VAR_4, struct qla27xx_image_status *VAR_5)
{
 VAR_4->aux.board_config =
     FUNC_0(VAR_5, VAR_0);

 VAR_4->aux.vpd_nvram =
     FUNC_0(VAR_5, VAR_3);

 VAR_4->aux.npiv_config_0_1 =
     FUNC_0(VAR_5, VAR_1);

 VAR_4->aux.npiv_config_2_3 =
     FUNC_0(VAR_5, VAR_2);
}
