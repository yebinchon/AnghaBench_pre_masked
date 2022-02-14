
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {struct urb** isoc_urbs; int udev; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct urb*,int ) ;
 int FUNC_2 (struct usbtv*) ;
 int FUNC_3 (struct usbtv*) ;
 int FUNC_4 (struct usbtv*) ;
 struct urb* FUNC_5 (struct usbtv*) ;
 int FUNC_6 (struct usbtv*) ;

__attribute__((used)) static int FUNC_7(struct usbtv *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_3(VAR_3);

 VAR_5 = FUNC_0(VAR_3->udev, 0, 0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3->udev, 0, 1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct urb *VAR_6;

  VAR_6 = FUNC_5(VAR_3);
  if (VAR_6 == ((void*)0)) {
   VAR_5 = -VAR_0;
   goto start_fail;
  }
  VAR_3->isoc_urbs[VAR_4] = VAR_6;

  VAR_5 = FUNC_1(VAR_6, VAR_1);
  if (VAR_5 < 0)
   goto start_fail;
 }

 return 0;

start_fail:
 FUNC_6(VAR_3);
 return VAR_5;
}
