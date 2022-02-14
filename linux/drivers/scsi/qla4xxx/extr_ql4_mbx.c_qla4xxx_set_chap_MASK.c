
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int flt_chap_size; int flt_region_chap; } ;
struct scsi_qla_host {int port_num; int chap_dma_pool; scalar_t__ chap_list; TYPE_1__ hw; } ;
struct ql4_chap_table {int cookie; int name; int secret; int secret_len; int flags; } ;
typedef int dma_addr_t ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ql4_chap_table*,int ) ;
 struct ql4_chap_table* FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct ql4_chap_table*,struct ql4_chap_table*,int) ;
 int FUNC_5 (struct scsi_qla_host*,int ,int,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,scalar_t__) ;

int FUNC_8(struct scsi_qla_host *VAR_14, char *VAR_15, char *VAR_16,
       uint16_t VAR_17, int VAR_18)
{
 int VAR_19 = 0;
 int VAR_20 = VAR_12;
 uint32_t VAR_21 = 0;
 struct ql4_chap_table *VAR_22;
 uint32_t VAR_23 = 0;
 dma_addr_t VAR_24;

 VAR_22 = FUNC_2(VAR_14->chap_dma_pool, VAR_8, &VAR_24);
 if (VAR_22 == ((void*)0)) {
  VAR_19 = -VAR_4;
  goto exit_set_chap;
 }

 if (VAR_18)
  VAR_22->flags |= VAR_0;
 else
  VAR_22->flags |= VAR_1;
 VAR_22->secret_len = FUNC_6(VAR_16);
 FUNC_7(VAR_22->secret, VAR_16, VAR_11 - 1);
 FUNC_7(VAR_22->name, VAR_15, VAR_10 - 1);
 VAR_22->cookie = FUNC_0(VAR_2);

 if (FUNC_3(VAR_14)) {
  VAR_23 = VAR_9 * sizeof(*VAR_22);
  VAR_21 = VAR_5;
 } else {


  VAR_23 = VAR_14->hw.flt_chap_size / 2;
  VAR_21 = VAR_7 + (VAR_14->hw.flt_region_chap << 2);
  if (VAR_14->port_num == 1)
   VAR_21 += VAR_23;
 }

 VAR_21 += (VAR_17 * sizeof(struct ql4_chap_table));
 VAR_20 = FUNC_5(VAR_14, VAR_24, VAR_21,
    sizeof(struct ql4_chap_table),
    VAR_6);

 if (VAR_20 == VAR_13 && VAR_14->chap_list) {

  FUNC_4((struct ql4_chap_table *)VAR_14->chap_list + VAR_17,
         VAR_22, sizeof(struct ql4_chap_table));
 }
 FUNC_1(VAR_14->chap_dma_pool, VAR_22, VAR_24);
 if (VAR_20 != VAR_13)
  VAR_19 = -VAR_3;

exit_set_chap:
 return VAR_19;
}
