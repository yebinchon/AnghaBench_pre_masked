
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dispc_reg_field {int low; int high; int reg; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum mgr_reg_fields { ____Placeholder_mgr_reg_fields } mgr_reg_fields ;
struct TYPE_2__ {struct dispc_reg_field* reg_desc; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(enum omap_channel VAR_1, enum mgr_reg_fields VAR_2)
{
 const struct dispc_reg_field VAR_3 = VAR_0[VAR_1].reg_desc[VAR_2];
 return FUNC_0(VAR_3.reg, VAR_3.high, VAR_3.low);
}
