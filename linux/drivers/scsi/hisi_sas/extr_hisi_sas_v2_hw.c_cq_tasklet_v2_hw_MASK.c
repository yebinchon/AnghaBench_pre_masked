
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct hisi_sas_slot {size_t cmplt_queue_slot; int cmplt_queue; } ;
struct hisi_sas_itct {int * qw4_15; } ;
struct hisi_sas_cq {size_t rd_point; int id; struct hisi_hba* hisi_hba; } ;
struct hisi_sas_complete_v2_hdr {scalar_t__ dw1; scalar_t__ act; } ;
struct hisi_hba {struct hisi_sas_slot* slot_info; struct hisi_sas_itct* itct; struct hisi_sas_complete_v2_hdr** complete_hdr; int reject_stp_links_msk; } ;
typedef int __le64 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (struct hisi_hba*,scalar_t__) ;
 int FUNC_2 (struct hisi_hba*,scalar_t__,size_t) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hisi_hba*) ;
 int FUNC_6 (struct hisi_hba*,struct hisi_sas_slot*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_6)
{
 struct hisi_sas_cq *VAR_7 = (struct hisi_sas_cq *)VAR_6;
 struct hisi_hba *VAR_8 = VAR_7->hisi_hba;
 struct hisi_sas_slot *VAR_9;
 struct hisi_sas_itct *VAR_10;
 struct hisi_sas_complete_v2_hdr *VAR_11;
 u32 VAR_12 = VAR_7->rd_point, VAR_13, VAR_14;
 int VAR_15 = VAR_7->id;

 if (FUNC_7(VAR_8->reject_stp_links_msk))
  FUNC_5(VAR_8);

 VAR_11 = VAR_8->complete_hdr[VAR_15];

 VAR_13 = FUNC_1(VAR_8, VAR_4 +
       (0x14 * VAR_15));

 while (VAR_12 != VAR_13) {
  struct hisi_sas_complete_v2_hdr *VAR_16;
  int VAR_17;

  VAR_16 = &VAR_11[VAR_12];


  if (VAR_16->act) {
   u32 VAR_18 = FUNC_3(VAR_16->act);
   int VAR_19 = FUNC_0(VAR_18);
   u32 VAR_20 = FUNC_3(VAR_16->dw1);

   VAR_14 = (VAR_20 & VAR_0) >>
     VAR_1;
   VAR_10 = &VAR_8->itct[VAR_14];


   while (VAR_19) {
    __le64 *VAR_21 = &VAR_10->qw4_15[0], VAR_22;
    u64 VAR_23;

    VAR_19--;
    VAR_22 = VAR_21[VAR_19 / 5];
    VAR_23 = FUNC_4(VAR_22);
    VAR_17 = (VAR_23 >> (VAR_19 % 5) * 12) &
           0xfff;

    VAR_9 = &VAR_8->slot_info[VAR_17];
    VAR_9->cmplt_queue_slot = VAR_12;
    VAR_9->cmplt_queue = VAR_15;
    FUNC_6(VAR_8, VAR_9);

    VAR_18 &= ~(1 << VAR_19);
    VAR_19 = FUNC_0(VAR_18);
   }
  } else {
   u32 VAR_24 = FUNC_3(VAR_16->dw1);

   VAR_17 = VAR_24 & VAR_2;
   VAR_9 = &VAR_8->slot_info[VAR_17];
   VAR_9->cmplt_queue_slot = VAR_12;
   VAR_9->cmplt_queue = VAR_15;
   FUNC_6(VAR_8, VAR_9);
  }

  if (++VAR_12 >= VAR_5)
   VAR_12 = 0;
 }


 VAR_7->rd_point = VAR_12;
 FUNC_2(VAR_8, VAR_3 + (0x14 * VAR_15), VAR_12);
}
