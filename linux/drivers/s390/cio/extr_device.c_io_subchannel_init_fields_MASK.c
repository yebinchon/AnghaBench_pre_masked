
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pam; int pom; int pim; int dev; } ;
struct TYPE_5__ {TYPE_1__ pmcw; } ;
struct TYPE_6__ {int sch_no; int ssid; } ;
struct subchannel {int opm; int lpm; TYPE_2__ schib; TYPE_3__ schid; int isc; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct subchannel*) ;
 scalar_t__ FUNC_2 (TYPE_3__) ;
 int FUNC_3 (struct subchannel*) ;

__attribute__((used)) static void FUNC_4(struct subchannel *VAR_2)
{
 if (FUNC_2(VAR_2->schid))
  VAR_2->opm = 0xff;
 else
  VAR_2->opm = FUNC_1(VAR_2);
 VAR_2->lpm = VAR_2->schib.pmcw.pam & VAR_2->opm;
 VAR_2->isc = FUNC_2(VAR_2->schid) ? VAR_0 : VAR_1;

 FUNC_0(6, "Detected device %04x on subchannel 0.%x.%04X"
        " - PIM = %02X, PAM = %02X, POM = %02X\n",
        VAR_2->schib.pmcw.dev, VAR_2->schid.ssid,
        VAR_2->schid.sch_no, VAR_2->schib.pmcw.pim,
        VAR_2->schib.pmcw.pam, VAR_2->schib.pmcw.pom);

 FUNC_3(VAR_2);
}
