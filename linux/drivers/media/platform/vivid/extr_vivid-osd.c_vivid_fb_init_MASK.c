
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int video_buffer_size; int fb_info; int * video_vbase; int video_pbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vivid_dev*) ;
 int FUNC_5 (struct vivid_dev*) ;
 int FUNC_6 (struct vivid_dev*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct vivid_dev *VAR_6)
{
 int VAR_7;

 VAR_6->video_buffer_size = VAR_4 * VAR_5 * 2;
 VAR_6->video_vbase = FUNC_0(VAR_6->video_buffer_size, VAR_3 | VAR_2);
 if (VAR_6->video_vbase == ((void*)0))
  return -VAR_1;
 VAR_6->video_pbase = FUNC_3(VAR_6->video_vbase);

 FUNC_1("Framebuffer at 0x%lx, mapped to 0x%p, size %dk\n",
   VAR_6->video_pbase, VAR_6->video_vbase,
   VAR_6->video_buffer_size / 1024);


 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7) {
  FUNC_6(VAR_6);
  return VAR_7;
 }

 FUNC_4(VAR_6);


 if (FUNC_2(&VAR_6->fb_info) < 0) {
  FUNC_6(VAR_6);
  return -VAR_0;
 }


 FUNC_7(&VAR_6->fb_info);
 return 0;

}
