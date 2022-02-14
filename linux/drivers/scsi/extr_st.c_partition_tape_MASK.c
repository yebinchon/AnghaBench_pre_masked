
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_tape {TYPE_2__* buffer; TYPE_1__* device; } ;
struct TYPE_4__ {unsigned char* b_data; } ;
struct TYPE_3__ {scalar_t__ scsi_level; } ;


 int FUNC_0 (struct scsi_tape*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct scsi_tape*,int) ;
 int FUNC_2 (unsigned char*,int ,unsigned char) ;
 int FUNC_3 (struct scsi_tape*,int ,int ) ;
 int FUNC_4 (int ,struct scsi_tape*,char*) ;
 int FUNC_5 (struct scsi_tape*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_tape *VAR_19, int VAR_20)
{
 int VAR_21;
 int VAR_22;
 bool VAR_23 = VAR_19->device->scsi_level >= VAR_18, VAR_24 = 0;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28 = VAR_11, VAR_29 = 0;
 unsigned char *VAR_30;

 VAR_21 = FUNC_3(VAR_19, VAR_6, 0);
 if (VAR_21) {
  FUNC_0(VAR_19, "Can't read partition mode page.\n");
  return VAR_21;
 }
 VAR_22 = 1;
 if (VAR_20 < 0) {
  VAR_22 = 0;
  VAR_20 = -VAR_20;
 }


 VAR_30 = (VAR_19->buffer)->b_data;
 VAR_25 = VAR_4 + VAR_30[VAR_3];
 FUNC_0(VAR_19, "Partition page length is %d bytes.\n",
      VAR_30[VAR_25 + VAR_5] + 2);

 VAR_26 = (VAR_30[VAR_25 + VAR_5] + 2 - VAR_7) / 2;

 if (VAR_23) {
  VAR_24 = (VAR_30[VAR_25 + VAR_13] & VAR_10) != 0;
  if (VAR_24 && VAR_20 == 0) {



   FUNC_0(VAR_19, "Formatting tape with one partition.\n");
   VAR_21 = FUNC_1(VAR_19, 0);
   goto out;
  }
  if (VAR_24)
   VAR_26 = 2;
  if ((VAR_30[VAR_25 + VAR_13] & VAR_12) == VAR_12) {




   if (VAR_20 >= 1000 && (VAR_20 % 1000) == 0) {
    VAR_20 /= 1000;
    VAR_28 = VAR_12;
    VAR_29 = 9;
   }
  }

  if (VAR_28 == VAR_11 && VAR_20 >= 65534) {
   VAR_20 /= 1000;
   VAR_28 = VAR_12;
   VAR_29 = 9;
  }
 }

 if (VAR_20 >= 65535 ||
     (VAR_22 == 0 && VAR_26 < 2)) {
  VAR_21 = -VAR_0;
  goto out;
 }

 VAR_27 = VAR_25 + VAR_7;



 if (VAR_22 > 0 &&
     (VAR_26 > VAR_30[VAR_25 + VAR_14] ||
      VAR_30[VAR_25 + VAR_14] != 1)) {
  VAR_30[VAR_27] = VAR_30[VAR_27 + 1] = 0xff;
  VAR_27 += 2;
 }
 FUNC_2(VAR_30 + VAR_27, 0, VAR_30[VAR_25 + VAR_15] * 2);

 FUNC_0(VAR_19, "psd_cnt %d, max.parts %d, nbr_parts %d\n",
      VAR_26, VAR_30[VAR_25 + VAR_14],
      VAR_30[VAR_25 + VAR_15]);

 if (VAR_20 == 0) {
  VAR_30[VAR_25 + VAR_15] = 0;
  if (VAR_26 <= VAR_30[VAR_25 + VAR_14])
      VAR_30[VAR_25 + VAR_5] = 6;
  FUNC_0(VAR_19, "Formatting tape with one partition.\n");
 } else {
  VAR_30[VAR_27] = (VAR_20 >> 8) & 0xff;
  VAR_30[VAR_27 + 1] = VAR_20 & 0xff;
  if (VAR_22 == 0)
   VAR_30[VAR_27 + 2] = VAR_30[VAR_27 + 3] = 0xff;
  VAR_30[VAR_25 + 3] = 1;
  if (VAR_30[VAR_25 + VAR_5] < 8)
      VAR_30[VAR_25 + VAR_5] = 8;
  FUNC_0(VAR_19,
       "Formatting tape with two partitions (%i = %d MB).\n",
       VAR_22, VAR_29 > 0 ? VAR_20 * 1000 : VAR_20);
 }
 VAR_30[VAR_25 + VAR_16] = 0;
 VAR_30[VAR_25 + VAR_17] = 0;
 if (VAR_20 != 1 || VAR_29 != 0) {
  VAR_30[VAR_25 + VAR_13] = VAR_9 | VAR_28 |
   (VAR_30[VAR_25 + VAR_13] & 0x07);
  VAR_30[VAR_25 + VAR_16] = VAR_29;
 } else
  VAR_30[VAR_25 + VAR_13] = VAR_8 |
   (VAR_30[VAR_25 + VAR_13] & 0x1f);
 VAR_30[VAR_25 + VAR_5] = 6 + VAR_26 * 2;

 VAR_21 = FUNC_5(VAR_19, VAR_6, 1);

 if (!VAR_21 && VAR_24)
  VAR_21 = FUNC_1(VAR_19, 1);

 if (VAR_21) {
  FUNC_4(VAR_2, VAR_19, "Partitioning of tape failed.\n");
  VAR_21 = (-VAR_1);
 }

out:
 return VAR_21;
}
