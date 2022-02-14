
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_dif_tuple {scalar_t__ app_tag; scalar_t__ ref_tag; scalar_t__ guard_tag; } ;
struct scsi_cmnd {int result; int sense_buffer; } ;
struct scatterlist {int length; } ;
struct lpfc_io_buf {int prot_seg_cnt; struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {int bg_apptag_err_cnt; int bg_reftag_err_cnt; int bg_guard_err_cnt; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 unsigned int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int,char*,unsigned long,scalar_t__,scalar_t__) ;
 int FUNC_6 (int,int ,int ,int,int) ;
 scalar_t__ FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_9 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_10 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_11 (struct scatterlist*) ;
 scalar_t__ FUNC_12 (struct scatterlist*) ;

__attribute__((used)) static void
FUNC_13(struct lpfc_hba *VAR_15, struct lpfc_io_buf *VAR_16)
{
 struct scatterlist *VAR_17;
 struct scatterlist *VAR_18;
 struct scsi_cmnd *VAR_19 = VAR_16->pCmd;
 struct scsi_dif_tuple *VAR_20 = ((void*)0);
 uint8_t *VAR_21 = ((void*)0);
 uint16_t VAR_22;
 uint16_t VAR_23, VAR_24;
 uint32_t VAR_25, VAR_26;
 int VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31;
 int VAR_32, VAR_33, VAR_34;
 uint16_t VAR_35;
 unsigned VAR_36;

 VAR_29 = VAR_1;
 VAR_35 = 0;
 VAR_22 = 0;


 VAR_27 = FUNC_8(VAR_19);
 if ((VAR_27 == VAR_11) ||
     (VAR_27 == VAR_12) ||
     (VAR_27 == VAR_10))
  goto out;


 VAR_32 = 1;
 VAR_33 = 0;
 VAR_34 = 0;


 VAR_17 = FUNC_9(VAR_19);
 VAR_28 = VAR_16->prot_seg_cnt;

 if (VAR_17 && VAR_28) {





  VAR_18 = FUNC_10(VAR_19);
  VAR_36 = FUNC_3(VAR_19);
  VAR_21 = (uint8_t *)FUNC_12(VAR_18);
  VAR_31 = VAR_18->length;
  if ((VAR_31 & (VAR_36 - 1)) == 0)
   VAR_34 = 1;

  VAR_20 = (struct scsi_dif_tuple *)FUNC_12(VAR_17);
  VAR_25 = (uint32_t)FUNC_7(VAR_19);
  VAR_23 = VAR_20->app_tag;
  VAR_30 = VAR_17->length;
  while (VAR_20 && VAR_28) {
   while (VAR_30) {





    if ((VAR_20->ref_tag == VAR_14) ||
        (VAR_20->app_tag == VAR_13)) {
     VAR_25++;
     goto skipit;
    }


    if (VAR_34) {
     VAR_22 = VAR_20->guard_tag;
     if (FUNC_4(VAR_19))
      VAR_35 = FUNC_2(VAR_21,
           VAR_36);
     else
      VAR_35 = FUNC_1(VAR_21,
          VAR_36);
     if ((VAR_22 != VAR_35)) {
      VAR_29 = VAR_1;
      goto out;
     }
    }


    VAR_26 = FUNC_0(VAR_20->ref_tag);
    if (VAR_32 && (VAR_26 != VAR_25)) {
     VAR_29 = VAR_2;
     goto out;
    }
    VAR_25++;


    VAR_24 = VAR_20->app_tag;
    if (VAR_33 && (VAR_24 != VAR_23)) {
     VAR_29 = VAR_0;
     goto out;
    }
skipit:
    VAR_30 -= sizeof(struct scsi_dif_tuple);
    if (VAR_30 < 0)
     VAR_30 = 0;
    VAR_20++;

    VAR_21 += VAR_36;
    VAR_31 -= VAR_36;






    if (VAR_34 && (VAR_31 == 0)) {
     VAR_34 = 0;
     VAR_18 = FUNC_11(VAR_18);
     if (!VAR_18)
      goto out;

     VAR_21 = (uint8_t *)FUNC_12(VAR_18);
     VAR_31 = VAR_18->length;
     if ((VAR_31 & (VAR_36 - 1)) == 0)
      VAR_34 = 1;
    }
   }


   VAR_17 = FUNC_11(VAR_17);
   if (VAR_17) {
    VAR_20 = (struct scsi_dif_tuple *)FUNC_12(VAR_17);
    VAR_30 = VAR_17->length;
   } else {
    VAR_20 = ((void*)0);
   }
   VAR_28--;
  }
 }
out:
 if (VAR_29 == VAR_1) {
  FUNC_6(1, VAR_19->sense_buffer, VAR_5,
     0x10, 0x1);
  VAR_19->result = VAR_4 << 24 | VAR_3 << 16 |
         VAR_9;
  VAR_15->bg_guard_err_cnt++;
  FUNC_5(VAR_15, VAR_6, VAR_8 | VAR_7,
    "9069 BLKGRD: LBA %lx grd_tag error %x != %x\n",
    (unsigned long)FUNC_7(VAR_19),
    VAR_35, VAR_22);

 } else if (VAR_29 == VAR_2) {
  FUNC_6(1, VAR_19->sense_buffer, VAR_5,
     0x10, 0x3);
  VAR_19->result = VAR_4 << 24 | VAR_3 << 16 |
         VAR_9;

  VAR_15->bg_reftag_err_cnt++;
  FUNC_5(VAR_15, VAR_6, VAR_8 | VAR_7,
    "9066 BLKGRD: LBA %lx ref_tag error %x != %x\n",
    (unsigned long)FUNC_7(VAR_19),
    VAR_26, VAR_25);

 } else if (VAR_29 == VAR_0) {
  FUNC_6(1, VAR_19->sense_buffer, VAR_5,
     0x10, 0x2);
  VAR_19->result = VAR_4 << 24 | VAR_3 << 16 |
         VAR_9;

  VAR_15->bg_apptag_err_cnt++;
  FUNC_5(VAR_15, VAR_6, VAR_8 | VAR_7,
    "9041 BLKGRD: LBA %lx app_tag error %x != %x\n",
    (unsigned long)FUNC_7(VAR_19),
    VAR_24, VAR_23);
 }
}
