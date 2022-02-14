
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int ci_parent; } ;
struct usb_os_desc_ext_prop {scalar_t__ type; int data_len; TYPE_1__ item; } ;
struct usb_os_desc {scalar_t__ opts_mutex; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char const*,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct usb_os_desc* FUNC_3 (int ) ;
 struct usb_os_desc_ext_prop* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_8,
       const char *VAR_9, size_t VAR_10)
{
 struct usb_os_desc_ext_prop *VAR_11 = FUNC_4(VAR_8);
 struct usb_os_desc *VAR_12 = FUNC_3(VAR_11->item.ci_parent);
 u8 VAR_13;
 int VAR_14;

 if (VAR_12->opts_mutex)
  FUNC_1(VAR_12->opts_mutex);
 VAR_14 = FUNC_0(VAR_9, 0, &VAR_13);
 if (VAR_14)
  goto end;
 if (VAR_13 < VAR_4 || VAR_13 > VAR_7) {
  VAR_14 = -VAR_0;
  goto end;
 }

 if ((VAR_11->type == VAR_2 ||
     VAR_11->type == VAR_3 ||
     VAR_11->type == VAR_1) &&
     (VAR_13 == VAR_4 ||
     VAR_13 == VAR_5 ||
     VAR_13 == VAR_6))
  VAR_11->data_len <<= 1;
 else if ((VAR_11->type == VAR_4 ||
     VAR_11->type == VAR_5 ||
     VAR_11->type == VAR_6) &&
     (VAR_13 == VAR_2 ||
     VAR_13 == VAR_3 ||
     VAR_13 == VAR_1))
  VAR_11->data_len >>= 1;
 VAR_11->type = VAR_13;
 VAR_14 = VAR_10;

end:
 if (VAR_12->opts_mutex)
  FUNC_2(VAR_12->opts_mutex);
 return VAR_14;
}
