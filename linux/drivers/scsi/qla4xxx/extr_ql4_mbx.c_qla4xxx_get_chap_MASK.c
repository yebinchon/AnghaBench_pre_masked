
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int flt_region_chap; int flt_chap_size; } ;
struct scsi_qla_host {int port_num; int chap_dma_pool; TYPE_1__ hw; } ;
struct ql4_chap_table {int cookie; int name; int secret; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ql4_chap_table*,int ) ;
 struct ql4_chap_table* FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_7 (struct scsi_qla_host*,int ,int,int) ;
 int FUNC_8 (char*,int ,int ) ;

int FUNC_9(struct scsi_qla_host *VAR_12, char *VAR_13, char *VAR_14,
       uint16_t VAR_15)
{
 int VAR_16 = 0;
 int VAR_17 = VAR_10;
 uint32_t VAR_18 = 0, VAR_19;
 struct ql4_chap_table *VAR_20;
 dma_addr_t VAR_21;

 VAR_20 = FUNC_4(VAR_12->chap_dma_pool, VAR_5, &VAR_21);
 if (VAR_20 == ((void*)0))
  return -VAR_2;

 VAR_19 = sizeof(struct ql4_chap_table);

 if (FUNC_5(VAR_12))
  VAR_18 = VAR_3 | (VAR_15 * VAR_19);
 else {
  VAR_18 = VAR_4 + (VAR_12->hw.flt_region_chap << 2);



  if (VAR_12->port_num == 1)
   VAR_18 += (VAR_12->hw.flt_chap_size / 2);
  VAR_18 += (VAR_15 * VAR_19);
 }

 VAR_17 = FUNC_7(VAR_12, VAR_21, VAR_18, VAR_19);
 if (VAR_17 != VAR_11) {
  VAR_16 = -VAR_1;
  goto exit_get_chap;
 }

 FUNC_0(FUNC_6(VAR_7, VAR_12, "Chap Cookie: x%x\n",
  FUNC_2(VAR_20->cookie)));

 if (FUNC_2(VAR_20->cookie) != VAR_0) {
  FUNC_6(VAR_6, VAR_12, "No valid chap entry found\n");
  goto exit_get_chap;
 }

 FUNC_8(VAR_14, VAR_20->secret, VAR_9);
 FUNC_8(VAR_13, VAR_20->name, VAR_8);
 VAR_20->cookie = FUNC_1(VAR_0);

exit_get_chap:
 FUNC_3(VAR_12->chap_dma_pool, VAR_20, VAR_21);
 return VAR_16;
}
