
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gelic_wl_info {scalar_t__ scan_stat; int scan_done; } ;
struct gelic_port {int dummy; } ;
struct gelic_eurus_cmd {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct gelic_eurus_cmd* FUNC_0 (struct gelic_wl_info*,int ,int *,int ) ;
 int FUNC_1 (struct gelic_wl_info*,int *) ;
 int FUNC_2 (struct gelic_eurus_cmd*) ;
 struct gelic_port* FUNC_3 (struct net_device*) ;
 struct gelic_wl_info* FUNC_4 (struct gelic_port*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct gelic_port *VAR_4 = FUNC_3(VAR_3);
 struct gelic_wl_info *VAR_5 = FUNC_4(VAR_4);
 struct gelic_eurus_cmd *VAR_6;





 if (VAR_5->scan_stat == VAR_1)
  FUNC_5(&VAR_5->scan_done, VAR_2);

 VAR_6 = FUNC_0(VAR_5, VAR_0, ((void*)0), 0);
 FUNC_2(VAR_6);
 FUNC_1(VAR_5, ((void*)0));
}
