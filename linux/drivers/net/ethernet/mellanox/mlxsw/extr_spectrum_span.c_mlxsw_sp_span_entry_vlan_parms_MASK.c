
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int flags; } ;
struct mlxsw_sp_span_parms {int vid; int dest_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_span_parms*) ;
 struct net_device* FUNC_1 (struct net_device const*,int *) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(const struct net_device *VAR_1,
          struct mlxsw_sp_span_parms *VAR_2)
{
 struct net_device *VAR_3;
 u16 VAR_4;

 if (!(VAR_1->flags & VAR_0))
  return FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 VAR_2->dest_port = FUNC_2(VAR_3);
 VAR_2->vid = VAR_4;
 return 0;
}
