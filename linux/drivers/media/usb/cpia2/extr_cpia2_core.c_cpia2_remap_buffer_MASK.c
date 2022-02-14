
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; } ;
struct camera_data {unsigned long frame_size; unsigned long num_frames; int mmapped; scalar_t__ frame_buffer; int vdev; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct camera_data *VAR_6, struct vm_area_struct *VAR_7)
{
 const char *VAR_8 = (const char *)VAR_7->vm_start;
 unsigned long VAR_9 = VAR_7->vm_end-VAR_7->vm_start;
 unsigned long VAR_10 = VAR_7->vm_pgoff << VAR_4;
 unsigned long VAR_11 = (unsigned long) VAR_8;
 unsigned long VAR_12, VAR_13;

 FUNC_0("mmap offset:%ld size:%ld\n", VAR_10, VAR_9);

 if (!FUNC_3(&VAR_6->vdev))
  return -VAR_2;

 if (VAR_9 > VAR_6->frame_size*VAR_6->num_frames ||
     (VAR_10 % VAR_6->frame_size) != 0 ||
     (VAR_10+VAR_9 > VAR_6->frame_size*VAR_6->num_frames))
  return -VAR_1;

 VAR_13 = ((unsigned long) (VAR_6->frame_buffer)) + VAR_10;
 while (VAR_9 > 0) {
  VAR_12 = FUNC_1(VAR_13);
  if (FUNC_2(VAR_7, VAR_11, VAR_12 >> VAR_4, VAR_5, VAR_3))
   return -VAR_0;
  VAR_11 += VAR_5;
  VAR_13 += VAR_5;
  if (VAR_9 > VAR_5)
   VAR_9 -= VAR_5;
  else
   VAR_9 = 0;
 }

 VAR_6->mmapped = 1;
 return 0;
}
