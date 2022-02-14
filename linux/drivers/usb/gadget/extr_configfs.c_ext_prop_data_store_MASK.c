
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ci_parent; } ;
struct usb_os_desc_ext_prop {char* data; size_t data_len; scalar_t__ type; TYPE_1__ item; } ;
struct usb_os_desc {size_t ext_prop_len; scalar_t__ opts_mutex; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct usb_os_desc* FUNC_4 (int ) ;
 struct usb_os_desc_ext_prop* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct usb_os_desc_ext_prop *VAR_8 = FUNC_5(VAR_5);
 struct usb_os_desc *VAR_9 = FUNC_4(VAR_8->item.ci_parent);
 char *VAR_10;
 size_t VAR_11 = VAR_7;

 if (VAR_6[VAR_7 - 1] == '\n' || VAR_6[VAR_7 - 1] == '\0')
  --VAR_7;
 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 if (VAR_9->opts_mutex)
  FUNC_2(VAR_9->opts_mutex);
 FUNC_0(VAR_8->data);
 VAR_8->data = VAR_10;
 VAR_9->ext_prop_len -= VAR_8->data_len;
 VAR_8->data_len = VAR_7;
 VAR_9->ext_prop_len += VAR_8->data_len;
 if (VAR_8->type == VAR_2 ||
     VAR_8->type == VAR_3 ||
     VAR_8->type == VAR_4) {
  VAR_9->ext_prop_len -= VAR_8->data_len;
  VAR_8->data_len <<= 1;
  VAR_8->data_len += 2;
  VAR_9->ext_prop_len += VAR_8->data_len;
 }
 if (VAR_9->opts_mutex)
  FUNC_3(VAR_9->opts_mutex);
 return VAR_11;
}
