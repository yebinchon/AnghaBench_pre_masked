
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; } ;
struct net_device {int dummy; } ;
struct f_eem_opts {struct usb_function_instance func_inst; struct net_device* net; int lock; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (struct net_device*) ;
 struct usb_function_instance* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_4 () ;
 int FUNC_5 (struct f_eem_opts*) ;
 struct f_eem_opts* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct usb_function_instance *FUNC_8(void)
{
 struct f_eem_opts *VAR_4;

 VAR_4 = FUNC_6(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_1(-VAR_0);
 FUNC_7(&VAR_4->lock);
 VAR_4->func_inst.free_func_inst = VAR_2;
 VAR_4->net = FUNC_4();
 if (FUNC_2(VAR_4->net)) {
  struct net_device *VAR_5 = VAR_4->net;
  FUNC_5(VAR_4);
  return FUNC_0(VAR_5);
 }

 FUNC_3(&VAR_4->func_inst.group, "", &VAR_3);

 return &VAR_4->func_inst;
}
