
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parman_item {int index; } ;
struct mlxsw_sp_mr_route_key {int proto; int vrid; } ;
struct mlxsw_sp {int core; } ;
struct in6_addr {int dummy; } ;


 struct in6_addr VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;


 int FUNC_1 (char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (char*,int,int ,int ,int ,int ,struct in6_addr,struct in6_addr,struct in6_addr,struct in6_addr,int *) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_3,
       struct parman_item *VAR_4,
       struct mlxsw_sp_mr_route_key *VAR_5)
{
 struct in6_addr VAR_6 = VAR_0;
 char VAR_7[VAR_1];

 switch (VAR_5->proto) {
 case 129:
  FUNC_1(VAR_7, 0, VAR_4->index,
       VAR_5->vrid, 0, 0, 0, 0, 0, 0, ((void*)0));
  break;
 case 128:
  FUNC_2(VAR_7, 0, VAR_4->index,
       VAR_5->vrid, 0, 0, VAR_6, VAR_6,
       VAR_6, VAR_6, ((void*)0));
  break;
 }

 return FUNC_3(VAR_3->core, FUNC_0(VAR_2), VAR_7);
}
