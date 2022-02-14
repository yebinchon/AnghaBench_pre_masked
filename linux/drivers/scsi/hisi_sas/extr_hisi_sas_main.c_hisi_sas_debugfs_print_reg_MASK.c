
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct hisi_sas_debugfs_reg {int count; int lu; int base_off; } ;


 char* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,int,int ,...) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_0, const void *VAR_1,
           struct seq_file *VAR_2)
{
 const struct hisi_sas_debugfs_reg *VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  int VAR_5 = VAR_4 * 4;
  const char *VAR_6;

  VAR_6 = FUNC_0(VAR_5, VAR_3->base_off,
          VAR_3->lu);

  if (VAR_6)
   FUNC_1(VAR_2, "0x%08x 0x%08x %s\n", VAR_5,
       VAR_0[VAR_4], VAR_6);
  else
   FUNC_1(VAR_2, "0x%08x 0x%08x\n", VAR_5,
       VAR_0[VAR_4]);
 }
}
