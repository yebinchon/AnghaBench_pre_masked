
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ushort ;
typedef void* uchar ;
typedef void* __le32 ;
struct TYPE_16__ {int iop_base; } ;
struct TYPE_12__ {int sg_queue_cnt; void* data_cnt; void* data_addr; int cntl; } ;
struct TYPE_15__ {int next_sg_index; TYPE_2__ q1; TYPE_4__* sg_head; } ;
struct TYPE_14__ {int entry_cnt; int queue_cnt; TYPE_1__* sg_list; } ;
struct TYPE_13__ {int seq_no; int sg_list_cnt; int sg_cur_list_cnt; void* q_no; int cntl; void* sg_head_qp; } ;
struct TYPE_11__ {int bytes; int addr; } ;
typedef int PortAddr ;
typedef TYPE_3__ ASC_SG_LIST_Q ;
typedef TYPE_4__ ASC_SG_HEAD ;
typedef TYPE_5__ ASC_SCSI_Q ;
typedef TYPE_6__ ASC_DVC_VAR ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,void**,int) ;
 int FUNC_2 (int ,int,void**,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,void*) ;
 void* FUNC_4 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(ASC_DVC_VAR *VAR_7, ASC_SCSI_Q *VAR_8, uchar VAR_9)
{
 int VAR_10;
 int VAR_11;
 ASC_SG_HEAD *VAR_12;
 ASC_SG_LIST_Q VAR_13;
 __le32 VAR_14;
 __le32 VAR_15;
 PortAddr VAR_16;
 ushort VAR_17;
 ushort VAR_18;
 ushort VAR_19;
 ushort VAR_20;
 uchar VAR_21;

 VAR_16 = VAR_7->iop_base;
 VAR_12 = VAR_8->sg_head;
 VAR_14 = VAR_8->q1.data_addr;
 VAR_15 = VAR_8->q1.data_cnt;
 VAR_8->q1.data_addr = FUNC_5(VAR_12->sg_list[0].addr);
 VAR_8->q1.data_cnt = FUNC_5(VAR_12->sg_list[0].bytes);





 VAR_19 = VAR_12->entry_cnt - 1;

 if (VAR_19 != 0) {
  VAR_8->q1.cntl |= VAR_6;
  VAR_20 = FUNC_0(VAR_9);
  VAR_18 = 1;
  VAR_8->q1.sg_queue_cnt = VAR_12->queue_cnt;
  VAR_13.sg_head_qp = VAR_9;
  VAR_13.cntl = VAR_5;
  for (VAR_11 = 0; VAR_11 < VAR_12->queue_cnt; VAR_11++) {
   VAR_13.seq_no = VAR_11 + 1;
   if (VAR_19 > VAR_3) {
    VAR_17 = (uchar)(VAR_3 * 2);
    VAR_19 -= VAR_3;
    if (VAR_11 == 0) {
     VAR_13.sg_list_cnt =
         VAR_3;
     VAR_13.sg_cur_list_cnt =
         VAR_3;
    } else {
     VAR_13.sg_list_cnt =
         VAR_3 - 1;
     VAR_13.sg_cur_list_cnt =
         VAR_3 - 1;
    }
   } else {
    VAR_13.cntl |= VAR_4;
    VAR_17 = VAR_19 << 1;
    if (VAR_11 == 0) {
     VAR_13.sg_list_cnt = VAR_19;
     VAR_13.sg_cur_list_cnt =
         VAR_19;
    } else {
     VAR_13.sg_list_cnt =
         VAR_19 - 1;
     VAR_13.sg_cur_list_cnt =
         VAR_19 - 1;
    }
    VAR_19 = 0;
   }
   VAR_21 = FUNC_4(VAR_16,
        (ushort)(VAR_20 +
          VAR_0));
   VAR_13.q_no = VAR_21;
   VAR_20 = FUNC_0(VAR_21);
   FUNC_2(VAR_16,
      VAR_20 + VAR_1,
      (uchar *)&VAR_13,
      sizeof(ASC_SG_LIST_Q) >> 1);
   FUNC_1(VAR_16,
       VAR_20 + VAR_2,
       (uchar *)&VAR_12->
       sg_list[VAR_18],
       VAR_17);
   VAR_18 += VAR_3;
   VAR_8->next_sg_index = VAR_18;
  }
 } else {
  VAR_8->q1.cntl &= ~VAR_6;
 }
 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);
 VAR_8->q1.data_addr = VAR_14;
 VAR_8->q1.data_cnt = VAR_15;
 return (VAR_10);
}
