
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_chain {int dummy; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;
struct file {int dummy; } ;


 long VAR_0 ;


 long FUNC_0 (struct uvc_video_chain*,void*) ;
 long FUNC_1 (struct uvc_video_chain*,void*) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, void *VAR_2, bool VAR_3,
         unsigned int VAR_4, void *VAR_5)
{
 struct uvc_fh *VAR_6 = VAR_2;
 struct uvc_video_chain *VAR_7 = VAR_6->chain;

 switch (VAR_4) {

 case 129:
  return FUNC_0(VAR_7, VAR_5);

 case 128:
  return FUNC_1(VAR_7, VAR_5);

 default:
  return -VAR_0;
 }
}
