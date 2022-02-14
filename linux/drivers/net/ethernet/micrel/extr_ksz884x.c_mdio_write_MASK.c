
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ksz_port {int first_port; int port_cnt; struct ksz_hw* hw; } ;
struct ksz_hw {int dummy; } ;
struct dev_priv {struct ksz_port port; } ;


 int FUNC_0 (struct ksz_hw*,int,int,int) ;
 struct dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct dev_priv *VAR_4 = FUNC_1(VAR_0);
 struct ksz_port *VAR_5 = &VAR_4->port;
 struct ksz_hw *VAR_6 = VAR_5->hw;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0, VAR_8 = VAR_5->first_port; VAR_7 < VAR_5->port_cnt; VAR_7++, VAR_8++)
  FUNC_0(VAR_6, VAR_8, VAR_2 << 1, VAR_3);
}
