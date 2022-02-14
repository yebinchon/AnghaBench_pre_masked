
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
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ath6kl_usb *VAR_6,
      u8 VAR_7, u16 VAR_8, u16 VAR_9, void *VAR_10,
      u32 VAR_11)
{
 u8 *VAR_12 = ((void*)0);
 int VAR_13;

 if (VAR_11 > 0) {
  VAR_12 = FUNC_2(VAR_11, VAR_1);
  if (VAR_12 == ((void*)0))
   return -VAR_0;
 }


 VAR_13 = FUNC_4(VAR_6->udev,
     FUNC_5(VAR_6->udev, 0),
     VAR_7,
     VAR_3 | VAR_5 |
     VAR_4, VAR_8, VAR_9, VAR_12,
     VAR_11, 2 * VAR_2);

 if (VAR_13 < 0) {
  FUNC_0("Failed to read usb control message: %d\n", VAR_13);
  FUNC_1(VAR_12);
  return VAR_13;
 }

 FUNC_3((u8 *) VAR_10, VAR_12, VAR_11);

 FUNC_1(VAR_12);

 return 0;
}
