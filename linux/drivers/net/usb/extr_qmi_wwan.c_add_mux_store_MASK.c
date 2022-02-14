
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; int data; } ;
struct qmi_wwan_state {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 struct usbnet* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct usbnet*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct usbnet *VAR_7 = FUNC_2(FUNC_9(VAR_3));
 struct qmi_wwan_state *VAR_8 = (void *)&VAR_7->data;
 u8 VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_5, 0, &VAR_9))
  return -VAR_1;


 if (VAR_9 < 1 || VAR_9 > 254)
  return -VAR_1;

 if (!FUNC_7())
  return FUNC_6();

 if (FUNC_4(VAR_7, VAR_9)) {
  FUNC_1(VAR_7->net, "mux_id already present\n");
  VAR_10 = -VAR_1;
  goto err;
 }


 if (FUNC_3(VAR_7->net)) {
  FUNC_1(VAR_7->net, "Cannot change a running device\n");
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_10 = FUNC_5(VAR_7->net, VAR_9);
 if (!VAR_10) {
  VAR_8->flags |= VAR_2;
  VAR_10 = VAR_6;
 }
err:
 FUNC_8();
 return VAR_10;
}
