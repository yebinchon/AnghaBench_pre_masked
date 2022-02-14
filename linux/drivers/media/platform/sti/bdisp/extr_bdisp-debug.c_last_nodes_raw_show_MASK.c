
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct bdisp_dev* private; } ;
struct bdisp_node {scalar_t__ nip; } ;
struct TYPE_2__ {struct bdisp_node** copy_node; } ;
struct bdisp_dev {TYPE_1__ dbg; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct bdisp_dev *VAR_3 = VAR_1->private;
 struct bdisp_node *VAR_4;
 u32 *VAR_5;
 int VAR_6, VAR_7 = 0;

 if (!VAR_3->dbg.copy_node[0]) {
  FUNC_1(VAR_1, "No node built yet\n");
  return 0;
 }

 do {
  VAR_4 = VAR_3->dbg.copy_node[VAR_7];
  if (!VAR_4)
   break;

  FUNC_0(VAR_1, "--------\nNode %d:\n", VAR_7);
  VAR_5 = (u32 *)VAR_4;
  for (VAR_6 = 0; VAR_6 < sizeof(struct bdisp_node) / sizeof(u32); VAR_6++)
   FUNC_0(VAR_1, "0x%08X\n", *VAR_5++);
 } while ((++VAR_7 < VAR_0) && VAR_4->nip);

 return 0;
}
