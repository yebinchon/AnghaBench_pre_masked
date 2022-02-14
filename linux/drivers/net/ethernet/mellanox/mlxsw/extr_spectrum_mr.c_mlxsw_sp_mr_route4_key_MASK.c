
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mr_mfc {int dummy; } ;
struct mlxsw_sp_mr_table {int vr_id; } ;
struct TYPE_8__ {void* addr4; } ;
struct TYPE_7__ {void* addr4; } ;
struct TYPE_6__ {void* addr4; } ;
struct TYPE_5__ {int addr4; } ;
struct mlxsw_sp_mr_route_key {TYPE_4__ source_mask; TYPE_3__ source; TYPE_2__ group_mask; TYPE_1__ group; int proto; int vrid; } ;
struct mfc_cache {void* mfc_origin; int mfc_mcastgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_mr_route_key*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_mr_table *VAR_2,
       struct mlxsw_sp_mr_route_key *VAR_3,
       struct mr_mfc *VAR_4)
{
 const struct mfc_cache *VAR_5 = (struct mfc_cache *) VAR_4;
 bool VAR_6;

 VAR_6 = (VAR_5->mfc_origin == FUNC_0(VAR_0));

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->vrid = VAR_2->vr_id;
 VAR_3->proto = VAR_1;
 VAR_3->group.addr4 = VAR_5->mfc_mcastgrp;
 VAR_3->group_mask.addr4 = FUNC_0(0xffffffff);
 VAR_3->source.addr4 = VAR_5->mfc_origin;
 VAR_3->source_mask.addr4 = FUNC_0(VAR_6 ? 0 : 0xffffffff);
}
