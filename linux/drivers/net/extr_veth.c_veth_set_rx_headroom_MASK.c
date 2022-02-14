
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {int requested_headroom; int peer; } ;
struct net_device {int needed_headroom; } ;


 int FUNC_0 (int,int) ;
 struct veth_priv* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0, int VAR_1)
{
 struct veth_priv *VAR_2, *VAR_3 = FUNC_1(VAR_0);
 struct net_device *VAR_4;

 if (VAR_1 < 0)
  VAR_1 = 0;

 FUNC_3();
 VAR_4 = FUNC_2(VAR_3->peer);
 if (FUNC_5(!VAR_4))
  goto out;

 VAR_2 = FUNC_1(VAR_4);
 VAR_3->requested_headroom = VAR_1;
 VAR_1 = FUNC_0(VAR_3->requested_headroom, VAR_2->requested_headroom);
 VAR_0->needed_headroom = VAR_1;
 VAR_4->needed_headroom = VAR_1;

out:
 FUNC_4();
}
