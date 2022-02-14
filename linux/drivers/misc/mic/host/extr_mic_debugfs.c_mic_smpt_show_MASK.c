
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct mic_device* private; } ;
struct TYPE_3__ {int num_reg; } ;
struct mic_smpt_info {int smpt_lock; TYPE_2__* entry; TYPE_1__ info; } ;
struct mic_device {struct mic_smpt_info* smpt; int id; } ;
struct TYPE_4__ {int ref_count; int dma_addr; } ;


 int FUNC_0 (struct seq_file*,char*,char*,...) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct mic_device *VAR_3 = VAR_0->private;
 unsigned long VAR_4;

 FUNC_0(VAR_0, "MIC %-2d |%-10s| %-14s %-10s\n",
     VAR_3->id, "SMPT entry", "SW DMA addr", "RefCount");
 FUNC_1(VAR_0, "====================================================\n");

 if (VAR_3->smpt) {
  struct mic_smpt_info *VAR_5 = VAR_3->smpt;
  FUNC_2(&VAR_5->smpt_lock, VAR_4);
  for (VAR_2 = 0; VAR_2 < VAR_5->info.num_reg; VAR_2++) {
   FUNC_0(VAR_0, "%9s|%-10d| %-#14llx %-10lld\n",
       " ", VAR_2, VAR_5->entry[VAR_2].dma_addr,
       VAR_5->entry[VAR_2].ref_count);
  }
  FUNC_3(&VAR_5->smpt_lock, VAR_4);
 }
 FUNC_1(VAR_0, "====================================================\n");
 return 0;
}
