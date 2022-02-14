
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_vbus_deviceinfo {int infostrs; int drvname; int * devtype; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct visor_vbus_deviceinfo *VAR_0,
          struct seq_file *VAR_1, int VAR_2)
{

 if (!FUNC_0(VAR_0->devtype[0]))
  return;
 if (VAR_2 >= 0)
  FUNC_1(VAR_1, "[%d]", VAR_2);
 else

  FUNC_2(VAR_1, "   ");




 FUNC_1(VAR_1, "%-*.*s ", (int)sizeof(VAR_0->devtype),
     (int)sizeof(VAR_0->devtype), VAR_0->devtype);
 FUNC_1(VAR_1, "%-*.*s ", (int)sizeof(VAR_0->drvname),
     (int)sizeof(VAR_0->drvname), VAR_0->drvname);
 FUNC_1(VAR_1, "%.*s\n", (int)sizeof(VAR_0->infostrs),
     VAR_0->infostrs);
}
