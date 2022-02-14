
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dispc_reg_field {scalar_t__ reg; int low; int high; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum mgr_reg_fields { ____Placeholder_mgr_reg_fields } mgr_reg_fields ;
struct TYPE_4__ {int control_lock; } ;
struct TYPE_3__ {struct dispc_reg_field* reg_desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int ,int ) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(enum omap_channel VAR_4,
     enum mgr_reg_fields VAR_5, int VAR_6) {
 const struct dispc_reg_field VAR_7 = VAR_3[VAR_4].reg_desc[VAR_5];
 const bool VAR_8 = VAR_7.reg == VAR_1 || VAR_7.reg == VAR_0;
 unsigned long VAR_9;

 if (VAR_8)
  FUNC_1(&VAR_2.control_lock, VAR_9);

 FUNC_0(VAR_7.reg, VAR_6, VAR_7.high, VAR_7.low);

 if (VAR_8)
  FUNC_2(&VAR_2.control_lock, VAR_9);
}
