
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_ptt {int dummy; } ;
struct qed_nvm_image_info {size_t num_images; TYPE_2__* image_att; } ;
struct TYPE_5__ {int valid; size_t num_images; TYPE_2__* image_att; } ;
struct qed_hwfn {TYPE_1__ nvm_info; } ;
struct bist_nvm_image_att {int dummy; } ;
struct TYPE_6__ {int len; } ;


 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (size_t,int,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,TYPE_2__*,size_t) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,size_t*) ;
 struct qed_ptt* FUNC_7 (struct qed_hwfn*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*) ;

int FUNC_9(struct qed_hwfn *VAR_5)
{
 struct qed_nvm_image_info VAR_6;
 struct qed_ptt *VAR_7;
 int VAR_8;
 u32 VAR_9;

 if (VAR_5->nvm_info.valid)
  return 0;

 VAR_7 = FUNC_7(VAR_5);
 if (!VAR_7) {
  FUNC_0(VAR_5, "failed to acquire ptt\n");
  return -VAR_0;
 }


 VAR_6.num_images = 0;
 VAR_8 = FUNC_6(VAR_5,
          VAR_7, &VAR_6.num_images);
 if (VAR_8 == -VAR_2) {
  FUNC_1(VAR_5, "DRV_MSG_CODE_BIST_TEST is not supported\n");
  goto out;
 } else if (VAR_8 || !VAR_6.num_images) {
  FUNC_0(VAR_5, "Failed getting number of images\n");
  goto err0;
 }

 VAR_6.image_att = FUNC_4(VAR_6.num_images,
        sizeof(struct bist_nvm_image_att),
        VAR_3);
 if (!VAR_6.image_att) {
  VAR_8 = -VAR_1;
  goto err0;
 }


 for (VAR_9 = 0; VAR_9 < VAR_6.num_images; VAR_9++) {
  VAR_8 = FUNC_5(VAR_5, VAR_7,
          &VAR_6.image_att[VAR_9], VAR_9);
  if (VAR_8) {
   FUNC_0(VAR_5,
          "Failed getting image index %d attributes\n", VAR_9);
   goto err1;
  }

  FUNC_2(VAR_5, VAR_4, "image index %d, size %x\n", VAR_9,
      VAR_6.image_att[VAR_9].len);
 }
out:

 if (VAR_6.num_images) {
  VAR_5->nvm_info.num_images = VAR_6.num_images;
  FUNC_3(VAR_5->nvm_info.image_att);
  VAR_5->nvm_info.image_att = VAR_6.image_att;
  VAR_5->nvm_info.valid = 1;
 }

 FUNC_8(VAR_5, VAR_7);
 return 0;

err1:
 FUNC_3(VAR_6.image_att);
err0:
 FUNC_8(VAR_5, VAR_7);
 return VAR_8;
}
