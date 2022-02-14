
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int const,int const,int const,int const,int const,int const,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3, int VAR_4)
{
 const u32 *VAR_5 = VAR_3;

 if (VAR_3 == VAR_1) {
  FUNC_1(VAR_2, "Cntl ID DataBE   Addr                 Data\n");
 } else if (VAR_4 < VAR_0) {
  FUNC_0(VAR_2, " %02x  %02x  %04x  %08x %08x%08x%08x%08x\n",
      (VAR_5[5] >> 22) & 0xff, (VAR_5[5] >> 16) & 0x3f,
      VAR_5[5] & 0xffff, VAR_5[4], VAR_5[3], VAR_5[2], VAR_5[1], VAR_5[0]);
 } else {
  if (VAR_4 == VAR_0)
   FUNC_1(VAR_2, "\nCntl ID               Data\n");
  FUNC_0(VAR_2, " %02x  %02x %08x%08x%08x%08x\n",
      (VAR_5[4] >> 6) & 0xff, VAR_5[4] & 0x3f,
      VAR_5[3], VAR_5[2], VAR_5[1], VAR_5[0]);
 }
 return 0;
}
