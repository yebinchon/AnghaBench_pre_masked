
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct ms_delay_write_tag {int delay_write_flag; scalar_t__ logblock; scalar_t__ pageoff; scalar_t__ old_phyblock; scalar_t__ new_phyblock; } ;
struct ms_info {int block_shift; int page_off; TYPE_1__* segment; scalar_t__ cleanup_counter; struct ms_delay_write_tag delay_write; } ;
struct rtsx_chip {int card_fail; struct ms_info ms_card; } ;
struct TYPE_2__ {scalar_t__ build_flag; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (int ,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct rtsx_chip*,int) ;
 int FUNC_5 (struct rtsx_chip*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,scalar_t__) ;
 int FUNC_8 (struct rtsx_chip*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct rtsx_chip*,int,scalar_t__) ;
 scalar_t__ FUNC_10 (struct rtsx_chip*,int) ;
 int FUNC_11 (struct rtsx_chip*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct rtsx_chip*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,unsigned int*,unsigned int*) ;
 int FUNC_13 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*,int ) ;
 int FUNC_15 (struct rtsx_chip*,int,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct rtsx_chip*,scalar_t__) ;
 scalar_t__* VAR_9 ;
 int FUNC_17 (struct rtsx_chip*) ;
 int FUNC_18 (struct rtsx_chip*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,unsigned int*,unsigned int*) ;
 int FUNC_19 (struct rtsx_chip*) ;
 int FUNC_20 (struct scsi_cmnd*,int ) ;
 scalar_t__ FUNC_21 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_22 (struct scsi_cmnd*) ;
 int FUNC_23 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_24 (struct rtsx_chip*,int) ;

