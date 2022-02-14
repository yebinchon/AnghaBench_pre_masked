
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, u32 VAR_1, char *VAR_2)
{
 FUNC_0(VAR_0, "%s\t0x%08X\t", VAR_2, VAR_1);

 if (!VAR_1)
  goto done;

 FUNC_0(VAR_0, "H: init=%d repeat=%d - ", VAR_1 & 0x3FF, (VAR_1 >> 12) & 7);
 VAR_1 >>= 16;
 FUNC_0(VAR_0, "V: init=%d repeat=%d", VAR_1 & 0x3FF, (VAR_1 >> 12) & 7);

done:
 FUNC_1(VAR_0, '\n');
}
