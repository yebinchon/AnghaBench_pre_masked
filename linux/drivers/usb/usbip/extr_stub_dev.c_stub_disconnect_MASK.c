
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; int portnum; int parent; } ;
struct usb_dev_state {int dummy; } ;
struct stub_device {int udev; } ;
struct bus_id_priv {int shutdown_busid; scalar_t__ status; int busid_lock; int * sdev; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct stub_device* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 struct bus_id_priv* FUNC_6 (char const*) ;
 int FUNC_7 (struct bus_id_priv*) ;
 int FUNC_8 (struct bus_id_priv*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct stub_device*) ;
 int FUNC_12 (int ,int ,struct usb_dev_state*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct usb_device *VAR_3)
{
 struct stub_device *VAR_4;
 const char *VAR_5 = FUNC_4(&VAR_3->dev);
 struct bus_id_priv *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_3->dev, "Enter disconnect\n");

 VAR_6 = FUNC_6(VAR_5);
 if (!VAR_6) {
  FUNC_0();
  return;
 }

 VAR_4 = FUNC_3(&VAR_3->dev);


 if (!VAR_4) {
  FUNC_2(&VAR_3->dev, "could not get device");

  FUNC_7(VAR_6);
  return;
 }

 FUNC_5(&VAR_3->dev, ((void*)0));


 FUNC_7(VAR_6);






 VAR_7 = FUNC_12(VAR_3->parent, VAR_3->portnum,
      (struct usb_dev_state *) VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_3->dev, "unable to release port\n");
  return;
 }


 if (FUNC_14(VAR_2))
  return;


 FUNC_9(&VAR_6->busid_lock);
 if (!VAR_6->shutdown_busid)
  VAR_6->shutdown_busid = 1;

 FUNC_10(&VAR_6->busid_lock);


 FUNC_8(VAR_6);

 FUNC_13(VAR_4->udev);


 FUNC_9(&VAR_6->busid_lock);

 VAR_6->sdev = ((void*)0);
 FUNC_11(VAR_4);

 if (VAR_6->status == VAR_1)
  VAR_6->status = VAR_0;

 FUNC_10(&VAR_6->busid_lock);
 return;
}
