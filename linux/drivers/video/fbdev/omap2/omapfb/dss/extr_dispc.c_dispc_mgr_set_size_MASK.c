
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {int mgr_width_start; int mgr_height_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(enum omap_channel VAR_1, u16 VAR_2,
  u16 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3 - 1, VAR_0.feat->mgr_height_start, 16) |
  FUNC_1(VAR_2 - 1, VAR_0.feat->mgr_width_start, 0);

 FUNC_2(FUNC_0(VAR_1), VAR_4);
}
