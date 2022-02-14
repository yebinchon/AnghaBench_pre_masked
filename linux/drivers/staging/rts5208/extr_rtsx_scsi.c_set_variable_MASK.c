
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xd_info {int xd_clock; } ;
struct sd_info {int sd_clock; } ;
struct scsi_cmnd {int* cmnd; } ;
struct ms_info {int ms_clock; } ;
struct rtsx_chip {int blink_led; scalar_t__ ss_en; struct ms_info ms_card; struct sd_info sd_card; struct xd_info xd_card; } ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct scsi_cmnd*) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_7 (struct rtsx_chip*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_9, struct rtsx_chip *VAR_10)
{
 unsigned int VAR_11 = FUNC_0(VAR_9);

 if (VAR_9->cmnd[3] == 1) {

  struct xd_info *VAR_12 = &VAR_10->xd_card;
  struct sd_info *VAR_13 = &VAR_10->sd_card;
  struct ms_info *VAR_14 = &VAR_10->ms_card;

  switch (VAR_9->cmnd[4]) {
  case 128:
   VAR_12->xd_clock = VAR_9->cmnd[5];
   break;

  case 129:
   VAR_13->sd_clock = VAR_9->cmnd[5];
   break;

  case 130:
   VAR_14->ms_clock = VAR_9->cmnd[5];
   break;

  default:
   FUNC_6(VAR_10, VAR_11,
           VAR_3);
   return VAR_7;
  }
 } else if (VAR_9->cmnd[3] == 2) {
  if (VAR_9->cmnd[4]) {
   VAR_10->blink_led = 1;
  } else {
   int VAR_15;

   VAR_10->blink_led = 0;

   FUNC_1(VAR_10);

   if (VAR_10->ss_en &&
       (FUNC_4(VAR_10) == VAR_2)) {
    FUNC_2(VAR_10);
    FUNC_8(100);
   }
   FUNC_5(VAR_10, VAR_1);

   VAR_15 = FUNC_3(VAR_10, VAR_5);
   if (VAR_15 != VAR_6) {
    FUNC_6(VAR_10, FUNC_0(VAR_9),
            VAR_4);
    return VAR_7;
   }

   FUNC_7(VAR_10, VAR_0);
  }
 } else {
  FUNC_6(VAR_10, VAR_11, VAR_3);
  return VAR_7;
 }

 return VAR_8;
}
