
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct srb {int dummy; } ;
struct scsi_qla_host {int request_dma; int response_dma; scalar_t__ rsp_ring_index; int response_ring; int response_ring_ptr; void* req_q_cnt; scalar_t__ req_ring_index; int request_ring; int request_ring_ptr; int outstanding_cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct scsi_qla_host*,int,int*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct scsi_qla_host *VAR_14)
{
 uint16_t VAR_15[VAR_8];
 int VAR_16 = 0;

 FUNC_0("qla1280_init_rings");


 FUNC_3(VAR_14->outstanding_cmds, 0,
        sizeof(struct srb *) * VAR_9);


 VAR_14->request_ring_ptr = VAR_14->request_ring;
 VAR_14->req_ring_index = 0;
 VAR_14->req_q_cnt = VAR_12;

 VAR_15[0] = VAR_10;
 VAR_15[1] = VAR_12;
 VAR_15[3] = VAR_14->request_dma & 0xffff;
 VAR_15[2] = (VAR_14->request_dma >> 16) & 0xffff;
 VAR_15[4] = 0;
 VAR_15[7] = FUNC_5(VAR_14->request_dma) & 0xffff;
 VAR_15[6] = FUNC_5(VAR_14->request_dma) >> 16;
 if (!(VAR_16 = FUNC_4(VAR_14, VAR_7 | VAR_6 | VAR_4 |
            VAR_3 | VAR_2 | VAR_1 | VAR_0,
            &VAR_15[0]))) {

  VAR_14->response_ring_ptr = VAR_14->response_ring;
  VAR_14->rsp_ring_index = 0;

  VAR_15[0] = VAR_11;
  VAR_15[1] = VAR_13;
  VAR_15[3] = VAR_14->response_dma & 0xffff;
  VAR_15[2] = (VAR_14->response_dma >> 16) & 0xffff;
  VAR_15[5] = 0;
  VAR_15[7] = FUNC_5(VAR_14->response_dma) & 0xffff;
  VAR_15[6] = FUNC_5(VAR_14->response_dma) >> 16;
  VAR_16 = FUNC_4(VAR_14, VAR_7 | VAR_6 | VAR_5 |
       VAR_3 | VAR_2 | VAR_1 | VAR_0,
       &VAR_15[0]);
 }

 if (VAR_16)
  FUNC_2(2, "qla1280_init_rings: **** FAILED ****\n");

 FUNC_1("qla1280_init_rings");
 return VAR_16;
}
