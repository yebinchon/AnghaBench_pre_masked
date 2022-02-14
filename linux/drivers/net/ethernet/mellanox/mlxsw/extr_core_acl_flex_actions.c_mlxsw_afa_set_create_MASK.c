
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_first; } ;
struct mlxsw_afa_set {int ref_count; TYPE_1__ ht_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_afa_set* FUNC_0 (int,int ) ;
 int FUNC_1 (struct mlxsw_afa_set*,int ,int ) ;

__attribute__((used)) static struct mlxsw_afa_set *FUNC_2(bool VAR_2)
{
 struct mlxsw_afa_set *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3, VAR_1, 0);
 VAR_3->ht_key.is_first = VAR_2;
 VAR_3->ref_count = 1;
 return VAR_3;
}
