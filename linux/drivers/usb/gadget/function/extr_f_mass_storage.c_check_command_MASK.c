
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {scalar_t__ sense_data; scalar_t__ unit_attention_data; scalar_t__ info_valid; scalar_t__ sense_data_info; } ;
struct fsg_common {int* cmnd; scalar_t__ data_dir; int data_size; int data_size_from_cmnd; int cmnd_size; int phase_error; int residue; int usb_amount_left; unsigned int lun; scalar_t__ bad_lun_okay; struct fsg_lun* curlun; } ;
typedef enum data_direction { ____Placeholder_data_direction } data_direction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fsg_common*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct fsg_common*,char*,char const*,int,char const,int,int,char*) ;
 int FUNC_2 (struct fsg_lun*) ;
 int FUNC_3 (char*,char*,char const,int) ;

__attribute__((used)) static int FUNC_4(struct fsg_common *VAR_8, int VAR_9,
    enum data_direction VAR_10, unsigned int VAR_11,
    int VAR_12, const char *VAR_13)
{
 int VAR_14;
 unsigned int VAR_15 = VAR_8->cmnd[1] >> 5;
 static const char VAR_16[4] = {'u', 'o', 'i', 'n'};
 char VAR_17[20];
 struct fsg_lun *VAR_18;

 VAR_17[0] = 0;
 if (VAR_8->data_dir != VAR_1)
  FUNC_3(VAR_17, ", H%c=%u", VAR_16[(int) VAR_8->data_dir],
   VAR_8->data_size);
 FUNC_1(VAR_8, "SCSI command: %s;  Dc=%d, D%c=%u;  Hc=%d%s\n",
      VAR_13, VAR_9, VAR_16[(int) VAR_10],
      VAR_8->data_size_from_cmnd, VAR_8->cmnd_size, VAR_17);





 if (VAR_8->data_size_from_cmnd == 0)
  VAR_10 = VAR_0;
 if (VAR_8->data_size < VAR_8->data_size_from_cmnd) {





  VAR_8->data_size_from_cmnd = VAR_8->data_size;
  VAR_8->phase_error = 1;
 }
 VAR_8->residue = VAR_8->data_size;
 VAR_8->usb_amount_left = VAR_8->data_size;


 if (VAR_8->data_dir != VAR_10 && VAR_8->data_size_from_cmnd > 0) {
  VAR_8->phase_error = 1;
  return -VAR_2;
 }


 if (VAR_9 != VAR_8->cmnd_size) {
  if (VAR_9 <= VAR_8->cmnd_size) {
   FUNC_0(VAR_8, "%s is buggy! Expected length %d "
       "but we got %d\n", VAR_13,
       VAR_9, VAR_8->cmnd_size);
   VAR_9 = VAR_8->cmnd_size;
  } else {
   VAR_8->phase_error = 1;
   return -VAR_2;
  }
 }


 if (VAR_8->lun != VAR_15)
  FUNC_0(VAR_8, "using LUN %u from CBW, not LUN %u from CDB\n",
      VAR_8->lun, VAR_15);


 VAR_18 = VAR_8->curlun;
 if (VAR_18) {
  if (VAR_8->cmnd[0] != VAR_4) {
   VAR_18->sense_data = VAR_7;
   VAR_18->sense_data_info = 0;
   VAR_18->info_valid = 0;
  }
 } else {
  VAR_8->bad_lun_okay = 0;





  if (VAR_8->cmnd[0] != VAR_3 &&
      VAR_8->cmnd[0] != VAR_4) {
   FUNC_0(VAR_8, "unsupported LUN %u\n", VAR_8->lun);
   return -VAR_2;
  }
 }





 if (VAR_18 && VAR_18->unit_attention_data != VAR_7 &&
     VAR_8->cmnd[0] != VAR_3 &&
     VAR_8->cmnd[0] != VAR_4) {
  VAR_18->sense_data = VAR_18->unit_attention_data;
  VAR_18->unit_attention_data = VAR_7;
  return -VAR_2;
 }


 VAR_8->cmnd[1] &= 0x1f;
 for (VAR_14 = 1; VAR_14 < VAR_9; ++VAR_14) {
  if (VAR_8->cmnd[VAR_14] && !(VAR_11 & (1 << VAR_14))) {
   if (VAR_18)
    VAR_18->sense_data = VAR_5;
   return -VAR_2;
  }
 }



 if (VAR_18 && !FUNC_2(VAR_18) && VAR_12) {
  VAR_18->sense_data = VAR_6;
  return -VAR_2;
 }

 return 0;
}
