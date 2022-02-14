
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct device {int dummy; } ;
struct cio2_queue {size_t bufs_first; int frame_sequence; int bufs_queued; struct cio2_buffer** bufs; struct cio2_fbpt_entry* fbpt; } ;
struct TYPE_8__ {unsigned int num_of_bytes; } ;
struct TYPE_7__ {int ctrl; } ;
struct cio2_fbpt_entry {TYPE_2__ second_entry; TYPE_1__ first_entry; } ;
struct cio2_device {TYPE_5__* pci_dev; struct cio2_queue* cur_queue; } ;
struct TYPE_12__ {TYPE_3__* planes; int timestamp; int index; } ;
struct TYPE_10__ {TYPE_6__ vb2_buf; int sequence; int field; } ;
struct cio2_buffer {TYPE_4__ vbb; } ;
struct TYPE_11__ {struct device dev; } ;
struct TYPE_9__ {unsigned int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cio2_device*,struct cio2_fbpt_entry* const) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,char*,unsigned int) ;
 int FUNC_6 (struct device*,char*,unsigned int,...) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_6__*,int ) ;

__attribute__((used)) static void FUNC_9(struct cio2_device *VAR_6, unsigned int VAR_7)
{
 struct device *VAR_8 = &VAR_6->pci_dev->dev;
 struct cio2_queue *VAR_9 = VAR_6->cur_queue;
 int VAR_10 = 0;
 u64 VAR_11 = FUNC_7();

 if (VAR_7 >= VAR_3) {
  FUNC_5(VAR_8, "bad DMA channel %i\n", VAR_7);
  return;
 }


 do {
  struct cio2_fbpt_entry *const VAR_12 =
   &VAR_9->fbpt[VAR_9->bufs_first * VAR_2];
  struct cio2_buffer *VAR_13;

  if (VAR_12->first_entry.ctrl & VAR_0)
   break;

  VAR_13 = VAR_9->bufs[VAR_9->bufs_first];
  if (VAR_13) {
   unsigned int VAR_14 = VAR_12[1].second_entry.num_of_bytes;

   VAR_9->bufs[VAR_9->bufs_first] = ((void*)0);
   FUNC_0(&VAR_9->bufs_queued);
   FUNC_4(&VAR_6->pci_dev->dev,
    "buffer %i done\n", VAR_13->vbb.vb2_buf.index);

   VAR_13->vbb.vb2_buf.timestamp = VAR_11;
   VAR_13->vbb.field = VAR_4;
   VAR_13->vbb.sequence = FUNC_2(&VAR_9->frame_sequence);
   if (VAR_13->vbb.vb2_buf.planes[0].length != VAR_14)
    FUNC_6(VAR_8, "buffer length is %d received %d\n",
      VAR_13->vbb.vb2_buf.planes[0].length,
      VAR_14);
   FUNC_8(&VAR_13->vbb.vb2_buf, VAR_5);
  }
  FUNC_1(&VAR_9->frame_sequence);
  FUNC_3(VAR_6, VAR_12);
  VAR_9->bufs_first = (VAR_9->bufs_first + 1) % VAR_1;
  VAR_10++;
 } while (1);

 if (VAR_10 == 0)
  FUNC_6(&VAR_6->pci_dev->dev,
    "no ready buffers found on DMA channel %u\n",
    VAR_7);
}
