
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_rqe {int dummy; } ;
struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {int host_index; scalar_t__ type; int entry_count; int hba_index; int notify_interval; scalar_t__ db_format; int queue_id; int db_regaddr; int RQ_buf_posted; int entry_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct lpfc_rqe*,struct lpfc_rqe*,int ) ;
 struct lpfc_rqe* FUNC_2 (struct lpfc_queue*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ) ;

int
FUNC_5(struct lpfc_queue *VAR_12, struct lpfc_queue *VAR_13,
   struct lpfc_rqe *VAR_14, struct lpfc_rqe *VAR_15)
{
 struct lpfc_rqe *VAR_16;
 struct lpfc_rqe *VAR_17;
 struct lpfc_register VAR_18;
 int VAR_19;
 int VAR_20;


 if (FUNC_3(!VAR_12) || FUNC_3(!VAR_13))
  return -VAR_2;
 VAR_19 = VAR_12->host_index;
 VAR_20 = VAR_13->host_index;
 VAR_16 = FUNC_2(VAR_12, VAR_19);
 VAR_17 = FUNC_2(VAR_13, VAR_20);

 if (VAR_12->type != VAR_6 || VAR_13->type != VAR_5)
  return -VAR_1;
 if (VAR_19 != VAR_20)
  return -VAR_1;

 if (((VAR_19 + 1) % VAR_12->entry_count) == VAR_12->hba_index)
  return -VAR_0;
 FUNC_1(VAR_14, VAR_16, VAR_12->entry_size);
 FUNC_1(VAR_15, VAR_17, VAR_13->entry_size);


 VAR_12->host_index = ((VAR_19 + 1) % VAR_12->entry_count);
 VAR_13->host_index = ((VAR_20 + 1) % VAR_13->entry_count);
 VAR_12->RQ_buf_posted++;


 if (!(VAR_12->host_index % VAR_12->notify_interval)) {
  VAR_18.word0 = 0;
  if (VAR_12->db_format == VAR_4) {
   FUNC_0(VAR_11, &VAR_18,
          VAR_12->notify_interval);
   FUNC_0(VAR_10, &VAR_18, VAR_12->queue_id);
  } else if (VAR_12->db_format == VAR_3) {
   FUNC_0(VAR_9, &VAR_18,
          VAR_12->notify_interval);
   FUNC_0(VAR_8, &VAR_18,
          VAR_12->host_index);
   FUNC_0(VAR_7, &VAR_18, VAR_12->queue_id);
  } else {
   return -VAR_1;
  }
  FUNC_4(VAR_18.word0, VAR_12->db_regaddr);
 }
 return VAR_19;
}
