
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sense_data_t {int dummy; } ;
struct scsi_cmnd {int dummy; } ;
struct ms_info {scalar_t__ format_status; scalar_t__ progress; scalar_t__ pro_under_formatting; } ;
struct rtsx_chip {struct sense_data_t* sense_buffer; struct ms_info ms_card; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct rtsx_chip*,unsigned int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int ) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (unsigned char*,int ,struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,int ) ;
 int FUNC_7 (struct rtsx_chip*,unsigned int,int ,int,int ,int,int,int ,int ) ;
 int FUNC_8 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_9, struct rtsx_chip *VAR_10)
{
 struct sense_data_t *VAR_11;
 unsigned int VAR_12 = FUNC_0(VAR_9);
 struct ms_info *VAR_13 = &VAR_10->ms_card;
 unsigned char *VAR_14, *VAR_15;

 VAR_11 = &VAR_10->sense_buffer[VAR_12];

 if ((FUNC_1(VAR_10, VAR_12) == VAR_3) &&
     VAR_13->pro_under_formatting) {
  if (VAR_13->format_status == VAR_2) {
   FUNC_8(VAR_10, VAR_12, VAR_6);
   VAR_13->pro_under_formatting = 0;
   VAR_13->progress = 0;
  } else if (VAR_13->format_status == VAR_1) {

   FUNC_7(VAR_10, VAR_12, VAR_0, 0x02, 0, 0x04, 0x04,
           0, (u16)(VAR_13->progress));
  } else {

   FUNC_8(VAR_10, VAR_12, VAR_5);
   VAR_13->pro_under_formatting = 0;
   VAR_13->progress = 0;
  }

  FUNC_3(VAR_10, VAR_4);
 }

 VAR_15 = FUNC_10(FUNC_5(VAR_9));
 if (!VAR_15)
  return VAR_7;

 VAR_14 = (unsigned char *)VAR_11;
 FUNC_2(VAR_15, VAR_14, FUNC_5(VAR_9));

 FUNC_4(VAR_15, FUNC_5(VAR_9), VAR_9);
 FUNC_9(VAR_15);

 FUNC_6(VAR_9, 0);

 FUNC_8(VAR_10, VAR_12, VAR_6);
 return VAR_8;
}
