
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hisi_sas_slot {size_t cmplt_queue_slot; int cmplt_queue; } ;
struct hisi_sas_cq {size_t rd_point; int id; struct hisi_hba* hisi_hba; } ;
struct hisi_sas_complete_v3_hdr {int dw1; } ;
struct hisi_hba {struct hisi_sas_slot* slot_info; struct device* dev; struct hisi_sas_complete_v3_hdr** complete_hdr; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 size_t FUNC_1 (struct hisi_hba*,scalar_t__) ;
 int FUNC_2 (struct hisi_hba*,scalar_t__,size_t) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct hisi_hba*,struct hisi_sas_slot*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_5)
{
 struct hisi_sas_cq *VAR_6 = (struct hisi_sas_cq *)VAR_5;
 struct hisi_hba *VAR_7 = VAR_6->hisi_hba;
 struct hisi_sas_slot *VAR_8;
 struct hisi_sas_complete_v3_hdr *VAR_9;
 u32 VAR_10 = VAR_6->rd_point, VAR_11;
 int VAR_12 = VAR_6->id;

 VAR_9 = VAR_7->complete_hdr[VAR_12];

 VAR_11 = FUNC_1(VAR_7, VAR_2 +
       (0x14 * VAR_12));

 while (VAR_10 != VAR_11) {
  struct hisi_sas_complete_v3_hdr *VAR_13;
  struct device *VAR_14 = VAR_7->dev;
  u32 VAR_15;
  int VAR_16;

  VAR_13 = &VAR_9[VAR_10];
  VAR_15 = FUNC_3(VAR_13->dw1);

  VAR_16 = VAR_15 & VAR_0;
  if (FUNC_4(VAR_16 < VAR_3)) {
   VAR_8 = &VAR_7->slot_info[VAR_16];
   VAR_8->cmplt_queue_slot = VAR_10;
   VAR_8->cmplt_queue = VAR_12;
   FUNC_5(VAR_7, VAR_8);
  } else
   FUNC_0(VAR_14, "IPTT %d is invalid, discard it.\n", VAR_16);

  if (++VAR_10 >= VAR_4)
   VAR_10 = 0;
 }


 VAR_6->rd_point = VAR_10;
 FUNC_2(VAR_7, VAR_1 + (0x14 * VAR_12), VAR_10);
}
