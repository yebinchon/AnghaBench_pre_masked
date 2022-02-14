
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; int data; } ;
struct qmi_wwan_state {int flags; } ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int ,char*) ;
 struct usbnet* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct net_device* FUNC_4 (struct usbnet*,int ) ;
 int FUNC_5 (struct usbnet*) ;
 int FUNC_6 (struct net_device*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct usbnet *VAR_7 = FUNC_2(FUNC_10(VAR_3));
 struct qmi_wwan_state *VAR_8 = (void *)&VAR_7->data;
 struct net_device *VAR_9;
 u8 VAR_10;
 int VAR_11 = 0;

 if (FUNC_0(VAR_5, 0, &VAR_10))
  return -VAR_1;

 if (!FUNC_8())
  return FUNC_7();


 if (FUNC_3(VAR_7->net)) {
  FUNC_1(VAR_7->net, "Cannot change a running device\n");
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_9 = FUNC_4(VAR_7, VAR_10);
 if (!VAR_9) {
  FUNC_1(VAR_7->net, "mux_id not present\n");
  VAR_11 = -VAR_1;
  goto err;
 }
 FUNC_6(VAR_9, ((void*)0));

 if (!FUNC_5(VAR_7))
  VAR_8->flags &= ~VAR_2;
 VAR_11 = VAR_6;
err:
 FUNC_9();
 return VAR_11;
}
