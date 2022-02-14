
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int flt_chap_size; int flt_region_chap; } ;
struct scsi_qla_host {int port_num; int chap_dma_pool; int chap_sem; scalar_t__ chap_list; TYPE_1__ hw; } ;
struct ql4_chap_table {int cookie; } ;
struct Scsi_Host {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ql4_chap_table*,int ) ;
 struct ql4_chap_table* FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct ql4_chap_table*,struct ql4_chap_table*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_11 (struct scsi_qla_host*,int ,int,int) ;
 int FUNC_12 (struct Scsi_Host*,int) ;
 int FUNC_13 (struct scsi_qla_host*,int ,int,int,int ) ;
 struct scsi_qla_host* FUNC_14 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_15(struct Scsi_Host *VAR_12, uint16_t VAR_13)
{
 struct scsi_qla_host *VAR_14 = FUNC_14(VAR_12);
 struct ql4_chap_table *VAR_15;
 dma_addr_t VAR_16;
 int VAR_17 = 0;
 uint32_t VAR_18 = 0;
 uint32_t VAR_19;
 int VAR_20 = 0;

 VAR_15 = FUNC_4(VAR_14->chap_dma_pool, VAR_7, &VAR_16);
 if (VAR_15 == ((void*)0))
  return -VAR_3;

 if (FUNC_6(VAR_14))
  VAR_17 = (VAR_14->hw.flt_chap_size / 2) /
       sizeof(struct ql4_chap_table);
 else
  VAR_17 = VAR_10;

 if (VAR_13 > VAR_17) {
  VAR_20 = -VAR_2;
  goto exit_delete_chap;
 }



 VAR_20 = FUNC_12(VAR_12, VAR_13);
 if (VAR_20) {
  FUNC_10(VAR_9, VAR_14, "CHAP entry %d is in use, cannot "
      "delete from flash\n", VAR_13);
  VAR_20 = -VAR_1;
  goto exit_delete_chap;
 }

 VAR_19 = sizeof(struct ql4_chap_table);
 if (FUNC_5(VAR_14))
  VAR_18 = VAR_4 | (VAR_13 * VAR_19);
 else {
  VAR_18 = VAR_6 + (VAR_14->hw.flt_region_chap << 2);



  if (VAR_14->port_num == 1)
   VAR_18 += (VAR_14->hw.flt_chap_size / 2);
  VAR_18 += (VAR_13 * VAR_19);
 }

 VAR_20 = FUNC_11(VAR_14, VAR_16, VAR_18, VAR_19);
 if (VAR_20 != VAR_11) {
  VAR_20 = -VAR_2;
  goto exit_delete_chap;
 }

 FUNC_0(FUNC_10(VAR_9, VAR_14, "Chap Cookie: x%x\n",
     FUNC_2(VAR_15->cookie)));

 if (FUNC_2(VAR_15->cookie) != VAR_0) {
  FUNC_10(VAR_8, VAR_14, "No valid chap entry found\n");
  goto exit_delete_chap;
 }

 VAR_15->cookie = FUNC_1(0xFFFF);

 VAR_18 = VAR_4 |
   (VAR_13 * sizeof(struct ql4_chap_table));
 VAR_20 = FUNC_13(VAR_14, VAR_16, VAR_18, VAR_19,
    VAR_5);
 if (VAR_20 == VAR_11 && VAR_14->chap_list) {
  FUNC_8(&VAR_14->chap_sem);

  FUNC_7((struct ql4_chap_table *)VAR_14->chap_list + VAR_13,
   VAR_15, sizeof(struct ql4_chap_table));
  FUNC_9(&VAR_14->chap_sem);
 }
 if (VAR_20 != VAR_11)
  VAR_20 = -VAR_2;

exit_delete_chap:
 FUNC_3(VAR_14->chap_dma_pool, VAR_15, VAR_16);
 return VAR_20;
}
