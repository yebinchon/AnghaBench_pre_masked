
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_7__ {int sa_family; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; } ;
union vxlan_addr {TYPE_4__ sin6; TYPE_3__ sa; TYPE_2__ sin; } ;
union mlxsw_sp_l3addr {int addr6; int addr4; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static void
FUNC_0(enum mlxsw_sp_l3proto VAR_2,
          const union mlxsw_sp_l3addr *VAR_3,
          union vxlan_addr *VAR_4)
{
 switch (VAR_2) {
 case 129:
  VAR_4->sa.sa_family = VAR_0;
  VAR_4->sin.sin_addr.s_addr = VAR_3->addr4;
  break;
 case 128:
  VAR_4->sa.sa_family = VAR_1;
  VAR_4->sin6.sin6_addr = VAR_3->addr6;
  break;
 }
}
