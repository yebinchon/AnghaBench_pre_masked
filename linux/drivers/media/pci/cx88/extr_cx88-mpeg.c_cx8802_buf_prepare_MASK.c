
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct sg_table {int sgl; } ;
struct cx88_riscmem {int dma; scalar_t__ cpu; int size; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct cx88_buffer {TYPE_1__ vb; struct cx88_riscmem risc; } ;
struct cx8802_dev {int ts_packet_size; int ts_packet_count; int pci; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cx88_riscmem*,int ,int,int,int ) ;
 int FUNC_1 (struct cx88_riscmem*,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 struct sg_table* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;

int FUNC_6(struct vb2_queue *VAR_1, struct cx8802_dev *VAR_2,
         struct cx88_buffer *VAR_3)
{
 int VAR_4 = VAR_2->ts_packet_size * VAR_2->ts_packet_count;
 struct sg_table *VAR_5 = FUNC_3(&VAR_3->vb.vb2_buf, 0);
 struct cx88_riscmem *VAR_6 = &VAR_3->risc;
 int VAR_7;

 if (FUNC_4(&VAR_3->vb.vb2_buf, 0) < VAR_4)
  return -VAR_0;
 FUNC_5(&VAR_3->vb.vb2_buf, 0, VAR_4);

 VAR_7 = FUNC_0(VAR_2->pci, VAR_6, VAR_5->sgl,
      VAR_2->ts_packet_size, VAR_2->ts_packet_count, 0);
 if (VAR_7) {
  if (VAR_6->cpu)
   FUNC_2(VAR_2->pci, VAR_6->size,
         VAR_6->cpu, VAR_6->dma);
  FUNC_1(VAR_6, 0, sizeof(*VAR_6));
  return VAR_7;
 }
 return 0;
}
