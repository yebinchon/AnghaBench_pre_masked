
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenfb_info {int irq; int page; } ;
struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int nodename; int devicetype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,struct xenfb_info*) ;
 int FUNC_1 (int,struct xenfb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xenbus_device*,int*) ;
 int FUNC_4 (struct xenbus_device*,int,char*) ;
 int FUNC_5 (struct xenbus_device*,int) ;
 int FUNC_6 (struct xenbus_transaction,int ,char*,char*,...) ;
 int FUNC_7 (struct xenbus_device*,int ) ;
 int FUNC_8 (struct xenbus_transaction,int) ;
 int FUNC_9 (struct xenbus_transaction*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct xenbus_device *VAR_4,
     struct xenfb_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct xenbus_transaction VAR_9;

 VAR_6 = FUNC_3(VAR_4, &VAR_7);
 if (VAR_6)
  return VAR_6;
 VAR_8 = FUNC_0(VAR_7, VAR_3,
     0, VAR_4->devicetype, VAR_5);
 if (VAR_8 < 0) {
  FUNC_5(VAR_4, VAR_7);
  FUNC_4(VAR_4, VAR_6, "bind_evtchn_to_irqhandler");
  return VAR_8;
 }
 again:
 VAR_6 = FUNC_9(&VAR_9);
 if (VAR_6) {
  FUNC_4(VAR_4, VAR_6, "starting transaction");
  goto unbind_irq;
 }
 VAR_6 = FUNC_6(VAR_9, VAR_4->nodename, "page-ref", "%lu",
       FUNC_2(VAR_5->page));
 if (VAR_6)
  goto error_xenbus;
 VAR_6 = FUNC_6(VAR_9, VAR_4->nodename, "event-channel", "%u",
       VAR_7);
 if (VAR_6)
  goto error_xenbus;
 VAR_6 = FUNC_6(VAR_9, VAR_4->nodename, "protocol", "%s",
       VAR_1);
 if (VAR_6)
  goto error_xenbus;
 VAR_6 = FUNC_6(VAR_9, VAR_4->nodename, "feature-update", "1");
 if (VAR_6)
  goto error_xenbus;
 VAR_6 = FUNC_8(VAR_9, 0);
 if (VAR_6) {
  if (VAR_6 == -VAR_0)
   goto again;
  FUNC_4(VAR_4, VAR_6, "completing transaction");
  goto unbind_irq;
 }

 FUNC_7(VAR_4, VAR_2);
 VAR_5->irq = VAR_8;
 return 0;

 error_xenbus:
 FUNC_8(VAR_9, 1);
 FUNC_4(VAR_4, VAR_6, "writing xenstore");
 unbind_irq:
 FUNC_1(VAR_8, VAR_5);
 return VAR_6;
}
