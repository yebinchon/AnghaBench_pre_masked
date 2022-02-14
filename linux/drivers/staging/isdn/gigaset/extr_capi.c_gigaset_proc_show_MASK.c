
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct capi_ctr* private; } ;
struct cardstate {int channels; int mode; int mstate; TYPE_1__* bcs; scalar_t__ cidmode; scalar_t__ isdn_up; scalar_t__ connected; scalar_t__ running; scalar_t__ onechannel; int * fwver; scalar_t__ gotfwver; int myid; int dev; } ;
struct capi_ctr {int name; struct cardstate* driverdata; } ;
struct TYPE_2__ {char* corrupted; char* trans_down; char* trans_up; char* chstate; int proto2; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct capi_ctr *VAR_2 = VAR_0->private;
 struct cardstate *VAR_3 = VAR_2->driverdata;
 char *VAR_4;
 int VAR_5;

 FUNC_2(VAR_0, "%-16s %s\n", "name", VAR_2->name);
 FUNC_2(VAR_0, "%-16s %s %s\n", "dev",
     FUNC_0(VAR_3->dev), FUNC_1(VAR_3->dev));
 FUNC_2(VAR_0, "%-16s %d\n", "id", VAR_3->myid);
 if (VAR_3->gotfwver)
  FUNC_2(VAR_0, "%-16s %d.%d.%d.%d\n", "firmware",
      VAR_3->fwver[0], VAR_3->fwver[1], VAR_3->fwver[2], VAR_3->fwver[3]);
 FUNC_2(VAR_0, "%-16s %d\n", "channels", VAR_3->channels);
 FUNC_2(VAR_0, "%-16s %s\n", "onechannel", VAR_3->onechannel ? "yes" : "no");

 switch (VAR_3->mode) {
 case 128:
  VAR_4 = "unknown";
  break;
 case 130:
  VAR_4 = "config";
  break;
 case 129:
  VAR_4 = "Unimodem";
  break;
 case 131:
  VAR_4 = "CID";
  break;
 default:
  VAR_4 = "??";
 }
 FUNC_2(VAR_0, "%-16s %s\n", "mode", VAR_4);

 switch (VAR_3->mstate) {
 case 132:
  VAR_4 = "uninitialized";
  break;
 case 137:
  VAR_4 = "init";
  break;
 case 136:
  VAR_4 = "locked";
  break;
 case 133:
  VAR_4 = "shutdown";
  break;
 case 134:
  VAR_4 = "recover";
  break;
 case 135:
  VAR_4 = "ready";
  break;
 default:
  VAR_4 = "??";
 }
 FUNC_2(VAR_0, "%-16s %s\n", "mstate", VAR_4);

 FUNC_2(VAR_0, "%-16s %s\n", "running", VAR_3->running ? "yes" : "no");
 FUNC_2(VAR_0, "%-16s %s\n", "connected", VAR_3->connected ? "yes" : "no");
 FUNC_2(VAR_0, "%-16s %s\n", "isdn_up", VAR_3->isdn_up ? "yes" : "no");
 FUNC_2(VAR_0, "%-16s %s\n", "cidmode", VAR_3->cidmode ? "yes" : "no");

 for (VAR_5 = 0; VAR_5 < VAR_3->channels; VAR_5++) {
  FUNC_2(VAR_0, "[%d]%-13s %d\n", VAR_5, "corrupted",
      VAR_3->bcs[VAR_5].corrupted);
  FUNC_2(VAR_0, "[%d]%-13s %d\n", VAR_5, "trans_down",
      VAR_3->bcs[VAR_5].trans_down);
  FUNC_2(VAR_0, "[%d]%-13s %d\n", VAR_5, "trans_up",
      VAR_3->bcs[VAR_5].trans_up);
  FUNC_2(VAR_0, "[%d]%-13s %d\n", VAR_5, "chstate",
      VAR_3->bcs[VAR_5].chstate);
  switch (VAR_3->bcs[VAR_5].proto2) {
  case 140:
   VAR_4 = "bitsync";
   break;
  case 139:
   VAR_4 = "HDLC";
   break;
  case 138:
   VAR_4 = "voice";
   break;
  default:
   VAR_4 = "??";
  }
  FUNC_2(VAR_0, "[%d]%-13s %s\n", VAR_5, "proto2", VAR_4);
 }
 return 0;
}
