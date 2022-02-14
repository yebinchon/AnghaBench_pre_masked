
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct brcmf_rev_info {int nvramrev; int anarev; int phyrev; int phytype; int bus; int ucoderev; int driverrev; int boardrev; int boardvendor; int boardid; int corerev; int chippkg; int chipname; int radiorev; int deviceid; int vendorid; } ;
struct brcmf_bus {TYPE_1__* drvr; } ;
struct TYPE_2__ {int clmver; struct brcmf_rev_info revinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 struct brcmf_bus* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 struct brcmf_bus *VAR_4 = FUNC_2(VAR_2->private);
 struct brcmf_rev_info *VAR_5 = &VAR_4->drvr->revinfo;
 char VAR_6[VAR_1];
 char VAR_7[VAR_0];

 FUNC_3(VAR_2, "vendorid: 0x%04x\n", VAR_5->vendorid);
 FUNC_3(VAR_2, "deviceid: 0x%04x\n", VAR_5->deviceid);
 FUNC_3(VAR_2, "radiorev: %s\n", FUNC_1(VAR_5->radiorev, VAR_6));
 FUNC_3(VAR_2, "chip: %s\n", VAR_5->chipname);
 FUNC_3(VAR_2, "chippkg: %u\n", VAR_5->chippkg);
 FUNC_3(VAR_2, "corerev: %u\n", VAR_5->corerev);
 FUNC_3(VAR_2, "boardid: 0x%04x\n", VAR_5->boardid);
 FUNC_3(VAR_2, "boardvendor: 0x%04x\n", VAR_5->boardvendor);
 FUNC_3(VAR_2, "boardrev: %s\n", FUNC_0(VAR_5->boardrev, VAR_7));
 FUNC_3(VAR_2, "driverrev: %s\n", FUNC_1(VAR_5->driverrev, VAR_6));
 FUNC_3(VAR_2, "ucoderev: %u\n", VAR_5->ucoderev);
 FUNC_3(VAR_2, "bus: %u\n", VAR_5->bus);
 FUNC_3(VAR_2, "phytype: %u\n", VAR_5->phytype);
 FUNC_3(VAR_2, "phyrev: %u\n", VAR_5->phyrev);
 FUNC_3(VAR_2, "anarev: %u\n", VAR_5->anarev);
 FUNC_3(VAR_2, "nvramrev: %08x\n", VAR_5->nvramrev);

 FUNC_3(VAR_2, "clmver: %s\n", VAR_4->drvr->clmver);

 return 0;
}
