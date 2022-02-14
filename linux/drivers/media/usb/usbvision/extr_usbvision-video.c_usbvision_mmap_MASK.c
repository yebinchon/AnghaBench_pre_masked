
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; size_t vm_pgoff; } ;
struct usb_usbvision {size_t num_frames; TYPE_1__* frame; int max_frame_size; } ;
struct file {int dummy; } ;
struct TYPE_2__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct usb_usbvision*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct usb_usbvision* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_10, struct vm_area_struct *VAR_11)
{
 unsigned long VAR_12 = VAR_11->vm_end - VAR_11->vm_start,
  VAR_13 = VAR_11->vm_start;
 void *VAR_14;
 u32 VAR_15;
 struct usb_usbvision *VAR_16 = FUNC_3(VAR_10);

 FUNC_1(VAR_0, "mmap");

 if (!FUNC_2(VAR_16))
  return -VAR_2;

 if (!(VAR_11->vm_flags & VAR_9) ||
     VAR_12 != FUNC_0(VAR_16->max_frame_size)) {
  return -VAR_3;
 }

 for (VAR_15 = 0; VAR_15 < VAR_16->num_frames; VAR_15++) {
  if (((FUNC_0(VAR_16->max_frame_size)*VAR_15) >> VAR_4) ==
      VAR_11->vm_pgoff)
   break;
 }
 if (VAR_15 == VAR_16->num_frames) {
  FUNC_1(VAR_0,
         "mmap: user supplied mapping address is out of range");
  return -VAR_3;
 }


 VAR_11->vm_flags |= VAR_8 | VAR_7 | VAR_6;

 VAR_14 = VAR_16->frame[VAR_15].data;
 while (VAR_12 > 0) {
  if (FUNC_4(VAR_11, VAR_13, FUNC_5(VAR_14))) {
   FUNC_1(VAR_0, "mmap: vm_insert_page failed");
   return -VAR_1;
  }
  VAR_13 += VAR_5;
  VAR_14 += VAR_5;
  VAR_12 -= VAR_5;
 }

 return 0;
}
