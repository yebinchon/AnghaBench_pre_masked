
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
 struct ath10k_usb* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_5,
          u8 VAR_6, u16 VAR_7, u16 VAR_8, void *VAR_9,
          u32 VAR_10)
{
 struct ath10k_usb *VAR_11 = FUNC_0(VAR_5);
 u8 *VAR_12 = ((void*)0);
 int VAR_13;

 if (VAR_10 > 0) {
  VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_1);
  if (!VAR_12)
   return -VAR_0;
 }


 VAR_13 = FUNC_4(VAR_11->udev,
         FUNC_5(VAR_11->udev, 0),
         VAR_6,
         VAR_2 | VAR_4 |
         VAR_3, VAR_7, VAR_8, VAR_12,
         VAR_10, 1000);

 if (VAR_13 < 0) {
  FUNC_1(VAR_5, "Failed to submit usb control message: %d\n",
       VAR_13);
  FUNC_2(VAR_12);
  return VAR_13;
 }

 FUNC_2(VAR_12);

 return 0;
}
