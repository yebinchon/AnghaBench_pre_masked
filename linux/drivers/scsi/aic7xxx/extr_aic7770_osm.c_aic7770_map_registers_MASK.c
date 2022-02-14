
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int ioport; } ;
struct ahc_softc {TYPE_1__ bsh; int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;

int
FUNC_1(struct ahc_softc *VAR_3, u_int VAR_4)
{



 if (!FUNC_0(VAR_4, VAR_0, "aic7xxx"))
  return (VAR_2);
 VAR_3->tag = VAR_1;
 VAR_3->bsh.ioport = VAR_4;
 return (0);
}
