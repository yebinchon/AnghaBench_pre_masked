
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_sta_info {scalar_t__ status; int addr; } ;
struct wil_probe_client_req {size_t cid; int cookie; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {struct wil_sta_info* sta; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int ,int,int ,int,int ) ;
 struct net_device* FUNC_1 (struct wil6210_vif*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_2,
        struct wil6210_vif *VAR_3,
        struct wil_probe_client_req *VAR_4)
{
 struct net_device *VAR_5 = FUNC_1(VAR_3);
 struct wil_sta_info *VAR_6 = &VAR_2->sta[VAR_4->cid];



 bool VAR_7 = (VAR_6->status == VAR_1);

 FUNC_0(VAR_5, VAR_6->addr, VAR_4->cookie, VAR_7,
         0, 0, VAR_0);
}
