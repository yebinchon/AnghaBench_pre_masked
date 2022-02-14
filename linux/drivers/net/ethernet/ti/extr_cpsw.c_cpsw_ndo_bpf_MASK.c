
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_bpf {int command; } ;
struct net_device {int dummy; } ;
struct cpsw_priv {int xdpi; } ;


 int VAR_0 ;


 int FUNC_0 (struct cpsw_priv*,struct netdev_bpf*) ;
 struct cpsw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,struct netdev_bpf*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct netdev_bpf *VAR_2)
{
 struct cpsw_priv *VAR_3 = FUNC_1(VAR_1);

 switch (VAR_2->command) {
 case 128:
  return FUNC_0(VAR_3, VAR_2);

 case 129:
  return FUNC_2(&VAR_3->xdpi, VAR_2);

 default:
  return -VAR_0;
 }
}
