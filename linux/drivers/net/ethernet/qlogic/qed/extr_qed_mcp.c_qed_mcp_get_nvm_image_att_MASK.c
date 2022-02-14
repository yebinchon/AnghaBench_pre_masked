
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_nvm_image_att {int length; int start_addr; } ;
struct TYPE_4__ {size_t num_images; TYPE_1__* image_att; } ;
struct qed_hwfn {TYPE_2__ nvm_info; } ;
typedef enum qed_nvm_images { ____Placeholder_qed_nvm_images } qed_nvm_images ;
typedef enum nvm_image_type { ____Placeholder_nvm_image_type } nvm_image_type ;
struct TYPE_3__ {int image_type; int len; int nvm_start_addr; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_2 (struct qed_hwfn*) ;

int
FUNC_3(struct qed_hwfn *VAR_8,
     enum qed_nvm_images VAR_9,
     struct qed_nvm_image_att *VAR_10)
{
 enum nvm_image_type VAR_11;
 u32 VAR_12;


 switch (VAR_9) {
 case 130:
  VAR_11 = VAR_4;
  break;
 case 131:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_6;
  break;
 case 132:
  VAR_11 = VAR_2;
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 default:
  FUNC_0(VAR_8, "Unknown request of image_id %08x\n",
     VAR_9);
  return -VAR_0;
 }

 FUNC_2(VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_8->nvm_info.num_images; VAR_12++)
  if (VAR_11 == VAR_8->nvm_info.image_att[VAR_12].image_type)
   break;
 if (VAR_12 == VAR_8->nvm_info.num_images) {
  FUNC_1(VAR_8, VAR_7,
      "Failed to find nvram image of type %08x\n",
      VAR_9);
  return -VAR_1;
 }

 VAR_10->start_addr = VAR_8->nvm_info.image_att[VAR_12].nvm_start_addr;
 VAR_10->length = VAR_8->nvm_info.image_att[VAR_12].len;

 return 0;
}
