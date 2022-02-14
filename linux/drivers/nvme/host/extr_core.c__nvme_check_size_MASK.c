
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_write_zeroes_cmd {int dummy; } ;
struct nvme_smart_log {int dummy; } ;
struct nvme_rw_command {int dummy; } ;
struct nvme_lba_range_type {int dummy; } ;
struct nvme_identify {int dummy; } ;
struct nvme_id_ns {int dummy; } ;
struct nvme_id_ctrl {int dummy; } ;
struct nvme_get_log_page_command {int dummy; } ;
struct nvme_format_cmd {int dummy; } ;
struct nvme_features {int dummy; } ;
struct nvme_dsm_cmd {int dummy; } ;
struct nvme_download_firmware {int dummy; } ;
struct nvme_directive_cmd {int dummy; } ;
struct nvme_dbbuf {int dummy; } ;
struct nvme_common_command {int dummy; } ;
struct nvme_command {int dummy; } ;
struct nvme_abort_cmd {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(void)
{
 FUNC_0(sizeof(struct nvme_common_command) != 64);
 FUNC_0(sizeof(struct nvme_rw_command) != 64);
 FUNC_0(sizeof(struct nvme_identify) != 64);
 FUNC_0(sizeof(struct nvme_features) != 64);
 FUNC_0(sizeof(struct nvme_download_firmware) != 64);
 FUNC_0(sizeof(struct nvme_format_cmd) != 64);
 FUNC_0(sizeof(struct nvme_dsm_cmd) != 64);
 FUNC_0(sizeof(struct nvme_write_zeroes_cmd) != 64);
 FUNC_0(sizeof(struct nvme_abort_cmd) != 64);
 FUNC_0(sizeof(struct nvme_get_log_page_command) != 64);
 FUNC_0(sizeof(struct nvme_command) != 64);
 FUNC_0(sizeof(struct nvme_id_ctrl) != VAR_0);
 FUNC_0(sizeof(struct nvme_id_ns) != VAR_0);
 FUNC_0(sizeof(struct nvme_lba_range_type) != 64);
 FUNC_0(sizeof(struct nvme_smart_log) != 512);
 FUNC_0(sizeof(struct nvme_dbbuf) != 64);
 FUNC_0(sizeof(struct nvme_directive_cmd) != 64);
}
