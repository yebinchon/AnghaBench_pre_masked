
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hisi_sas_slot {size_t cmplt_queue_slot; int cmplt_queue; } ;
struct hisi_sas_cq {int id; size_t rd_point; struct hisi_hba* hisi_hba; } ;
struct hisi_sas_complete_v1_hdr {int data; } ;
struct hisi_hba {int lock; struct hisi_sas_slot* slot_info; scalar_t__* complete_hdr; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_0 (struct hisi_hba*,scalar_t__) ;
 int FUNC_1 (struct hisi_hba*,scalar_t__,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct hisi_hba*,struct hisi_sas_slot*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct hisi_sas_cq *VAR_9 = VAR_8;
 struct hisi_hba *VAR_10 = VAR_9->hisi_hba;
 struct hisi_sas_slot *VAR_11;
 int VAR_12 = VAR_9->id;
 struct hisi_sas_complete_v1_hdr *VAR_13 =
   (struct hisi_sas_complete_v1_hdr *)
   VAR_10->complete_hdr[VAR_12];
 u32 VAR_14 = VAR_9->rd_point, VAR_15;

 FUNC_4(&VAR_10->lock);
 FUNC_1(VAR_10, VAR_6, 1 << VAR_12);
 VAR_15 = FUNC_0(VAR_10,
   VAR_3 + (0x14 * VAR_12));

 while (VAR_14 != VAR_15) {
  struct hisi_sas_complete_v1_hdr *VAR_16;
  int VAR_17;
  u32 VAR_18;

  VAR_16 = &VAR_13[VAR_14];
  VAR_18 = FUNC_2(VAR_16->data);
  VAR_17 = (VAR_18 & VAR_0) >>
        VAR_1;
  VAR_11 = &VAR_10->slot_info[VAR_17];





  VAR_11->cmplt_queue_slot = VAR_14;
  VAR_11->cmplt_queue = VAR_12;
  FUNC_3(VAR_10, VAR_11);

  if (++VAR_14 >= VAR_4)
   VAR_14 = 0;
 }


 VAR_9->rd_point = VAR_14;
 FUNC_1(VAR_10, VAR_2 + (0x14 * VAR_12), VAR_14);
 FUNC_5(&VAR_10->lock);

 return VAR_5;
}
