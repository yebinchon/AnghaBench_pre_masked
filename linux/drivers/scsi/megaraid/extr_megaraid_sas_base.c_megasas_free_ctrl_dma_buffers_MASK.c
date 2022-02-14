
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct megasas_instance {int host_device_list_buf_h; scalar_t__ host_device_list_buf; int snapdump_prop_h; scalar_t__ snapdump_prop; int crash_dump_h; scalar_t__ crash_dump_buf; int tgt_prop_h; scalar_t__ tgt_prop; int pd_info_h; scalar_t__ pd_info; int system_info_h; scalar_t__ system_info_buf; int ctrl_info_buf_h; scalar_t__ ctrl_info_buf; int ld_targetid_list_buf_h; scalar_t__ ld_targetid_list_buf; int ld_list_buf_h; scalar_t__ ld_list_buf; int pd_list_buf_h; scalar_t__ pd_list_buf; int evt_detail_h; scalar_t__ evt_detail; struct fusion_context* ctrl_context; struct pci_dev* pdev; } ;
struct megasas_evt_detail {int dummy; } ;
struct megasas_ctrl_info {int dummy; } ;
struct fusion_context {int ioc_init_request_phys; scalar_t__ ioc_init_request; } ;
struct MR_TARGET_PROPERTIES {int dummy; } ;
struct MR_SNAPDUMP_PROPERTIES {int dummy; } ;
struct MR_PD_LIST {int dummy; } ;
struct MR_PD_INFO {int dummy; } ;
struct MR_LD_TARGETID_LIST {int dummy; } ;
struct MR_LD_LIST {int dummy; } ;
struct MR_DRV_SYSTEM_INFO {int dummy; } ;
struct MPI2_IOC_INIT_REQUEST {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static inline
void FUNC_1(struct megasas_instance *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct fusion_context *VAR_5 = VAR_3->ctrl_context;

 if (VAR_3->evt_detail)
  FUNC_0(&VAR_4->dev, sizeof(struct megasas_evt_detail),
        VAR_3->evt_detail,
        VAR_3->evt_detail_h);

 if (VAR_5 && VAR_5->ioc_init_request)
  FUNC_0(&VAR_4->dev,
      sizeof(struct MPI2_IOC_INIT_REQUEST),
      VAR_5->ioc_init_request,
      VAR_5->ioc_init_request_phys);

 if (VAR_3->pd_list_buf)
  FUNC_0(&VAR_4->dev,
        VAR_2 * sizeof(struct MR_PD_LIST),
        VAR_3->pd_list_buf,
        VAR_3->pd_list_buf_h);

 if (VAR_3->ld_list_buf)
  FUNC_0(&VAR_4->dev, sizeof(struct MR_LD_LIST),
        VAR_3->ld_list_buf,
        VAR_3->ld_list_buf_h);

 if (VAR_3->ld_targetid_list_buf)
  FUNC_0(&VAR_4->dev, sizeof(struct MR_LD_TARGETID_LIST),
        VAR_3->ld_targetid_list_buf,
        VAR_3->ld_targetid_list_buf_h);

 if (VAR_3->ctrl_info_buf)
  FUNC_0(&VAR_4->dev, sizeof(struct megasas_ctrl_info),
        VAR_3->ctrl_info_buf,
        VAR_3->ctrl_info_buf_h);

 if (VAR_3->system_info_buf)
  FUNC_0(&VAR_4->dev, sizeof(struct MR_DRV_SYSTEM_INFO),
        VAR_3->system_info_buf,
        VAR_3->system_info_h);

 if (VAR_3->pd_info)
  FUNC_0(&VAR_4->dev, sizeof(struct MR_PD_INFO),
        VAR_3->pd_info, VAR_3->pd_info_h);

 if (VAR_3->tgt_prop)
  FUNC_0(&VAR_4->dev, sizeof(struct MR_TARGET_PROPERTIES),
        VAR_3->tgt_prop, VAR_3->tgt_prop_h);

 if (VAR_3->crash_dump_buf)
  FUNC_0(&VAR_4->dev, VAR_0,
        VAR_3->crash_dump_buf,
        VAR_3->crash_dump_h);

 if (VAR_3->snapdump_prop)
  FUNC_0(&VAR_4->dev,
      sizeof(struct MR_SNAPDUMP_PROPERTIES),
      VAR_3->snapdump_prop,
      VAR_3->snapdump_prop_h);

 if (VAR_3->host_device_list_buf)
  FUNC_0(&VAR_4->dev,
      VAR_1,
      VAR_3->host_device_list_buf,
      VAR_3->host_device_list_buf_h);

}
