
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ath10k_usb {int udev; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath10k_usb* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_6,
         u8 VAR_7, u16 VAR_8, u16 VAR_9, void *VAR_10,
         u32 VAR_11)
{
 struct ath10k_usb *VAR_12 = FUNC_0(VAR_6);
 u8 *VAR_13 = ((void*)0);
 int VAR_14;

 if (VAR_11 > 0) {
  VAR_13 = FUNC_3(VAR_11, VAR_1);
  if (!VAR_13)
   return -VAR_0;
 }


 VAR_14 = FUNC_5(VAR_12->udev,
         FUNC_6(VAR_12->udev, 0),
         VAR_7,
         VAR_3 | VAR_5 |
         VAR_4, VAR_8, VAR_9, VAR_13,
         VAR_11, 2 * VAR_2);

 if (VAR_14 < 0) {
  FUNC_1(VAR_6, "Failed to read usb control message: %d\n",
       VAR_14);
  FUNC_2(VAR_13);
  return VAR_14;
 }

 FUNC_4((u8 *)VAR_10, VAR_13, VAR_11);

 FUNC_2(VAR_13);

 return 0;
}
