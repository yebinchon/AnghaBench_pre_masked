
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct wusb_dev {int devconnect_acked_work; struct wusbhc* wusbhc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct wusb_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wusb_dev*) ;
 int VAR_1 ;

__attribute__((used)) static struct wusb_dev *FUNC_3(struct wusbhc *VAR_2)
{
 struct wusb_dev *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  goto err;

 VAR_3->wusbhc = VAR_2;

 FUNC_0(&VAR_3->devconnect_acked_work, VAR_1);

 return VAR_3;
err:
 FUNC_2(VAR_3);
 return ((void*)0);
}
