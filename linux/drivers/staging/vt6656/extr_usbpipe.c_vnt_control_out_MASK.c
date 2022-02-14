
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct vnt_private {int usb_lock; int usb; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int,scalar_t__,scalar_t__,int *,scalar_t__,int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(struct vnt_private *VAR_6, u8 VAR_7, u16 VAR_8,
      u16 VAR_9, u16 VAR_10, u8 *VAR_11)
{
 int VAR_12 = 0;
 u8 *VAR_13;

 if (FUNC_4(VAR_0, &VAR_6->flags)) {
  VAR_12 = -VAR_1;
  goto end;
 }

 FUNC_2(&VAR_6->usb_lock);

 VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_4);
 if (!VAR_13) {
  VAR_12 = -VAR_3;
  goto end_unlock;
 }

 VAR_12 = FUNC_5(VAR_6->usb,
         FUNC_6(VAR_6->usb, 0),
         VAR_7, 0x40, VAR_8,
         VAR_9, VAR_13, VAR_10, VAR_5);

 FUNC_0(VAR_13);

 if (VAR_12 >= 0 && VAR_12 < (int)VAR_10)
  VAR_12 = -VAR_2;

end_unlock:
 FUNC_3(&VAR_6->usb_lock);
end:
 return VAR_12;
}
