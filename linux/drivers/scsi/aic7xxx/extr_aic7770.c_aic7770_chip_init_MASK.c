
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int busspd; int bustime; } ;
struct TYPE_4__ {TYPE_1__ aic7770_softc; } ;
struct ahc_softc {TYPE_2__ bus_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ahc_softc *VAR_6)
{
 FUNC_2(VAR_6, VAR_2, VAR_6->bus_softc.aic7770_softc.busspd);
 FUNC_2(VAR_6, VAR_3, VAR_6->bus_softc.aic7770_softc.bustime);
 FUNC_2(VAR_6, VAR_5, FUNC_1(VAR_6, VAR_5) & ~VAR_0);
 FUNC_2(VAR_6, VAR_1, VAR_4);
 return (FUNC_0(VAR_6));
}
