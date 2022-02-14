
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_tmode_tstate {int dummy; } ;
struct ahc_softc {int dummy; } ;
struct ahc_initiator_tinfo {int dummy; } ;
struct ahc_devinfo {int target; int our_scsiid; int channel; } ;


 int VAR_0 ;
 struct ahc_initiator_tinfo* FUNC_0 (struct ahc_softc*,int ,int ,int ,struct ahc_tmode_tstate**) ;
 int FUNC_1 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_tmode_tstate*,struct ahc_initiator_tinfo*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_1, struct ahc_devinfo *VAR_2)
{
 struct ahc_initiator_tinfo *VAR_3;
 struct ahc_tmode_tstate *VAR_4;

 VAR_3 = FUNC_0(VAR_1,
     VAR_2->channel,
     VAR_2->our_scsiid,
     VAR_2->target,
     &VAR_4);
 FUNC_1(VAR_1, VAR_2, VAR_4,
          VAR_3, VAR_0);
}
