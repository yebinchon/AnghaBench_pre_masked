
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; scalar_t__ vm_pgoff; unsigned long vm_end; TYPE_1__* vm_ops; struct comedi_buf_map* vm_private_data; } ;
struct file {struct comedi_file* private_data; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_file {struct comedi_device* dev; } ;
struct comedi_device {int attach_lock; int class_dev; int attached; } ;
struct comedi_buf_page {int virt_addr; int dma_addr; } ;
struct comedi_buf_map {int n_pages; scalar_t__ dma_dir; struct comedi_buf_page* page_list; int dma_hw_dev; } ;
struct comedi_async {unsigned long prealloc_bufsz; } ;
struct TYPE_2__ {int (* open ) (struct vm_area_struct*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct comedi_buf_map* FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_buf_map*) ;
 struct comedi_subdevice* FUNC_2 (struct file*) ;
 struct comedi_subdevice* FUNC_3 (struct file*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct vm_area_struct*,int ,int ,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long,unsigned long,int,int ) ;
 int FUNC_10 (struct vm_area_struct*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 struct comedi_file *VAR_11 = VAR_9->private_data;
 struct comedi_device *VAR_12 = VAR_11->dev;
 struct comedi_subdevice *VAR_13;
 struct comedi_async *VAR_14;
 struct comedi_buf_map *VAR_15 = ((void*)0);
 struct comedi_buf_page *VAR_16;
 unsigned long VAR_17 = VAR_10->vm_start;
 unsigned long VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21 = 0;







 if (!FUNC_6(&VAR_12->attach_lock))
  return -VAR_1;

 if (!VAR_12->attached) {
  FUNC_4(VAR_12->class_dev, "no driver attached\n");
  VAR_21 = -VAR_4;
  goto done;
 }

 if (VAR_10->vm_flags & VAR_7)
  VAR_13 = FUNC_3(VAR_9);
 else
  VAR_13 = FUNC_2(VAR_9);
 if (!VAR_13) {
  VAR_21 = -VAR_3;
  goto done;
 }

 VAR_14 = VAR_13->async;
 if (!VAR_14) {
  VAR_21 = -VAR_3;
  goto done;
 }

 if (VAR_10->vm_pgoff != 0) {
  FUNC_4(VAR_12->class_dev, "mmap() offset must be 0.\n");
  VAR_21 = -VAR_3;
  goto done;
 }

 VAR_18 = VAR_10->vm_end - VAR_10->vm_start;
 if (VAR_18 > VAR_14->prealloc_bufsz) {
  VAR_21 = -VAR_2;
  goto done;
 }
 if (FUNC_7(VAR_18)) {
  VAR_21 = -VAR_2;
  goto done;
 }

 VAR_19 = FUNC_13(VAR_10);


 VAR_15 = FUNC_0(VAR_13);
 if (!VAR_15 || VAR_19 > VAR_15->n_pages) {
  VAR_21 = -VAR_3;
  goto done;
 }
 if (VAR_15->dma_dir != VAR_0) {




  VAR_16 = &VAR_15->page_list[0];
  VAR_21 = FUNC_5(VAR_15->dma_hw_dev, VAR_10, VAR_16->virt_addr,
        VAR_16->dma_addr, VAR_19 * VAR_6);
 } else {
  for (VAR_20 = 0; VAR_20 < VAR_19; ++VAR_20) {
   unsigned long VAR_22;

   VAR_16 = &VAR_15->page_list[VAR_20];
   VAR_22 = FUNC_8(FUNC_12(VAR_16->virt_addr));
   VAR_21 = FUNC_9(VAR_10, VAR_17, VAR_22, VAR_6,
       VAR_5);
   if (VAR_21)
    break;

   VAR_17 += VAR_6;
  }
 }

 if (VAR_21 == 0) {
  VAR_10->vm_ops = &VAR_8;
  VAR_10->vm_private_data = VAR_15;

  VAR_10->vm_ops->open(VAR_10);
 }

done:
 FUNC_11(&VAR_12->attach_lock);
 FUNC_1(VAR_15);
 return VAR_21;
}
