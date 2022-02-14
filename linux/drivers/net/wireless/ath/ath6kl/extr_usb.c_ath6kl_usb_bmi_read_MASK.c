
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl_usb {int dummy; } ;
struct ath6kl {struct ath6kl_usb* hif_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ath6kl_usb*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ath6kl *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 struct ath6kl_usb *VAR_4 = VAR_1->hif_priv;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4,
     VAR_0,
     0, 0, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_0("Unable to read the bmi data from the device: %d\n",
      VAR_5);
  return VAR_5;
 }

 return 0;
}
