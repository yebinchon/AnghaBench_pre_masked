
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_info {int video_rbase; int video_buffer_size; int video_pbase; int video_vbase; int fb_start_aligned_physaddr; int fb_end_aligned_physaddr; int wc_cookie; } ;
struct ivtv {int base_addr; int dec_mem; int serialize_lock; struct osd_info* osd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct ivtv*) ;
 scalar_t__ FUNC_4 (struct ivtv*,int*,int*) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ivtv *VAR_3)
{
 struct osd_info *VAR_4 = VAR_3->osd_info;

 int VAR_5 = 31;

 FUNC_6(&VAR_3->serialize_lock);
 if (FUNC_3(VAR_3)) {
  FUNC_7(&VAR_3->serialize_lock);
  FUNC_0("Failed to initialize ivtv\n");
  return -VAR_1;
 }
 FUNC_7(&VAR_3->serialize_lock);

 if (FUNC_4(VAR_3, &VAR_4->video_rbase,
     &VAR_4->video_buffer_size) < 0) {
  FUNC_0("Firmware failed to respond\n");
  return -VAR_0;
 }




 VAR_4->video_buffer_size = 1704960;

 VAR_4->video_pbase = VAR_3->base_addr + VAR_2 + VAR_4->video_rbase;
 VAR_4->video_vbase = VAR_3->dec_mem + VAR_4->video_rbase;

 if (!VAR_4->video_vbase) {
  FUNC_0("abort, video memory 0x%x @ 0x%lx isn't mapped!\n",
       VAR_4->video_buffer_size, VAR_4->video_pbase);
  return -VAR_0;
 }

 FUNC_1("Framebuffer at 0x%lx, mapped to 0x%p, size %dk\n",
   VAR_4->video_pbase, VAR_4->video_vbase,
   VAR_4->video_buffer_size / 1024);

 while (!(VAR_4->video_buffer_size & (1 << VAR_5)))
  VAR_5--;
 VAR_5++;
 VAR_4->fb_start_aligned_physaddr = VAR_4->video_pbase & ~((1 << VAR_5) - 1);
 VAR_4->fb_end_aligned_physaddr = VAR_4->video_pbase + VAR_4->video_buffer_size;
 VAR_4->fb_end_aligned_physaddr += (1 << VAR_5) - 1;
 VAR_4->fb_end_aligned_physaddr &= ~((1 << VAR_5) - 1);
 VAR_4->wc_cookie = FUNC_2(VAR_4->fb_start_aligned_physaddr,
      VAR_4->fb_end_aligned_physaddr -
      VAR_4->fb_start_aligned_physaddr);

 FUNC_5(VAR_4->video_vbase, 0, VAR_4->video_buffer_size);

 return 0;
}
