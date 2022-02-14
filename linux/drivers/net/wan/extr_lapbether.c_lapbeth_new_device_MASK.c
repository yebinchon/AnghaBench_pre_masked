
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lapbethdev {int node; struct net_device* ethdev; struct net_device* axdev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 struct lapbethdev* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct net_device *VAR_6;
 struct lapbethdev *VAR_7;
 int VAR_8 = -VAR_1;

 FUNC_0();

 VAR_6 = FUNC_1(sizeof(*VAR_7), "lapb%d", VAR_2,
       VAR_4);
 if (!VAR_6)
  goto out;

 VAR_7 = FUNC_6(VAR_6);
 VAR_7->axdev = VAR_6;

 FUNC_2(VAR_5);
 VAR_7->ethdev = VAR_5;

 VAR_8 = -VAR_0;
 if (FUNC_7(VAR_6))
  goto fail;

 FUNC_5(&VAR_7->node, &VAR_3);
 VAR_8 = 0;
out:
 return VAR_8;
fail:
 FUNC_3(VAR_5);
 FUNC_4(VAR_6);
 goto out;
}
