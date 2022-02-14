
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_os_desc {int ext_prop; int ext_compat_id; } ;
struct usb_function_instance {int group; int (* free_func_inst ) (struct usb_function_instance*) ;} ;
struct net_device {int dummy; } ;
struct f_ncm_opts {struct usb_function_instance func_inst; struct net_device* ncm_interf_group; struct usb_os_desc ncm_os_desc; struct net_device* net; int lock; int ncm_ext_compat_id; } ;
typedef struct net_device config_group ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (struct net_device*) ;
 struct usb_function_instance* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_4 (int *,char*,int *) ;
 struct net_device* FUNC_5 () ;
 int FUNC_6 (struct f_ncm_opts*) ;
 struct f_ncm_opts* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct usb_function_instance*) ;
 int VAR_3 ;
 struct net_device* FUNC_10 (int *,int,struct usb_os_desc**,char**,int ) ;

__attribute__((used)) static struct usb_function_instance *FUNC_11(void)
{
 struct f_ncm_opts *VAR_4;
 struct usb_os_desc *VAR_5[1];
 char *VAR_6[1];
 struct config_group *VAR_7;

 VAR_4 = FUNC_7(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_1(-VAR_0);
 VAR_4->ncm_os_desc.ext_compat_id = VAR_4->ncm_ext_compat_id;

 FUNC_8(&VAR_4->lock);
 VAR_4->func_inst.free_func_inst = FUNC_9;
 VAR_4->net = FUNC_5();
 if (FUNC_3(VAR_4->net)) {
  struct net_device *VAR_8 = VAR_4->net;
  FUNC_6(VAR_4);
  return FUNC_0(VAR_8);
 }
 FUNC_2(&VAR_4->ncm_os_desc.ext_prop);

 VAR_5[0] = &VAR_4->ncm_os_desc;
 VAR_6[0] = "ncm";

 FUNC_4(&VAR_4->func_inst.group, "", &VAR_3);
 VAR_7 =
  FUNC_10(&VAR_4->func_inst.group, 1, VAR_5,
            VAR_6, VAR_2);
 if (FUNC_3(VAR_7)) {
  FUNC_9(&VAR_4->func_inst);
  return FUNC_0(VAR_7);
 }
 VAR_4->ncm_interf_group = VAR_7;

 return &VAR_4->func_inst;
}
