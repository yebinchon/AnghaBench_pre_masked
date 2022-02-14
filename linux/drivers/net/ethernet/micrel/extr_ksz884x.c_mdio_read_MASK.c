
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct ksz_port {TYPE_1__* linked; struct ksz_hw* hw; } ;
struct ksz_hw {int dummy; } ;
struct dev_priv {struct ksz_port port; } ;
struct TYPE_2__ {int port_id; } ;


 int FUNC_0 (struct ksz_hw*,int ,int,int*) ;
 struct dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct dev_priv *VAR_3 = FUNC_1(VAR_0);
 struct ksz_port *VAR_4 = &VAR_3->port;
 struct ksz_hw *VAR_5 = VAR_4->hw;
 u16 VAR_6;

 FUNC_0(VAR_5, VAR_4->linked->port_id, VAR_2 << 1, &VAR_6);
 return VAR_6;
}
