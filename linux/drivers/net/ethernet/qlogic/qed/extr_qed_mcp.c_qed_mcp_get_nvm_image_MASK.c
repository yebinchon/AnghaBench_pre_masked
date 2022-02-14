
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_nvm_image_att {int length; int start_addr; } ;
struct qed_hwfn {int cdev; } ;
typedef enum qed_nvm_images { ____Placeholder_qed_nvm_images } qed_nvm_images ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int,struct qed_nvm_image_att*) ;
 int FUNC_3 (int ,int ,int *,int) ;

int FUNC_4(struct qed_hwfn *VAR_3,
     enum qed_nvm_images VAR_4,
     u8 *VAR_5, u32 VAR_6)
{
 struct qed_nvm_image_att VAR_7;
 int VAR_8;

 FUNC_1(VAR_5, 0, VAR_6);

 VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;


 if (VAR_7.length <= 4) {
  FUNC_0(VAR_3, VAR_2,
      "Image [%d] is too small - only %d bytes\n",
      VAR_4, VAR_7.length);
  return -VAR_0;
 }

 if (VAR_7.length > VAR_6) {
  FUNC_0(VAR_3,
      VAR_2,
      "Image [%d] is too big - %08x bytes where only %08x are available\n",
      VAR_4, VAR_7.length, VAR_6);
  return -VAR_1;
 }

 return FUNC_3(VAR_3->cdev, VAR_7.start_addr,
    VAR_5, VAR_7.length);
}
