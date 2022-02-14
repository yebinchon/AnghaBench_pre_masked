
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {TYPE_1__* wuie_host_info; } ;
struct wusb_ckhdid {int data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct wusb_ckhdid CHID; } ;


 int FUNC_0 (char*,char*,int ) ;
 struct wusbhc* FUNC_1 (struct device*) ;
 struct wusb_ckhdid VAR_0 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct wusbhc *VAR_4 = FUNC_1(VAR_1);
 const struct wusb_ckhdid *VAR_5;

 if (VAR_4->wuie_host_info != ((void*)0))
  VAR_5 = &VAR_4->wuie_host_info->CHID;
 else
  VAR_5 = &VAR_0;

 return FUNC_0(VAR_3, "%16ph\n", VAR_5->data);
}
