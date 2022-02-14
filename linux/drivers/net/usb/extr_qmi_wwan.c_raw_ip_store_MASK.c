
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; int data; } ;
struct qmi_wwan_state {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct usbnet* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char const*,int*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_5, struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct usbnet *VAR_9 = FUNC_2(FUNC_10(VAR_5));
 struct qmi_wwan_state *VAR_10 = (void *)&VAR_9->data;
 bool VAR_11;
 int VAR_12;

 if (FUNC_9(VAR_7, &VAR_11))
  return -VAR_1;


 if (VAR_11 == (VAR_10->flags & VAR_4))
  return VAR_8;

 if (!FUNC_7())
  return FUNC_6();


 if (FUNC_3(VAR_9->net)) {
  FUNC_1(VAR_9->net, "Cannot change a running device\n");
  VAR_12 = -VAR_0;
  goto err;
 }


 VAR_12 = FUNC_0(VAR_3, VAR_9->net);
 VAR_12 = FUNC_4(VAR_12);
 if (VAR_12) {
  FUNC_1(VAR_9->net, "Type change was refused\n");
  goto err;
 }

 if (VAR_11)
  VAR_10->flags |= VAR_4;
 else
  VAR_10->flags &= ~VAR_4;
 FUNC_5(VAR_9->net);
 FUNC_0(VAR_2, VAR_9->net);
 VAR_12 = VAR_8;
err:
 FUNC_8();
 return VAR_12;
}