__attribute__((used)) static int FUNC_25(struct scsi_cmnd *VAR_10, struct rtsx_chip *VAR_11,
         u32 VAR_12, u16 VAR_13)
{
 struct ms_info *VAR_14 = &VAR_11->ms_card;
 unsigned int VAR_15 = FUNC_1(VAR_10);
 int VAR_16, VAR_17;
 unsigned int VAR_18 = 0, VAR_19 = 0;
 u16 VAR_20 = 0, VAR_21 = 0, VAR_22, VAR_23 = VAR_13;
 u8 VAR_24, VAR_25 = 0, VAR_26;
 u8 *VAR_27;




 FUNC_14(VAR_11, VAR_3);

 VAR_14->cleanup_counter = 0;

 VAR_27 = (u8 *)FUNC_22(VAR_10);

 VAR_16 = FUNC_17(VAR_11);
 if (VAR_16 != VAR_8) {
  FUNC_13(VAR_10, VAR_11);
  return VAR_7;
 }

 VAR_22 = (u16)(VAR_12 >> VAR_14->block_shift);
 VAR_24 = (u8)(VAR_12 & VAR_14->page_off);

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_9) - 1; VAR_17++) {
  if (VAR_22 < VAR_9[VAR_17 + 1])
   break;
 }

 if (VAR_14->segment[VAR_17].build_flag == 0) {
  VAR_16 = FUNC_4(VAR_11, VAR_17);
  if (VAR_16 != VAR_8) {
   VAR_11->card_fail |= VAR_2;
   FUNC_23(VAR_11, VAR_15, VAR_4);
   return VAR_7;
  }
 }

 if (VAR_10->sc_data_direction == VAR_1) {
   VAR_20 = FUNC_9
     (VAR_11, VAR_17,
      VAR_22 - VAR_9[VAR_17]);
   VAR_21 = FUNC_10(VAR_11, VAR_17);
   if ((VAR_20 == 0xFFFF) || (VAR_21 == 0xFFFF)) {
    FUNC_23(VAR_11, VAR_15,
            VAR_6);
    return VAR_7;
   }

   VAR_16 = FUNC_11(VAR_11, VAR_20, VAR_21,
        VAR_22, VAR_24);
   if (VAR_16 != VAR_8) {
    if (FUNC_2(VAR_11, VAR_2) !=
        VAR_8) {
     FUNC_23
      (VAR_11, VAR_15,
      VAR_4);
     return VAR_7;
    }
    FUNC_23(VAR_11, VAR_15,
            VAR_6);
    return VAR_7;
   }



 } else {
  VAR_20 = FUNC_9(VAR_11, VAR_17,
      VAR_22 - VAR_9[VAR_17]);
  if (VAR_20 == 0xFFFF) {
   FUNC_23(VAR_11, VAR_15,
           VAR_5);
   return VAR_7;
  }
 }

 FUNC_3(FUNC_19(VAR_11), "seg_no = %d, old_blk = 0x%x, new_blk = 0x%x\n",
  VAR_17, VAR_20, VAR_21);

 while (VAR_23) {
  if ((VAR_24 + VAR_23) > (VAR_14->page_off + 1))
   VAR_25 = VAR_14->page_off + 1;
  else
   VAR_25 = VAR_24 + (u8)VAR_23;

  VAR_26 = VAR_25 - VAR_24;

  FUNC_3(FUNC_19(VAR_11), "start_page = %d, end_page = %d, page_cnt = %d\n",
   VAR_24, VAR_25, VAR_26);

  if (VAR_10->sc_data_direction == VAR_0) {
   VAR_16 = FUNC_12(VAR_11,
       VAR_20, VAR_22,
       VAR_24, VAR_25,
       VAR_27, &VAR_18, &VAR_19);
  } else {
   VAR_16 = FUNC_18(VAR_11, VAR_20, VAR_21,
        VAR_22, VAR_24,
        VAR_25, VAR_27, &VAR_18,
        &VAR_19);
  }

  if (VAR_16 != VAR_8) {
   FUNC_24(VAR_11, 1);
   if (FUNC_2(VAR_11, VAR_2) != VAR_8) {
    FUNC_23(VAR_11, VAR_15,
            VAR_4);
    return VAR_7;
   }
   FUNC_13(VAR_10, VAR_11);
   return VAR_7;
  }

  if (VAR_10->sc_data_direction == VAR_1) {
   if (VAR_25 == (VAR_14->page_off + 1)) {
    VAR_16 = FUNC_7(VAR_11, VAR_20);
    if (VAR_16 == VAR_8)
     FUNC_16(VAR_11, VAR_20);

    FUNC_15(VAR_11, VAR_17,
            VAR_22 - VAR_9[VAR_17],
            VAR_21);
   }
  }

  VAR_23 -= VAR_26;
  if (FUNC_21(VAR_10) == 0)
   VAR_27 += VAR_26 * 512;

  if (VAR_23 == 0)
   break;

  VAR_22++;

  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_9) - 1;
    VAR_17++) {
   if (VAR_22 < VAR_9[VAR_17 + 1])
    break;
  }

  if (VAR_14->segment[VAR_17].build_flag == 0) {
   VAR_16 = FUNC_4(VAR_11, VAR_17);
   if (VAR_16 != VAR_8) {
    VAR_11->card_fail |= VAR_2;
    FUNC_23(VAR_11, VAR_15,
            VAR_4);
    return VAR_7;
   }
  }

  VAR_20 = FUNC_9(VAR_11, VAR_17,
      VAR_22 - VAR_9[VAR_17]);
  if (VAR_20 == 0xFFFF) {
   FUNC_13(VAR_10, VAR_11);
   return VAR_7;
  }

  if (VAR_10->sc_data_direction == VAR_1) {
   VAR_21 = FUNC_10(VAR_11, VAR_17);
   if (VAR_21 == 0xFFFF) {
    FUNC_13(VAR_10, VAR_11);
    return VAR_7;
   }
  }

  FUNC_3(FUNC_19(VAR_11), "seg_no = %d, old_blk = 0x%x, new_blk = 0x%x\n",
   VAR_17, VAR_20, VAR_21);

  VAR_24 = 0;
 }

 if (VAR_10->sc_data_direction == VAR_1) {
  if (VAR_25 < (VAR_14->page_off + 1)) {







   VAR_16 = FUNC_8(VAR_11, VAR_20, VAR_21,
       VAR_22, VAR_25);
   if (VAR_16 != VAR_8) {
    if (FUNC_2(VAR_11, VAR_2) !=
        VAR_8) {
     FUNC_23
      (VAR_11, VAR_15,
      VAR_4);
     return VAR_7;
    }

    FUNC_13(VAR_10, VAR_11);
    return VAR_7;
   }

  }
 }

 FUNC_20(VAR_10, 0);

 return VAR_8;
}
