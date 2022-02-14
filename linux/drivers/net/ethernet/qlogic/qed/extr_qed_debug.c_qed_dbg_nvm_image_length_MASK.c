
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_nvm_image_att {int length; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_nvm_images { ____Placeholder_qed_nvm_images } qed_nvm_images ;


 int FUNC_0 (struct qed_hwfn*,int,struct qed_nvm_image_att*) ;

__attribute__((used)) static int FUNC_1(struct qed_hwfn *VAR_0,
        enum qed_nvm_images VAR_1, u32 *VAR_2)
{
 struct qed_nvm_image_att VAR_3;
 int VAR_4;

 *VAR_2 = 0;
 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_3.length;

 return VAR_4;
}
