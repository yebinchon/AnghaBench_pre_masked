
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {struct net_device* bridge_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct ofdpa_port*,int ) ;
 int FUNC_1 (struct ofdpa_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct ofdpa_port *VAR_0,
      struct net_device *VAR_1)
{
 int VAR_2;

 VAR_0->bridge_dev = VAR_1;

 VAR_2 = FUNC_0(VAR_0, 0);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_1(VAR_0, 0);

 return VAR_2;
}
