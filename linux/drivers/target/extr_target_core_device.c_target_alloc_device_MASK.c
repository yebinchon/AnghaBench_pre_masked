
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct t10_pi_tuple {int dummy; } ;
struct se_lun {int * lun_tpg; int lun_tg_pt_md_mutex; int lun_dev_link; int lun_deve_list; int lun_shutdown_comp; int lun_se_dev; } ;
struct se_hba {int hba_index; TYPE_2__* backend; } ;
struct TYPE_10__ {int revision; int model; int vendor; struct se_device* t10_dev; int t10_vpd_lock; int t10_vpd_list; } ;
struct TYPE_12__ {int emulate_dpo; int emulate_fua_write; int emulate_fua_read; int max_write_same_len; int unmap_zeroes_data; int unmap_granularity_alignment; int unmap_granularity; int max_unmap_block_desc_count; int max_unmap_lba_count; int emulate_rest_reord; int is_nonrot; int force_pr_aptpl; int enforce_pr_isids; int pi_prot_type; int emulate_pr; int emulate_3pc; int emulate_caw; int emulate_tpws; int emulate_tpu; int emulate_tas; int emulate_ua_intlck_ctrl; int emulate_write_cache; int emulate_model_alias; struct se_device* da_dev; } ;
struct TYPE_11__ {struct se_device* t10_dev; int lba_map_lock; int lba_map_list; int tg_pt_gps_lock; int tg_pt_gps_list; } ;
struct TYPE_9__ {int aptpl_reg_lock; int registration_lock; int aptpl_reg_list; int registration_list; } ;
struct se_device {int prot_length; TYPE_1__* transport; TYPE_4__ t10_wwn; struct se_lun xcopy_lun; TYPE_6__ dev_attrib; TYPE_5__ t10_alua; TYPE_3__ t10_pr; int caw_sem; int qf_cmd_lock; int se_tmr_lock; int se_port_lock; int dev_reservation_lock; int delayed_cmd_lock; int execute_task_lock; int qf_cmd_list; int state_list; int delayed_cmd_list; int dev_tmr_list; int dev_sep_list; int hba_index; struct se_hba* se_hba; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {char* inquiry_prod; char* inquiry_rev; struct se_device* (* alloc_device ) (struct se_hba*,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *) ;
 int VAR_19 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct se_device*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;
 struct se_device* FUNC_7 (struct se_hba*,char const*) ;
 int VAR_20 ;

struct se_device *FUNC_8(struct se_hba *VAR_21, const char *VAR_22)
{
 struct se_device *VAR_23;
 struct se_lun *VAR_24;

 VAR_23 = VAR_21->backend->ops->alloc_device(VAR_21, VAR_22);
 if (!VAR_23)
  return ((void*)0);

 VAR_23->se_hba = VAR_21;
 VAR_23->transport = VAR_21->backend->ops;
 VAR_23->prot_length = sizeof(struct t10_pi_tuple);
 VAR_23->hba_index = VAR_21->hba_index;

 FUNC_0(&VAR_23->dev_sep_list);
 FUNC_0(&VAR_23->dev_tmr_list);
 FUNC_0(&VAR_23->delayed_cmd_list);
 FUNC_0(&VAR_23->state_list);
 FUNC_0(&VAR_23->qf_cmd_list);
 FUNC_5(&VAR_23->execute_task_lock);
 FUNC_5(&VAR_23->delayed_cmd_lock);
 FUNC_5(&VAR_23->dev_reservation_lock);
 FUNC_5(&VAR_23->se_port_lock);
 FUNC_5(&VAR_23->se_tmr_lock);
 FUNC_5(&VAR_23->qf_cmd_lock);
 FUNC_4(&VAR_23->caw_sem, 1);
 FUNC_0(&VAR_23->t10_wwn.t10_vpd_list);
 FUNC_5(&VAR_23->t10_wwn.t10_vpd_lock);
 FUNC_0(&VAR_23->t10_pr.registration_list);
 FUNC_0(&VAR_23->t10_pr.aptpl_reg_list);
 FUNC_5(&VAR_23->t10_pr.registration_lock);
 FUNC_5(&VAR_23->t10_pr.aptpl_reg_lock);
 FUNC_0(&VAR_23->t10_alua.tg_pt_gps_list);
 FUNC_5(&VAR_23->t10_alua.tg_pt_gps_lock);
 FUNC_0(&VAR_23->t10_alua.lba_map_list);
 FUNC_5(&VAR_23->t10_alua.lba_map_lock);

 VAR_23->t10_wwn.t10_dev = VAR_23;
 VAR_23->t10_alua.t10_dev = VAR_23;

 VAR_23->dev_attrib.da_dev = VAR_23;
 VAR_23->dev_attrib.emulate_model_alias = VAR_2;
 VAR_23->dev_attrib.emulate_dpo = 1;
 VAR_23->dev_attrib.emulate_fua_write = 1;
 VAR_23->dev_attrib.emulate_fua_read = 1;
 VAR_23->dev_attrib.emulate_write_cache = VAR_9;
 VAR_23->dev_attrib.emulate_ua_intlck_ctrl = VAR_8;
 VAR_23->dev_attrib.emulate_tas = VAR_5;
 VAR_23->dev_attrib.emulate_tpu = VAR_6;
 VAR_23->dev_attrib.emulate_tpws = VAR_7;
 VAR_23->dev_attrib.emulate_caw = VAR_1;
 VAR_23->dev_attrib.emulate_3pc = VAR_0;
 VAR_23->dev_attrib.emulate_pr = VAR_3;
 VAR_23->dev_attrib.pi_prot_type = VAR_19;
 VAR_23->dev_attrib.enforce_pr_isids = VAR_10;
 VAR_23->dev_attrib.force_pr_aptpl = VAR_11;
 VAR_23->dev_attrib.is_nonrot = VAR_12;
 VAR_23->dev_attrib.emulate_rest_reord = VAR_4;
 VAR_23->dev_attrib.max_unmap_lba_count = VAR_14;
 VAR_23->dev_attrib.max_unmap_block_desc_count =
  VAR_13;
 VAR_23->dev_attrib.unmap_granularity = VAR_17;
 VAR_23->dev_attrib.unmap_granularity_alignment =
    VAR_16;
 VAR_23->dev_attrib.unmap_zeroes_data =
    VAR_18;
 VAR_23->dev_attrib.max_write_same_len = VAR_15;

 VAR_24 = &VAR_23->xcopy_lun;
 FUNC_3(VAR_24->lun_se_dev, VAR_23);
 FUNC_1(&VAR_24->lun_shutdown_comp);
 FUNC_0(&VAR_24->lun_deve_list);
 FUNC_0(&VAR_24->lun_dev_link);
 FUNC_2(&VAR_24->lun_tg_pt_md_mutex);
 VAR_24->lun_tpg = &VAR_20;


 FUNC_6(VAR_23->t10_wwn.vendor, "LIO-ORG", sizeof(VAR_23->t10_wwn.vendor));
 FUNC_6(VAR_23->t10_wwn.model, VAR_23->transport->inquiry_prod,
  sizeof(VAR_23->t10_wwn.model));
 FUNC_6(VAR_23->t10_wwn.revision, VAR_23->transport->inquiry_rev,
  sizeof(VAR_23->t10_wwn.revision));

 return VAR_23;
}
