
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct se_cmd {int t_task_lba; int prot_type; } ;
struct qla_tgt_cmd {TYPE_1__* tgt; struct se_cmd se_cmd; } ;
struct TYPE_7__ {TYPE_2__* tgt_ops; } ;
struct qla_hw_data {TYPE_3__ tgt; } ;
struct crc_context {int* app_tag_mask; int* ref_tag_mask; void* ref_tag; scalar_t__ app_tag; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_6__ {int (* get_dif_tags ) (struct qla_tgt_cmd*,int *) ;int (* chk_dif_tags ) (int) ;} ;
struct TYPE_5__ {TYPE_4__* vha; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 void* FUNC_1 (int) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (struct qla_tgt_cmd*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct qla_tgt_cmd *VAR_3, struct crc_context *VAR_4,
    uint16_t *VAR_5)
{
 struct se_cmd *VAR_6 = &VAR_3->se_cmd;
 uint32_t VAR_7 = 0xffffffff & VAR_6->t_task_lba;
 scsi_qla_host_t *VAR_8 = VAR_3->tgt->vha;
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 uint32_t VAR_10 = 0;






 VAR_4->app_tag = 0;
 VAR_4->app_tag_mask[0] = 0x0;
 VAR_4->app_tag_mask[1] = 0x0;

 if (FUNC_0(VAR_9)) {
  if ((VAR_6->prot_type == 130) ||
      (VAR_6->prot_type == 129))
   *VAR_5 |= VAR_1;
  else if (VAR_6->prot_type == 128)
   *VAR_5 |= VAR_2;
 }

 VAR_10 = VAR_9->tgt.tgt_ops->get_dif_tags(VAR_3, VAR_5);

 switch (VAR_6->prot_type) {
 case 131:





  VAR_4->ref_tag = FUNC_1(VAR_7);

  VAR_4->ref_tag_mask[0] = 0xff;
  VAR_4->ref_tag_mask[1] = 0xff;
  VAR_4->ref_tag_mask[2] = 0xff;
  VAR_4->ref_tag_mask[3] = 0xff;
  break;
 case 130:




     VAR_4->ref_tag = FUNC_1(VAR_7);
     if (!FUNC_2(VAR_6) ||
  !(VAR_9->tgt.tgt_ops->chk_dif_tags(VAR_10))) {
      *VAR_5 |= VAR_0;
      break;
     }

     VAR_4->ref_tag_mask[0] = 0xff;
     VAR_4->ref_tag_mask[1] = 0xff;
     VAR_4->ref_tag_mask[2] = 0xff;
     VAR_4->ref_tag_mask[3] = 0xff;
     break;
 case 129:




     VAR_4->ref_tag = FUNC_1(VAR_7);
     if (!FUNC_2(VAR_6) ||
  !(VAR_9->tgt.tgt_ops->chk_dif_tags(VAR_10))) {
      *VAR_5 |= VAR_0;
      break;
     }

     VAR_4->ref_tag_mask[0] = 0xff;
     VAR_4->ref_tag_mask[1] = 0xff;
     VAR_4->ref_tag_mask[2] = 0xff;
     VAR_4->ref_tag_mask[3] = 0xff;
     break;
 case 128:

     *VAR_5 |= VAR_0;
     VAR_4->ref_tag_mask[0] = VAR_4->ref_tag_mask[1] =
  VAR_4->ref_tag_mask[2] = VAR_4->ref_tag_mask[3] = 0x00;
     break;
 }
}
