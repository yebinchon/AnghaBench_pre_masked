
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vm_area_struct {int vm_pgoff; struct omapfb2_mem_region* vm_private_data; int * vm_ops; int vm_page_prot; } ;
struct omapfb_info {struct omapfb2_mem_region* region; } ;
struct omapfb2_mem_region {int map_count; } ;
struct fb_fix_screeninfo {int smem_len; } ;
struct fb_info {struct fb_fix_screeninfo fix; } ;


 int FUNC_0 (char*,unsigned long,int ,int) ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct omapfb2_mem_region* FUNC_3 (struct omapfb2_mem_region*) ;
 unsigned long FUNC_4 (struct omapfb_info*) ;
 int FUNC_5 (struct omapfb2_mem_region*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_2, struct vm_area_struct *VAR_3)
{
 struct omapfb_info *VAR_4 = FUNC_1(VAR_2);
 struct fb_fix_screeninfo *VAR_5 = &VAR_2->fix;
 struct omapfb2_mem_region *VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_4->region);

 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = VAR_5->smem_len;

 FUNC_0("user mmap region start %lx, len %d, off %lx\n", VAR_7, VAR_8,
   VAR_3->vm_pgoff << VAR_0);

 VAR_3->vm_page_prot = FUNC_6(VAR_3->vm_page_prot);
 VAR_3->vm_ops = &VAR_1;
 VAR_3->vm_private_data = VAR_6;

 VAR_9 = FUNC_7(VAR_3, VAR_7, VAR_8);
 if (VAR_9)
  goto error;


 FUNC_2(&VAR_6->map_count);

 FUNC_5(VAR_6);

 return 0;

error:
 FUNC_5(VAR_4->region);

 return VAR_9;
}
