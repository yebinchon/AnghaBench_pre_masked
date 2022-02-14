
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ath6kl_usb {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ath6kl_usb *VAR_5,
       u8 VAR_6, u16 VAR_7, u16 VAR_8, void *VAR_9,
       u32 VAR_10)
{
 u8 *VAR_11 = ((void*)0);
 int VAR_12;

 if (VAR_10 > 0) {
  VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_1);
  if (VAR_11 == ((void*)0))
   return -VAR_0;
 }


 VAR_12 = FUNC_3(VAR_5->udev,
         FUNC_4(VAR_5->udev, 0),
         VAR_6,
         VAR_2 | VAR_4 |
         VAR_3, VAR_7, VAR_8, VAR_11,
         VAR_10, 1000);

 if (VAR_12 < 0) {
  FUNC_0("Failed to submit usb control message: %d\n", VAR_12);
  FUNC_1(VAR_11);
  return VAR_12;
 }

 FUNC_1(VAR_11);

 return 0;
}
