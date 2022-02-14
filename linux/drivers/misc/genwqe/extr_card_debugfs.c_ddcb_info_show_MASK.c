
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct genwqe_dev* private; } ;
struct ddcb_queue {long long ddcb_max; struct ddcb* ddcb_vaddr; int ddcb_next; int ddcb_act; int IO_QUEUE_LRW; int IO_QUEUE_ERRCNTS; int IO_QUEUE_WTIME; int IO_QUEUE_OFFSET; int IO_QUEUE_WRAP; int IO_QUEUE_INITSQN; int IO_QUEUE_SEGMENT; int IO_QUEUE_STATUS; int IO_QUEUE_CONFIG; int wait_on_busy; int return_on_busy; int ddcbs_completed; int ddcbs_max_in_flight; int ddcbs_in_flight; scalar_t__ ddcb_daddr; } ;
struct genwqe_dev {int irqs_processed; struct ddcb_queue queue; } ;
struct ddcb {int cmd; int priv_64; int shi; int hsi; int seqnum_16; int retc_16; } ;


 long long VAR_0 ;
 int FUNC_0 (struct genwqe_dev*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,long long,long long,...) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct genwqe_dev *VAR_3 = VAR_1->private;
 unsigned int VAR_4;
 struct ddcb_queue *VAR_5;
 struct ddcb *VAR_6;

 VAR_5 = &VAR_3->queue;
 FUNC_4(VAR_1, "DDCB QUEUE:\n");
 FUNC_3(VAR_1, "  ddcb_max:            %d\n"
     "  ddcb_daddr:          %016llx - %016llx\n"
     "  ddcb_vaddr:          %p\n"
     "  ddcbs_in_flight:     %u\n"
     "  ddcbs_max_in_flight: %u\n"
     "  ddcbs_completed:     %u\n"
     "  return_on_busy:      %u\n"
     "  wait_on_busy:        %u\n"
     "  irqs_processed:      %u\n",
     VAR_5->ddcb_max, (long long)VAR_5->ddcb_daddr,
     (long long)VAR_5->ddcb_daddr +
     (VAR_5->ddcb_max * VAR_0),
     VAR_5->ddcb_vaddr, VAR_5->ddcbs_in_flight,
     VAR_5->ddcbs_max_in_flight, VAR_5->ddcbs_completed,
     VAR_5->return_on_busy, VAR_5->wait_on_busy,
     VAR_3->irqs_processed);


 FUNC_3(VAR_1, "  0x%08x 0x%016llx IO_QUEUE_CONFIG\n"
     "  0x%08x 0x%016llx IO_QUEUE_STATUS\n"
     "  0x%08x 0x%016llx IO_QUEUE_SEGMENT\n"
     "  0x%08x 0x%016llx IO_QUEUE_INITSQN\n"
     "  0x%08x 0x%016llx IO_QUEUE_WRAP\n"
     "  0x%08x 0x%016llx IO_QUEUE_OFFSET\n"
     "  0x%08x 0x%016llx IO_QUEUE_WTIME\n"
     "  0x%08x 0x%016llx IO_QUEUE_ERRCNTS\n"
     "  0x%08x 0x%016llx IO_QUEUE_LRW\n",
     VAR_5->IO_QUEUE_CONFIG,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_CONFIG),
     VAR_5->IO_QUEUE_STATUS,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_STATUS),
     VAR_5->IO_QUEUE_SEGMENT,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_SEGMENT),
     VAR_5->IO_QUEUE_INITSQN,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_INITSQN),
     VAR_5->IO_QUEUE_WRAP,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_WRAP),
     VAR_5->IO_QUEUE_OFFSET,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_OFFSET),
     VAR_5->IO_QUEUE_WTIME,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_WTIME),
     VAR_5->IO_QUEUE_ERRCNTS,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_ERRCNTS),
     VAR_5->IO_QUEUE_LRW,
     FUNC_0(VAR_3, VAR_5->IO_QUEUE_LRW));

 FUNC_3(VAR_1, "DDCB list (ddcb_act=%d/ddcb_next=%d):\n",
     VAR_5->ddcb_act, VAR_5->ddcb_next);

 VAR_6 = VAR_5->ddcb_vaddr;
 for (VAR_4 = 0; VAR_4 < VAR_5->ddcb_max; VAR_4++) {
  FUNC_3(VAR_1, "  %-3d: RETC=%03x SEQ=%04x HSI/SHI=%02x/%02x ",
      VAR_4, FUNC_1(VAR_6->retc_16),
      FUNC_1(VAR_6->seqnum_16),
      VAR_6->hsi, VAR_6->shi);
  FUNC_3(VAR_1, "PRIV=%06llx CMD=%02x\n",
      FUNC_2(VAR_6->priv_64), VAR_6->cmd);
  VAR_6++;
 }
 return 0;
}
