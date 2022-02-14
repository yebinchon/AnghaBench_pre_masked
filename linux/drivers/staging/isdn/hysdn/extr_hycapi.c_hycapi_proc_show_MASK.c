
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct capi_ctr* private; } ;
struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_3__ {char* iobase; char* irq; int brdtype; } ;
typedef TYPE_1__ hysdn_card ;
struct TYPE_4__ {char* cardname; char** version; TYPE_1__* card; } ;
typedef TYPE_2__ hycapictrl_info ;







 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, void *VAR_4)
{
 struct capi_ctr *VAR_5 = VAR_3->private;
 hycapictrl_info *VAR_6 = (hycapictrl_info *)(VAR_5->driverdata);
 hysdn_card *VAR_7 = VAR_6->card;
 char *VAR_8;

 FUNC_0(VAR_3, "%-16s %s\n", "name", VAR_6->cardname);
 FUNC_0(VAR_3, "%-16s 0x%x\n", "io", VAR_7->iobase);
 FUNC_0(VAR_3, "%-16s %d\n", "irq", VAR_7->irq);

 switch (VAR_7->brdtype) {
 case 129: VAR_8 = "HYSDN Hycard"; break;
 case 131: VAR_8 = "HYSDN Ergo2"; break;
 case 130: VAR_8 = "HYSDN Metro4"; break;
 case 132: VAR_8 = "HYSDN Champ2"; break;
 case 128: VAR_8 = "HYSDN Plexus30"; break;
 default: VAR_8 = "???"; break;
 }
 FUNC_0(VAR_3, "%-16s %s\n", "type", VAR_8);
 if ((VAR_8 = VAR_6->version[VAR_1]) != ((void*)0))
  FUNC_0(VAR_3, "%-16s %s\n", "ver_driver", VAR_8);
 if ((VAR_8 = VAR_6->version[VAR_0]) != ((void*)0))
  FUNC_0(VAR_3, "%-16s %s\n", "ver_cardtype", VAR_8);
 if ((VAR_8 = VAR_6->version[VAR_2]) != ((void*)0))
  FUNC_0(VAR_3, "%-16s %s\n", "ver_serial", VAR_8);

 FUNC_0(VAR_3, "%-16s %s\n", "cardname", VAR_6->cardname);

 return 0;
}
