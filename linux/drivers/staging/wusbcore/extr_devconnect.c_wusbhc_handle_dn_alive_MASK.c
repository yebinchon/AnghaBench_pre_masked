
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int mutex; int dev; } ;
struct wusb_dev {int entry_ts; } ;


 int FUNC_0 (struct wusbhc*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wusb_dev* FUNC_4 (struct wusbhc*,int ) ;

__attribute__((used)) static void FUNC_5(struct wusbhc *VAR_1, u8 VAR_2)
{
 struct wusb_dev *VAR_3;

 FUNC_2(&VAR_1->mutex);
 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_1->dev, "ignoring DN_Alive from unconnected device %02x\n",
   VAR_2);
 } else {
  VAR_3->entry_ts = VAR_0;
  FUNC_0(VAR_1);
 }
 FUNC_3(&VAR_1->mutex);
}
