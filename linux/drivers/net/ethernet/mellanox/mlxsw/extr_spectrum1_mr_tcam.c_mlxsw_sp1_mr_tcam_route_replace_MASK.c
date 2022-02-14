
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct parman_item {int index; } ;
struct TYPE_8__ {int addr6; int addr4; } ;
struct TYPE_7__ {int addr6; int addr4; } ;
struct TYPE_6__ {int addr6; int addr4; } ;
struct TYPE_5__ {int addr6; int addr4; } ;
struct mlxsw_sp_mr_route_key {int proto; TYPE_4__ source_mask; TYPE_3__ source; TYPE_2__ group_mask; TYPE_1__ group; int vrid; } ;
struct mlxsw_sp {int core; } ;
struct mlxsw_afa_block {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (struct mlxsw_afa_block*) ;
 int FUNC_2 (char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp *VAR_3,
        struct parman_item *VAR_4,
        struct mlxsw_sp_mr_route_key *VAR_5,
        struct mlxsw_afa_block *VAR_6)
{
 char VAR_7[VAR_1];

 switch (VAR_5->proto) {
 case 129:
  FUNC_2(VAR_7, 1, VAR_4->index,
       VAR_5->vrid,
       VAR_0, 0,
       FUNC_5(VAR_5->group.addr4),
       FUNC_5(VAR_5->group_mask.addr4),
       FUNC_5(VAR_5->source.addr4),
       FUNC_5(VAR_5->source_mask.addr4),
       FUNC_1(VAR_6));
  break;
 case 128:
  FUNC_3(VAR_7, 1, VAR_4->index,
       VAR_5->vrid,
       VAR_0, 0,
       VAR_5->group.addr6,
       VAR_5->group_mask.addr6,
       VAR_5->source.addr6,
       VAR_5->source_mask.addr6,
       FUNC_1(VAR_6));
 }

 return FUNC_4(VAR_3->core, FUNC_0(VAR_2), VAR_7);
}
