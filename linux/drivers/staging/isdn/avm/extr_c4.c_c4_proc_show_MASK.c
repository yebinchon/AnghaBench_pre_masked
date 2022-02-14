
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {struct capi_ctr* private; } ;
struct TYPE_4__ {scalar_t__ manu; } ;
struct capi_ctr {TYPE_1__ profile; scalar_t__ driverdata; } ;
struct TYPE_5__ {char** version; char* cardname; TYPE_3__* card; } ;
typedef TYPE_2__ avmctrl_info ;
struct TYPE_6__ {char* name; char* port; char* irq; char* membase; int cardtype; } ;
typedef TYPE_3__ avmcard ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, void *VAR_4)
{
 struct capi_ctr *VAR_5 = VAR_3->private;
 avmctrl_info *VAR_6 = (avmctrl_info *)(VAR_5->driverdata);
 avmcard *VAR_7 = VAR_6->card;
 u8 VAR_8;
 char *VAR_9;

 FUNC_0(VAR_3, "%-16s %s\n", "name", VAR_7->name);
 FUNC_0(VAR_3, "%-16s 0x%x\n", "io", VAR_7->port);
 FUNC_0(VAR_3, "%-16s %d\n", "irq", VAR_7->irq);
 FUNC_0(VAR_3, "%-16s 0x%lx\n", "membase", VAR_7->membase);
 switch (VAR_7->cardtype) {
 case 136: VAR_9 = "B1 ISA"; break;
 case 135: VAR_9 = "B1 PCI"; break;
 case 134: VAR_9 = "B1 PCMCIA"; break;
 case 131: VAR_9 = "M1"; break;
 case 130: VAR_9 = "M2"; break;
 case 129: VAR_9 = "T1 ISA (HEMA)"; break;
 case 128: VAR_9 = "T1 PCI"; break;
 case 132: VAR_9 = "C4"; break;
 case 133: VAR_9 = "C2"; break;
 default: VAR_9 = "???"; break;
 }
 FUNC_0(VAR_3, "%-16s %s\n", "type", VAR_9);
 if ((VAR_9 = VAR_6->version[VAR_1]) != ((void*)0))
  FUNC_0(VAR_3, "%-16s %s\n", "ver_driver", VAR_9);
 if ((VAR_9 = VAR_6->version[VAR_0]) != ((void*)0))
  FUNC_0(VAR_3, "%-16s %s\n", "ver_cardtype", VAR_9);
 if ((VAR_9 = VAR_6->version[VAR_2]) != ((void*)0))
  FUNC_0(VAR_3, "%-16s %s\n", "ver_serial", VAR_9);

 if (VAR_7->cardtype != 131) {
  VAR_8 = ((u8 *)(VAR_5->profile.manu))[3];
  if (VAR_8)
   FUNC_0(VAR_3, "%-16s%s%s%s%s%s%s%s\n",
       "protocol",
       (VAR_8 & 0x01) ? " DSS1" : "",
       (VAR_8 & 0x02) ? " CT1" : "",
       (VAR_8 & 0x04) ? " VN3" : "",
       (VAR_8 & 0x08) ? " NI1" : "",
       (VAR_8 & 0x10) ? " AUSTEL" : "",
       (VAR_8 & 0x20) ? " ESS" : "",
       (VAR_8 & 0x40) ? " 1TR6" : ""
    );
 }
 if (VAR_7->cardtype != 131) {
  VAR_8 = ((u8 *)(VAR_5->profile.manu))[5];
  if (VAR_8)
   FUNC_0(VAR_3, "%-16s%s%s%s%s\n",
       "linetype",
       (VAR_8 & 0x01) ? " point to point" : "",
       (VAR_8 & 0x02) ? " point to multipoint" : "",
       (VAR_8 & 0x08) ? " leased line without D-channel" : "",
       (VAR_8 & 0x04) ? " leased line with D-channel" : ""
    );
 }
 FUNC_0(VAR_3, "%-16s %s\n", "cardname", VAR_6->cardname);

 return 0;
}
