
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct genwqe_reg {int val; int idx; int addr; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct genwqe_reg *VAR_1,
     int VAR_2)
{
 unsigned int VAR_3;
 u32 VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = (VAR_1[VAR_3].val >> 32) & 0xffffffff;
  VAR_5 = (VAR_1[VAR_3].val) & 0xffffffff;

  FUNC_0(VAR_0, "  0x%08x 0x%08x 0x%08x 0x%08x EXT_ERR_REC\n",
      VAR_1[VAR_3].addr, VAR_1[VAR_3].idx, VAR_4, VAR_5);
 }
}
