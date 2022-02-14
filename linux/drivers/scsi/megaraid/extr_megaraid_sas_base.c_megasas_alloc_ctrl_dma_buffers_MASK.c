
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct megasas_instance {struct pci_dev* pdev; void* crash_dump_buf; void* tgt_prop; void* pd_info; void* system_info_buf; int crash_dump_h; int tgt_prop_h; int pd_info_h; int system_info_h; void* ld_targetid_list_buf; int ld_targetid_list_buf_h; void* ld_list_buf; int ld_list_buf_h; void* ctrl_info_buf; int ctrl_info_buf_h; void* pd_list_buf; int pd_list_buf_h; void* host_device_list_buf; int host_device_list_buf_h; void* snapdump_prop; int snapdump_prop_h; void* evt_detail; int evt_detail_h; struct fusion_context* ctrl_context; } ;
struct megasas_evt_detail {int dummy; } ;
struct megasas_ctrl_info {int dummy; } ;
struct fusion_context {void* ioc_init_request; int ioc_init_request_phys; } ;
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static inline
int FUNC_2(struct megasas_instance *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev;
 struct fusion_context *VAR_8 = VAR_6->ctrl_context;

 VAR_6->evt_detail = FUNC_1(&VAR_7->dev,
   sizeof(struct megasas_evt_detail),
   &VAR_6->evt_detail_h, VAR_2);

 if (!VAR_6->evt_detail) {
  FUNC_0(&VAR_6->pdev->dev,
   "Failed to allocate event detail buffer\n");
  return -VAR_1;
 }

 if (VAR_8) {
  VAR_8->ioc_init_request =
   FUNC_1(&VAR_7->dev,
        sizeof(struct MPI2_IOC_INIT_REQUEST),
        &VAR_8->ioc_init_request_phys,
        VAR_2);

  if (!VAR_8->ioc_init_request) {
   FUNC_0(&VAR_7->dev,
    "Failed to allocate PD list buffer\n");
   return -VAR_1;
  }

  VAR_6->snapdump_prop = FUNC_1(&VAR_7->dev,
    sizeof(struct MR_SNAPDUMP_PROPERTIES),
    &VAR_6->snapdump_prop_h, VAR_2);

  if (!VAR_6->snapdump_prop)
   FUNC_0(&VAR_7->dev,
    "Failed to allocate snapdump properties buffer\n");

  VAR_6->host_device_list_buf = FUNC_1(&VAR_7->dev,
       VAR_3,
       &VAR_6->host_device_list_buf_h,
       VAR_2);

  if (!VAR_6->host_device_list_buf) {
   FUNC_0(&VAR_7->dev,
    "Failed to allocate targetid list buffer\n");
   return -VAR_1;
  }

 }

 VAR_6->pd_list_buf =
  FUNC_1(&VAR_7->dev,
         VAR_4 * sizeof(struct MR_PD_LIST),
         &VAR_6->pd_list_buf_h, VAR_2);

 if (!VAR_6->pd_list_buf) {
  FUNC_0(&VAR_7->dev, "Failed to allocate PD list buffer\n");
  return -VAR_1;
 }

 VAR_6->ctrl_info_buf =
  FUNC_1(&VAR_7->dev,
         sizeof(struct megasas_ctrl_info),
         &VAR_6->ctrl_info_buf_h, VAR_2);

 if (!VAR_6->ctrl_info_buf) {
  FUNC_0(&VAR_7->dev,
   "Failed to allocate controller info buffer\n");
  return -VAR_1;
 }

 VAR_6->ld_list_buf =
  FUNC_1(&VAR_7->dev,
         sizeof(struct MR_LD_LIST),
         &VAR_6->ld_list_buf_h, VAR_2);

 if (!VAR_6->ld_list_buf) {
  FUNC_0(&VAR_7->dev, "Failed to allocate LD list buffer\n");
  return -VAR_1;
 }

 VAR_6->ld_targetid_list_buf =
  FUNC_1(&VAR_7->dev,
    sizeof(struct MR_LD_TARGETID_LIST),
    &VAR_6->ld_targetid_list_buf_h, VAR_2);

 if (!VAR_6->ld_targetid_list_buf) {
  FUNC_0(&VAR_7->dev,
   "Failed to allocate LD targetid list buffer\n");
  return -VAR_1;
 }

 if (!VAR_5) {
  VAR_6->system_info_buf =
   FUNC_1(&VAR_7->dev,
     sizeof(struct MR_DRV_SYSTEM_INFO),
     &VAR_6->system_info_h, VAR_2);
  VAR_6->pd_info =
   FUNC_1(&VAR_7->dev,
     sizeof(struct MR_PD_INFO),
     &VAR_6->pd_info_h, VAR_2);
  VAR_6->tgt_prop =
   FUNC_1(&VAR_7->dev,
     sizeof(struct MR_TARGET_PROPERTIES),
     &VAR_6->tgt_prop_h, VAR_2);
  VAR_6->crash_dump_buf =
   FUNC_1(&VAR_7->dev, VAR_0,
     &VAR_6->crash_dump_h, VAR_2);

  if (!VAR_6->system_info_buf)
   FUNC_0(&VAR_6->pdev->dev,
    "Failed to allocate system info buffer\n");

  if (!VAR_6->pd_info)
   FUNC_0(&VAR_6->pdev->dev,
    "Failed to allocate pd_info buffer\n");

  if (!VAR_6->tgt_prop)
   FUNC_0(&VAR_6->pdev->dev,
    "Failed to allocate tgt_prop buffer\n");

  if (!VAR_6->crash_dump_buf)
   FUNC_0(&VAR_6->pdev->dev,
    "Failed to allocate crash dump buffer\n");
 }

 return 0;
}
