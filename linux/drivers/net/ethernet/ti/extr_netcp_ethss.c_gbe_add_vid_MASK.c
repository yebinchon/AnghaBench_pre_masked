
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbe_priv {scalar_t__ ale_ports; int ale; } ;
struct gbe_intf {int active_vlans; struct gbe_priv* gbe_dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, int VAR_2)
{
 struct gbe_intf *VAR_3 = VAR_1;
 struct gbe_priv *VAR_4 = VAR_3->gbe_dev;

 FUNC_2(VAR_2, VAR_3->active_vlans);

 FUNC_1(VAR_4->ale, VAR_2,
     FUNC_0(VAR_4->ale_ports),
     VAR_0,
     FUNC_0(VAR_4->ale_ports),
     FUNC_0(VAR_4->ale_ports - 1));

 return 0;
}
