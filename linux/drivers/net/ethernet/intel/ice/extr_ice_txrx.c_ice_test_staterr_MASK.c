
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status_error0; } ;
union ice_32b_rx_flex_desc {TYPE_1__ wb; } ;
typedef int u16 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static bool
FUNC_1(union ice_32b_rx_flex_desc *VAR_0, const u16 VAR_1)
{
 return !!(VAR_0->wb.status_error0 &
    FUNC_0(VAR_1));
}
