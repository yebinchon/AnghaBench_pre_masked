
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ahc_softc {int flags; TYPE_1__* platform_data; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,struct ahc_softc*) ;

int
FUNC_1(struct ahc_softc *VAR_3, u_int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = 0;
 if ((VAR_3->flags & VAR_0) == 0)
  VAR_6 = VAR_1;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_6, "aic7xxx", VAR_3);
 if (VAR_5 == 0)
  VAR_3->platform_data->irq = VAR_4;

 return (-VAR_5);
}
