
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_2__ sin_addr; } ;
struct TYPE_5__ {scalar_t__ sa_family; } ;
union vxlan_addr {TYPE_4__ sin6; TYPE_3__ sin; TYPE_1__ sa; } ;
union mlxsw_sp_l3addr {int addr6; int addr4; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(const union vxlan_addr *VAR_3,
          enum mlxsw_sp_l3proto *VAR_4,
          union mlxsw_sp_l3addr *VAR_5)
{
 if (VAR_3->sa.sa_family == VAR_0) {
  VAR_5->addr4 = VAR_3->sin.sin_addr.s_addr;
  *VAR_4 = VAR_1;
 } else {
  VAR_5->addr6 = VAR_3->sin6.sin6_addr;
  *VAR_4 = VAR_2;
 }
}
