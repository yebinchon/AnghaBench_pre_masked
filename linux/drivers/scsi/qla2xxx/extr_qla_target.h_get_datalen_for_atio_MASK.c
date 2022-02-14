
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int add_cdb_len; int * add_cdb; } ;
struct TYPE_5__ {TYPE_1__ fcp_cmnd; } ;
struct TYPE_6__ {TYPE_2__ isp24; } ;
struct atio_from_isp {TYPE_3__ u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct atio_from_isp *VAR_0)
{
 int VAR_1 = VAR_0->u.isp24.fcp_cmnd.add_cdb_len;

 return (FUNC_0(FUNC_1((uint32_t *)
     &VAR_0->u.isp24.fcp_cmnd.add_cdb[VAR_1 * 4])));
}
