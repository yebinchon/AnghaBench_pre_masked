
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status_error_len; } ;
struct TYPE_4__ {TYPE_1__ qword1; } ;
union i40e_rx_desc {TYPE_2__ wb; } ;
typedef int u64 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static inline bool FUNC_1(union i40e_rx_desc *VAR_0,
         const u64 VAR_1)
{
 return !!(VAR_0->wb.qword1.status_error_len &
    FUNC_0(VAR_1));
}
