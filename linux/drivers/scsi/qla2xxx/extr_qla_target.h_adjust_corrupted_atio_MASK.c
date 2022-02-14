
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ add_cdb_len; } ;
struct TYPE_7__ {TYPE_2__ fcp_cmnd; } ;
struct TYPE_5__ {int attr_n_length; } ;
struct TYPE_8__ {TYPE_3__ isp24; TYPE_1__ raw; } ;
struct atio_from_isp {TYPE_4__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct atio_from_isp *VAR_1)
{
 VAR_1->u.raw.attr_n_length = FUNC_0(VAR_0);
 VAR_1->u.isp24.fcp_cmnd.add_cdb_len = 0;
}
