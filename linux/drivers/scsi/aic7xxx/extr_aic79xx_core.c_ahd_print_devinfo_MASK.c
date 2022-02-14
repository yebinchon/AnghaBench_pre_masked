
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dummy; } ;
struct ahd_devinfo {int lun; int target; } ;


 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (char*,int ,char,int ,int ) ;

void
FUNC_2(struct ahd_softc *VAR_0, struct ahd_devinfo *VAR_1)
{
 FUNC_1("%s:%c:%d:%d: ", FUNC_0(VAR_0), 'A',
        VAR_1->target, VAR_1->lun);
}
