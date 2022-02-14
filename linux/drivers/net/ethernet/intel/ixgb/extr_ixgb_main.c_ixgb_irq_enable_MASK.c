
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ subsystem_vendor_id; } ;
struct ixgb_adapter {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct ixgb_adapter *VAR_7)
{
 u32 VAR_8 = VAR_4 | VAR_3 |
    VAR_5 | VAR_2;
 if (VAR_7->hw.subsystem_vendor_id == VAR_6)
  VAR_8 |= VAR_1;
 FUNC_1(&VAR_7->hw, VAR_0, VAR_8);
 FUNC_0(&VAR_7->hw);
}
