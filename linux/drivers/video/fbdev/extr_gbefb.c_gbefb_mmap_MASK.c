
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_page_prot; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__* cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_8,
   struct vm_area_struct *VAR_9)
{
 unsigned long VAR_10 = VAR_9->vm_end - VAR_9->vm_start;
 unsigned long VAR_11 = VAR_9->vm_pgoff << VAR_2;
 unsigned long VAR_12;
 unsigned long VAR_13, VAR_14;
 u16 *VAR_15;


 if (VAR_9->vm_pgoff > (~0UL >> VAR_2))
  return -VAR_1;
 if (VAR_10 > VAR_6)
  return -VAR_1;
 if (VAR_11 > VAR_6 - VAR_10)
  return -VAR_1;
 VAR_15 = &VAR_7.cpu[VAR_11 >> VAR_4];
 VAR_12 = VAR_9->vm_start;
 VAR_11 &= VAR_3;


 do {
  VAR_13 = (((unsigned long) (*VAR_15)) << VAR_4) + VAR_11;
  if ((VAR_11 + VAR_10) < VAR_5)
   VAR_14 = VAR_10;
  else
   VAR_14 = VAR_5 - VAR_11;

  if (FUNC_2(VAR_9, VAR_12, VAR_13 >> VAR_2,
      VAR_14, VAR_9->vm_page_prot))
   return -VAR_0;

  VAR_11 = 0;
  VAR_10 -= VAR_14;
  VAR_12 += VAR_14;
  VAR_15++;
 } while (VAR_10);

 return 0;
}
