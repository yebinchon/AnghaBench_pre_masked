
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sli4_sge_diseed {int word2; int word3; void* sge_len; void* addr_hi; void* addr_lo; void* ref_tag; void* ref_tag_tran; } ;
struct sli4_sge {int word2; int word3; void* sge_len; void* addr_hi; void* addr_lo; void* ref_tag; void* ref_tag_tran; } ;
struct sli4_hybrid_sgl {scalar_t__ dma_sgl; int dma_phys_sgl; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct scatterlist {int dummy; } ;
struct lpfc_io_buf {scalar_t__ seg_cnt; } ;
struct lpfc_hba {int border_sge_num; int cfg_sg_dma_buf_size; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct sli4_sge_diseed*) ;
 int FUNC_1 (int ,struct sli4_sge_diseed*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct lpfc_hba*,struct scsi_cmnd*,int*,int *,int) ;
 int FUNC_4 (struct lpfc_hba*,struct scsi_cmnd*,int*,int*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*,int ) ;
 struct sli4_hybrid_sgl* FUNC_6 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_7 (struct lpfc_hba*,struct scsi_cmnd*,int*,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (struct sli4_sge_diseed*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scatterlist*) ;
 int FUNC_14 (struct scatterlist*) ;
 struct scatterlist* FUNC_15 (struct scatterlist*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17(struct lpfc_hba *VAR_17, struct scsi_cmnd *VAR_18,
  struct sli4_sge *VAR_19, int VAR_20,
  struct lpfc_io_buf *VAR_21)
{
 struct scatterlist *VAR_22 = ((void*)0);
 struct sli4_sge_diseed *VAR_23 = ((void*)0);
 dma_addr_t VAR_24;
 int VAR_25 = 0, VAR_26 = 0, VAR_27;
 uint32_t VAR_28;
 uint8_t VAR_29, VAR_30;



 uint32_t VAR_31 = 1;
 uint32_t VAR_32;
 uint32_t VAR_33 = 0;
 struct sli4_hybrid_sgl *VAR_34 = ((void*)0);
 int VAR_35;
 bool VAR_36 = 0;

 VAR_27 = FUNC_7(VAR_17, VAR_18, &VAR_29, &VAR_30);
 if (VAR_27)
  goto out;


 VAR_28 = (uint32_t)FUNC_11(VAR_18);
 VAR_23 = (struct sli4_sge_diseed *) VAR_19;
 FUNC_8(VAR_23, 0, sizeof(struct sli4_sge_diseed));
 FUNC_1(VAR_16, VAR_19, VAR_6);


 VAR_23->ref_tag = FUNC_2(VAR_28);
 VAR_23->ref_tag_tran = VAR_23->ref_tag;





 if (VAR_18->sc_data_direction == VAR_2) {
  if (FUNC_5(VAR_18, VAR_3))
   FUNC_1(VAR_9, VAR_23, VAR_31);
  else
   FUNC_1(VAR_9, VAR_23, 0);

  if (FUNC_5(VAR_18, VAR_4))
   FUNC_1(VAR_13, VAR_23, VAR_31);
  else
   FUNC_1(VAR_13, VAR_23, 0);
 }


 FUNC_1(VAR_12, VAR_23, VAR_29);
 FUNC_1(VAR_11, VAR_23, VAR_30);

 FUNC_1(VAR_8, VAR_23, 1);
 FUNC_1(VAR_10, VAR_23, 0);


 VAR_23->word2 = FUNC_2(VAR_23->word2);
 VAR_23->word3 = FUNC_2(VAR_23->word3);


 VAR_26++;
 VAR_19++;


 VAR_22 = FUNC_12(VAR_18);
 VAR_35 = 3;
 for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {

  VAR_19->word2 = 0;


  if (!VAR_36 && !((VAR_35 + 1) % VAR_17->border_sge_num) &&
      ((VAR_20 - 1) != VAR_25)) {

   FUNC_1(VAR_16, VAR_19, VAR_7);

   VAR_34 = FUNC_6(VAR_17, VAR_21);

   if (FUNC_16(!VAR_34)) {
    VAR_21->seg_cnt = 0;
    return 0;
   }
   VAR_19->addr_lo = FUNC_2(FUNC_10(
      VAR_34->dma_phys_sgl));
   VAR_19->addr_hi = FUNC_2(FUNC_9(
      VAR_34->dma_phys_sgl));

  } else {
   FUNC_1(VAR_16, VAR_19, VAR_5);
  }

  if (!(FUNC_0(VAR_16, VAR_19) & VAR_7)) {
   if ((VAR_20 - 1) == VAR_25)
    FUNC_1(VAR_14, VAR_19, 1);
   VAR_24 = FUNC_13(VAR_22);
   VAR_32 = FUNC_14(VAR_22);
   VAR_19->addr_lo = FUNC_2(FUNC_10(VAR_24));
   VAR_19->addr_hi = FUNC_2(FUNC_9(VAR_24));

   FUNC_1(VAR_15, VAR_19, VAR_33);
   VAR_19->word2 = FUNC_2(VAR_19->word2);
   VAR_19->sge_len = FUNC_2(VAR_32);

   VAR_33 += VAR_32;
   VAR_22 = FUNC_15(VAR_22);

   VAR_19++;
   VAR_26++;
   VAR_36 = 0;

  } else {
   VAR_19->word2 = FUNC_2(VAR_19->word2);
   VAR_19->sge_len = FUNC_2(VAR_17->cfg_sg_dma_buf_size);

   VAR_19 = (struct sli4_sge *)VAR_34->dma_sgl;
   VAR_25 = VAR_25 - 1;

   VAR_36 = 1;
  }

  VAR_35++;

 }

out:
 return VAR_26;
}
