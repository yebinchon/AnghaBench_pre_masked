
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_usbdev_info {int image_len; scalar_t__ image; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct brcmf_usbdev_info*) ;
 int FUNC_3 (struct brcmf_usbdev_info*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct brcmf_usbdev_info *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2, "Enter\n");
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 if (!VAR_3->image) {
  FUNC_1("No firmware!\n");
  return -VAR_1;
 }

 VAR_4 = FUNC_3(VAR_3,
  (u8 *)VAR_3->image, VAR_3->image_len);
 if (VAR_4 == 0)
  VAR_4 = FUNC_2(VAR_3);
 return VAR_4;
}
