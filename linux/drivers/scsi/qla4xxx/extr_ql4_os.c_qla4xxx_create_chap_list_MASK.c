
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int flt_chap_size; int flt_region_chap; } ;
struct scsi_qla_host {int port_num; TYPE_2__* pdev; int * chap_list; TYPE_1__ hw; } ;
struct ql4_chap_table {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,int *,int ) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_6 (struct scsi_qla_host*,int ,int,int) ;
 int * FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct scsi_qla_host *VAR_6)
{
 int VAR_7 = 0;
 uint8_t *VAR_8 = ((void*)0);
 uint32_t VAR_9;
 dma_addr_t VAR_10;
 uint32_t VAR_11 = 0;

 if (FUNC_2(VAR_6))
  VAR_11 = VAR_4 *
       sizeof(struct ql4_chap_table);
 else


  VAR_11 = VAR_6->hw.flt_chap_size / 2;

 VAR_8 = FUNC_0(&VAR_6->pdev->dev, VAR_11,
          &VAR_10, VAR_2);
 if (!VAR_8) {
  FUNC_5(VAR_3, VAR_6, "No memory for chap_flash_data\n");
  return;
 }

 if (FUNC_2(VAR_6)) {
  VAR_9 = VAR_0;
 } else {
  VAR_9 = VAR_1 + (VAR_6->hw.flt_region_chap << 2);
  if (VAR_6->port_num == 1)
   VAR_9 += VAR_11;
 }

 VAR_7 = FUNC_6(VAR_6, VAR_10, VAR_9, VAR_11);
 if (VAR_7 != VAR_5)
  goto exit_chap_list;

 if (VAR_6->chap_list == ((void*)0))
  VAR_6->chap_list = FUNC_7(VAR_11);
 if (VAR_6->chap_list == ((void*)0)) {
  FUNC_5(VAR_3, VAR_6, "No memory for ha->chap_list\n");
  goto exit_chap_list;
 }

 FUNC_4(VAR_6->chap_list, 0, VAR_11);
 FUNC_3(VAR_6->chap_list, VAR_8, VAR_11);

exit_chap_list:
 FUNC_1(&VAR_6->pdev->dev, VAR_11, VAR_8, VAR_10);
}
