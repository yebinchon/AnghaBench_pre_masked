
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;
struct ofdpa {TYPE_1__* rocker; } ;
struct TYPE_2__ {struct rocker_port** ports; } ;



__attribute__((used)) static struct ofdpa_port *FUNC_0(const struct ofdpa *VAR_0,
      int VAR_1)
{
 struct rocker_port *VAR_2;

 VAR_2 = VAR_0->rocker->ports[VAR_1];
 return VAR_2 ? VAR_2->wpriv : ((void*)0);
}
