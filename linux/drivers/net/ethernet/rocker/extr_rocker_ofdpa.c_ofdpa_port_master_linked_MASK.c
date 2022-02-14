
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ofdpa_port*,struct net_device*) ;
 int FUNC_3 (struct ofdpa_port*,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct rocker_port *VAR_0,
        struct net_device *VAR_1)
{
 struct ofdpa_port *VAR_2 = VAR_0->wpriv;
 int VAR_3 = 0;

 if (FUNC_0(VAR_1))
  VAR_3 = FUNC_2(VAR_2, VAR_1);
 else if (FUNC_1(VAR_1))
  VAR_3 = FUNC_3(VAR_2, VAR_1);
 return VAR_3;
}
