
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_function {char* name; int bind_deactivated; int free_func; int setup; int disable; int set_alt; int get_alt; int unbind; int bind; } ;
struct TYPE_4__ {struct uvc_descriptor_header const* const* ss_streaming; struct uvc_descriptor_header const* const* hs_streaming; struct uvc_descriptor_header const* const* fs_streaming; int ss_control; int fs_control; } ;
struct TYPE_3__ {int mutex; } ;
struct uvc_device {struct usb_function func; TYPE_2__ desc; int state; TYPE_1__ video; } ;
struct uvc_descriptor_header {int dummy; } ;
struct usb_function_instance {int dummy; } ;
struct f_uvc_opts {int lock; int refcnt; struct uvc_descriptor_header const* const* ss_streaming; struct uvc_descriptor_header const* const* hs_streaming; struct uvc_descriptor_header const* const* fs_streaming; int ss_control; int fs_control; struct uvc_descriptor_header** uvc_ss_streaming_cls; struct uvc_descriptor_header** uvc_hs_streaming_cls; struct uvc_descriptor_header** uvc_fs_streaming_cls; } ;


 int VAR_0 ;
 struct usb_function* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct f_uvc_opts* FUNC_1 (struct usb_function_instance*) ;
 struct uvc_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct usb_function *FUNC_6(struct usb_function_instance *VAR_10)
{
 struct uvc_device *VAR_11;
 struct f_uvc_opts *VAR_12;
 struct uvc_descriptor_header **VAR_13;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_11->video.mutex);
 VAR_11->state = VAR_2;
 VAR_12 = FUNC_1(VAR_10);

 FUNC_4(&VAR_12->lock);
 if (VAR_12->uvc_fs_streaming_cls) {
  VAR_13 = VAR_12->uvc_fs_streaming_cls;
  VAR_12->fs_streaming =
   (const struct uvc_descriptor_header * const *)VAR_13;
 }
 if (VAR_12->uvc_hs_streaming_cls) {
  VAR_13 = VAR_12->uvc_hs_streaming_cls;
  VAR_12->hs_streaming =
   (const struct uvc_descriptor_header * const *)VAR_13;
 }
 if (VAR_12->uvc_ss_streaming_cls) {
  VAR_13 = VAR_12->uvc_ss_streaming_cls;
  VAR_12->ss_streaming =
   (const struct uvc_descriptor_header * const *)VAR_13;
 }

 VAR_11->desc.fs_control = VAR_12->fs_control;
 VAR_11->desc.ss_control = VAR_12->ss_control;
 VAR_11->desc.fs_streaming = VAR_12->fs_streaming;
 VAR_11->desc.hs_streaming = VAR_12->hs_streaming;
 VAR_11->desc.ss_streaming = VAR_12->ss_streaming;
 ++VAR_12->refcnt;
 FUNC_5(&VAR_12->lock);


 VAR_11->func.name = "uvc";
 VAR_11->func.bind = VAR_4;
 VAR_11->func.unbind = VAR_9;
 VAR_11->func.get_alt = VAR_6;
 VAR_11->func.set_alt = VAR_7;
 VAR_11->func.disable = VAR_5;
 VAR_11->func.setup = VAR_8;
 VAR_11->func.free_func = VAR_3;
 VAR_11->func.bind_deactivated = 1;

 return &VAR_11->func;
}
