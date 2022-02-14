
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fw_scsi_read_wr {scalar_t__ cookie; } ;
struct fw_scsi_abrt_cls_wr {scalar_t__ cookie; } ;
struct csio_scsim {int dummy; } ;
struct csio_ioreq {scalar_t__ wr_status; } ;
struct csio_hw {int dummy; } ;
struct csio_fl_dma_buf {int dummy; } ;
struct cpl_fw6_msg {scalar_t__ opcode; scalar_t__ data; } ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_scsim*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct csio_scsim* FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct csio_ioreq*) ;

struct csio_ioreq *
FUNC_8(struct csio_hw *VAR_7, void *VAR_8, uint32_t VAR_9,
       struct csio_fl_dma_buf *VAR_10, void *VAR_11, uint8_t **VAR_12)
{
 struct csio_ioreq *VAR_13 = ((void*)0);
 struct cpl_fw6_msg *VAR_14;
 uint8_t *VAR_15;
 uint8_t VAR_16;
 struct csio_scsim *VAR_17 = FUNC_2(VAR_7);


 VAR_14 = (struct cpl_fw6_msg *)((uintptr_t)VAR_8 + sizeof(__be64));

 if (FUNC_6(VAR_14->opcode != VAR_0)) {
  FUNC_3(VAR_7, "Error: Invalid CPL msg %x recvd on SCSI q\n",
     VAR_14->opcode);
  FUNC_1(VAR_17, VAR_5);
  return ((void*)0);
 }

 VAR_15 = (uint8_t *)(VAR_14->data);
 VAR_16 = FUNC_4(VAR_15);
 *VAR_12 = VAR_15;

 if (FUNC_5((*VAR_15 == VAR_3) ||
   (*VAR_15 == VAR_4) ||
   (*VAR_15 == VAR_2))) {
  VAR_13 = (struct csio_ioreq *)((uintptr_t)
     (((struct fw_scsi_read_wr *)VAR_15)->cookie));
  FUNC_0(FUNC_7(VAR_13));

  VAR_13->wr_status = VAR_16;

  return VAR_13;
 }

 if (*VAR_15 == VAR_1) {
  VAR_13 = (struct csio_ioreq *)((uintptr_t)
    (((struct fw_scsi_abrt_cls_wr *)VAR_15)->cookie));
  FUNC_0(FUNC_7(VAR_13));

  VAR_13->wr_status = VAR_16;
  return VAR_13;
 }

 FUNC_3(VAR_7, "WR with invalid opcode in SCSI IQ: %x\n", *VAR_15);
 FUNC_1(VAR_17, VAR_6);
 return ((void*)0);
}
