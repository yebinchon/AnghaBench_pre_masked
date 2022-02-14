
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct seq_file {struct brcms_pub* private; } ;
struct brcms_pub {TYPE_4__* wlc; } ;
struct brcms_hardware {int sromrev; TYPE_6__* band; int boardflags2; int boardflags; int boardrev; struct bcma_device* d11core; } ;
struct TYPE_8__ {int rev; } ;
struct bcma_device {TYPE_2__ id; struct bcma_bus* bus; } ;
struct TYPE_9__ {int vendor; int type; } ;
struct TYPE_7__ {int pkg; int rev; int id; } ;
struct bcma_bus {TYPE_3__ boardinfo; TYPE_1__ chipinfo; } ;
struct TYPE_12__ {TYPE_5__* pi; int phyrev; int phytype; int radiorev; } ;
struct TYPE_11__ {int ana_rev; } ;
struct TYPE_10__ {int ucode_rev; struct brcms_hardware* hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static
int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct brcms_pub *VAR_3 = VAR_1->private;
 struct brcms_hardware *VAR_4 = VAR_3->wlc->hw;
 struct bcma_device *VAR_5 = VAR_4->d11core;
 struct bcma_bus *VAR_6 = VAR_5->bus;
 char VAR_7[VAR_0];

 FUNC_1(VAR_1, "chipnum 0x%x\n"
     "chiprev 0x%x\n"
     "chippackage 0x%x\n"
     "corerev 0x%x\n"
     "boardid 0x%x\n"
     "boardvendor 0x%x\n"
     "boardrev %s\n"
     "boardflags 0x%x\n"
     "boardflags2 0x%x\n"
     "ucoderev 0x%x\n"
     "radiorev 0x%x\n"
     "phytype 0x%x\n"
     "phyrev 0x%x\n"
     "anarev 0x%x\n"
     "nvramrev %d\n",
     VAR_6->chipinfo.id, VAR_6->chipinfo.rev, VAR_6->chipinfo.pkg,
     VAR_5->id.rev, VAR_6->boardinfo.type, VAR_6->boardinfo.vendor,
     FUNC_0(VAR_4->boardrev, VAR_7),
     VAR_3->wlc->hw->boardflags, VAR_3->wlc->hw->boardflags2,
     VAR_3->wlc->ucode_rev, VAR_4->band->radiorev,
     VAR_4->band->phytype, VAR_4->band->phyrev, VAR_4->band->pi->ana_rev,
     VAR_4->sromrev);
 return 0;
}
