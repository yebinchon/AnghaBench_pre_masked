
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int data; } ;
struct qmi_wwan_state {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct usbnet* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct usbnet *VAR_4 = FUNC_0(FUNC_2(VAR_1));
 struct qmi_wwan_state *VAR_5 = (void *)&VAR_4->data;

 return FUNC_1(VAR_3, "%c\n", VAR_5->flags & VAR_0 ? 'Y' : 'N');
}
