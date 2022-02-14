
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int const,int const,int const,int const,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2, int VAR_3)
{
 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_1, "Status   Inst    Data      PC\n");
 } else {
  const u32 *VAR_4 = VAR_2;

  FUNC_0(VAR_1, "  %02x   %08x %08x %08x\n",
      VAR_4[3] & 0xff, VAR_4[2], VAR_4[1], VAR_4[0]);
  FUNC_0(VAR_1, "  %02x   %02x%06x %02x%06x %02x%06x\n",
      (VAR_4[6] >> 8) & 0xff, VAR_4[6] & 0xff, VAR_4[5] >> 8,
      VAR_4[5] & 0xff, VAR_4[4] >> 8, VAR_4[4] & 0xff, VAR_4[3] >> 8);
  FUNC_0(VAR_1, "  %02x   %04x%04x %04x%04x %04x%04x\n",
      (VAR_4[9] >> 16) & 0xff, VAR_4[9] & 0xffff, VAR_4[8] >> 16,
      VAR_4[8] & 0xffff, VAR_4[7] >> 16, VAR_4[7] & 0xffff,
      VAR_4[6] >> 16);
 }
 return 0;
}
