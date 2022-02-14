
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t vifi_t ;
struct mlxsw_sp_mr_route {TYPE_3__* mfc; } ;
struct TYPE_4__ {int* ttls; } ;
struct TYPE_5__ {TYPE_1__ res; } ;
struct TYPE_6__ {size_t mfc_parent; TYPE_2__ mfc_un; } ;



__attribute__((used)) static bool
FUNC_0(const struct mlxsw_sp_mr_route *VAR_0)
{
 vifi_t VAR_1 = VAR_0->mfc->mfc_parent;

 return VAR_0->mfc->mfc_un.res.ttls[VAR_1] != 255;
}
