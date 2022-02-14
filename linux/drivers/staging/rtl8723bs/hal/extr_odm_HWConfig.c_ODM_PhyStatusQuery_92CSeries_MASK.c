
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct odm_phy_info {int dummy; } ;
struct odm_packet_info {int dummy; } ;
struct TYPE_5__ {int RSSI_test; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int FUNC_0 (TYPE_1__*,struct odm_phy_info*,struct odm_packet_info*) ;
 int FUNC_1 (TYPE_1__*,struct odm_phy_info*,int *,struct odm_packet_info*) ;

__attribute__((used)) static void FUNC_2(
 PDM_ODM_T VAR_0,
 struct odm_phy_info *VAR_1,
 u8 *VAR_2,
 struct odm_packet_info *VAR_3
)
{

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 if (!VAR_0->RSSI_test)
  FUNC_0(VAR_0, VAR_1, VAR_3);
}
