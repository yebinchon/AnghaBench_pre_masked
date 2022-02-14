
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_port {int pport; int dev; TYPE_1__* rocker; struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int ageing_time; int brport_flags; int pport; int dev; struct rocker_port* rocker_port; int ofdpa; } ;
struct TYPE_2__ {int wpriv; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct rocker_port *VAR_2)
{
 struct ofdpa_port *VAR_3 = VAR_2->wpriv;

 VAR_3->ofdpa = VAR_2->rocker->wpriv;
 VAR_3->rocker_port = VAR_2;
 VAR_3->dev = VAR_2->dev;
 VAR_3->pport = VAR_2->pport;
 VAR_3->brport_flags = VAR_1;
 VAR_3->ageing_time = VAR_0;
 return 0;
}
