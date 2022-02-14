
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vm_area_struct {int vm_flags; unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; TYPE_5__* vm_mm; int * vm_ops; } ;
struct user_struct {int locked_vm; } ;
struct ring_buffer {scalar_t__ aux_pgoff; unsigned long aux_nr_pages; unsigned long nr_pages; long mmap_locked; long aux_mmap_locked; int mmap_count; int mmap_user; int aux_mmap_count; TYPE_2__* user_page; } ;
struct TYPE_9__ {int aux_watermark; int wakeup_watermark; scalar_t__ watermark; scalar_t__ inherit; } ;
struct perf_event {int cpu; TYPE_1__* pmu; int mmap_mutex; int mmap_count; TYPE_4__ attr; struct ring_buffer* rb; TYPE_3__* ctx; } ;
struct file {struct perf_event* private_data; } ;
struct TYPE_10__ {int pinned_vm; } ;
struct TYPE_8__ {int parent_ctx; } ;
struct TYPE_7__ {int aux_size; int aux_offset; } ;
struct TYPE_6__ {int (* event_mapped ) (struct perf_event*,TYPE_5__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (long,int *) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (long,int *) ;
 unsigned long FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 struct user_struct* FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 unsigned long FUNC_17 () ;
 scalar_t__ FUNC_18 (struct ring_buffer*) ;
 int FUNC_19 (struct perf_event*) ;
 int FUNC_20 (struct perf_event*) ;
 int VAR_13 ;
 scalar_t__ FUNC_21 () ;
 struct ring_buffer* FUNC_22 (unsigned long,int ,int,int) ;
 int FUNC_23 (struct ring_buffer*,struct perf_event*,scalar_t__,unsigned long,int ,int) ;
 scalar_t__ FUNC_24 (struct ring_buffer*) ;
 int FUNC_25 (struct perf_event*,struct ring_buffer*) ;
 unsigned long FUNC_26 (int ) ;
 int FUNC_27 (struct perf_event*,TYPE_5__*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_28(struct file *VAR_15, struct vm_area_struct *VAR_16)
{
 struct perf_event *VAR_17 = VAR_15->private_data;
 unsigned long VAR_18, VAR_19;
 struct user_struct *VAR_20 = FUNC_12();
 unsigned long VAR_21, VAR_22;
 struct ring_buffer *VAR_23 = ((void*)0);
 unsigned long VAR_24;
 unsigned long VAR_25;
 long VAR_26 = 0, VAR_27 = 0;
 int VAR_28 = 0, VAR_29 = 0;






 if (VAR_17->cpu == -1 && VAR_17->attr.inherit)
  return -VAR_1;

 if (!(VAR_16->vm_flags & VAR_11))
  return -VAR_1;

 VAR_24 = VAR_16->vm_end - VAR_16->vm_start;

 if (VAR_16->vm_pgoff == 0) {
  VAR_25 = (VAR_24 / VAR_5) - 1;
 } else {





  u64 VAR_30, VAR_31;

  if (!VAR_17->rb)
   return -VAR_1;

  VAR_25 = VAR_24 / VAR_5;

  FUNC_15(&VAR_17->mmap_mutex);
  VAR_28 = -VAR_1;

  VAR_23 = VAR_17->rb;
  if (!VAR_23)
   goto aux_unlock;

  VAR_30 = FUNC_0(VAR_23->user_page->aux_offset);
  VAR_31 = FUNC_0(VAR_23->user_page->aux_size);

  if (VAR_30 < FUNC_18(VAR_23) + VAR_5)
   goto aux_unlock;

  if (VAR_30 != VAR_16->vm_pgoff << VAR_4)
   goto aux_unlock;


  if (FUNC_24(VAR_23) && VAR_23->aux_pgoff != VAR_16->vm_pgoff)
   goto aux_unlock;

  if (VAR_31 != VAR_24 || VAR_31 != VAR_25 * VAR_5)
   goto aux_unlock;


  if (FUNC_24(VAR_23) && VAR_23->aux_nr_pages != VAR_25)
   goto aux_unlock;

  if (!FUNC_14(VAR_25))
   goto aux_unlock;

  if (!FUNC_7(&VAR_23->mmap_count))
   goto aux_unlock;

  if (FUNC_24(VAR_23)) {
   FUNC_6(&VAR_23->aux_mmap_count);
   VAR_28 = 0;
   goto unlock;
  }

  FUNC_10(&VAR_23->aux_mmap_count, 1);
  VAR_26 = VAR_25;

  goto accounting;
 }





 if (VAR_25 != 0 && !FUNC_14(VAR_25))
  return -VAR_1;

 if (VAR_24 != VAR_5 * (1 + VAR_25))
  return -VAR_1;

 FUNC_2(VAR_17->ctx->parent_ctx);
again:
 FUNC_15(&VAR_17->mmap_mutex);
 if (VAR_17->rb) {
  if (VAR_17->rb->nr_pages != VAR_25) {
   VAR_28 = -VAR_1;
   goto unlock;
  }

  if (!FUNC_7(&VAR_17->rb->mmap_count)) {





   FUNC_16(&VAR_17->mmap_mutex);
   goto again;
  }

  goto unlock;
 }

 VAR_26 = VAR_25 + 1;

accounting:
 VAR_19 = VAR_14 >> (VAR_4 - 10);




 VAR_19 *= FUNC_17();

 VAR_18 = FUNC_9(&VAR_20->locked_vm) + VAR_26;

 if (VAR_18 <= VAR_19) {

 } else if (FUNC_9(&VAR_20->locked_vm) >= VAR_19) {

  VAR_27 = VAR_26;
  VAR_26 = 0;
 } else {




  VAR_27 = VAR_18 - VAR_19;
  VAR_26 -= VAR_27;
 }

 VAR_22 = FUNC_26(VAR_7);
 VAR_22 >>= VAR_4;
 VAR_21 = FUNC_4(&VAR_16->vm_mm->pinned_vm) + VAR_27;

 if ((VAR_21 > VAR_22) && FUNC_21() &&
  !FUNC_11(VAR_0)) {
  VAR_28 = -VAR_3;
  goto unlock;
 }

 FUNC_1(!VAR_23 && VAR_17->rb);

 if (VAR_16->vm_flags & VAR_12)
  VAR_29 |= VAR_6;

 if (!VAR_23) {
  VAR_23 = FUNC_22(VAR_25,
         VAR_17->attr.watermark ? VAR_17->attr.wakeup_watermark : 0,
         VAR_17->cpu, VAR_29);

  if (!VAR_23) {
   VAR_28 = -VAR_2;
   goto unlock;
  }

  FUNC_10(&VAR_23->mmap_count, 1);
  VAR_23->mmap_user = FUNC_13();
  VAR_23->mmap_locked = VAR_27;

  FUNC_25(VAR_17, VAR_23);

  FUNC_19(VAR_17);
  FUNC_20(VAR_17);
 } else {
  VAR_28 = FUNC_23(VAR_23, VAR_17, VAR_16->vm_pgoff, VAR_25,
       VAR_17->attr.aux_watermark, VAR_29);
  if (!VAR_28)
   VAR_23->aux_mmap_locked = VAR_27;
 }

unlock:
 if (!VAR_28) {
  FUNC_8(VAR_26, &VAR_20->locked_vm);
  FUNC_3(VAR_27, &VAR_16->vm_mm->pinned_vm);

  FUNC_6(&VAR_17->mmap_count);
 } else if (VAR_23) {
  FUNC_5(&VAR_23->mmap_count);
 }
aux_unlock:
 FUNC_16(&VAR_17->mmap_mutex);





 VAR_16->vm_flags |= VAR_8 | VAR_10 | VAR_9;
 VAR_16->vm_ops = &VAR_13;

 if (VAR_17->pmu->event_mapped)
  VAR_17->pmu->event_mapped(VAR_17, VAR_16->vm_mm);

 return VAR_28;
}
