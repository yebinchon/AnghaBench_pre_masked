
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status_error; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union igc_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u32 ;
typedef int __le32 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static inline __le32 FUNC_1(union igc_adv_rx_desc *VAR_0,
          const u32 VAR_1)
{
 return VAR_0->wb.upper.status_error & FUNC_0(VAR_1);
}
