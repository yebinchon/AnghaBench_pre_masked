
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {struct ofdpa_port* wpriv; } ;
struct rocker {int dummy; } ;
struct ofdpa_port {int dummy; } ;
struct net_device {int dummy; } ;


 struct rocker_port* FUNC_0 (struct net_device*,struct rocker*) ;

__attribute__((used)) static struct ofdpa_port *FUNC_1(struct net_device *VAR_0,
          struct rocker *VAR_1)
{
 struct rocker_port *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2 ? VAR_2->wpriv : ((void*)0);
}
