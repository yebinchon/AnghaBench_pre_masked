
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_os_desc_ext_prop {scalar_t__ data_len; scalar_t__ name_len; int name; int entry; } ;
struct usb_os_desc {scalar_t__ opts_mutex; int ext_prop_len; int ext_prop_count; } ;
struct config_item {int dummy; } ;
struct config_group {int cg_item; } ;


 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct usb_os_desc* FUNC_5 (int *) ;
 struct usb_os_desc_ext_prop* FUNC_6 (struct config_item*) ;

__attribute__((used)) static void FUNC_7(struct config_group *VAR_0, struct config_item *VAR_1)
{
 struct usb_os_desc_ext_prop *VAR_2 = FUNC_6(VAR_1);
 struct usb_os_desc *VAR_3 = FUNC_5(&VAR_0->cg_item);

 if (VAR_3->opts_mutex)
  FUNC_3(VAR_3->opts_mutex);
 FUNC_2(&VAR_2->entry);
 --VAR_3->ext_prop_count;
 FUNC_1(VAR_2->name);
 VAR_3->ext_prop_len -= (VAR_2->name_len + VAR_2->data_len + 14);
 if (VAR_3->opts_mutex)
  FUNC_4(VAR_3->opts_mutex);
 FUNC_0(VAR_1);
}
