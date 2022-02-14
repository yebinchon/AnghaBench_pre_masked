
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int smem_len; int smem_start; } ;
struct TYPE_4__ {int * screen_base; TYPE_1__ fix; } ;
struct pxafb_info {int video_mem_size; int * video_mem; TYPE_2__ fb; int video_mem_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pxafb_info *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3->video_mem_size);

 VAR_3->video_mem = FUNC_1(VAR_4, VAR_1 | VAR_2);
 if (VAR_3->video_mem == ((void*)0))
  return -VAR_0;

 VAR_3->video_mem_phys = FUNC_2(VAR_3->video_mem);
 VAR_3->video_mem_size = VAR_4;

 VAR_3->fb.fix.smem_start = VAR_3->video_mem_phys;
 VAR_3->fb.fix.smem_len = VAR_3->video_mem_size;
 VAR_3->fb.screen_base = VAR_3->video_mem;

 return VAR_3->video_mem ? 0 : -VAR_0;
}
