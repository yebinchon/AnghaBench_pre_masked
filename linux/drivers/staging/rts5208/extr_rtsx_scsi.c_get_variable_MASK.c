
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xd_info {int xd_clock; } ;
struct sd_info {int sd_clock; } ;
struct scsi_cmnd {int* cmnd; } ;
struct ms_info {int ms_clock; } ;
struct rtsx_chip {int blink_led; struct ms_info ms_card; struct sd_info sd_card; struct xd_info xd_card; } ;



 unsigned int FUNC_0 (struct scsi_cmnd*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (int *,int,struct scsi_cmnd*) ;
 int FUNC_2 (struct rtsx_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_3, struct rtsx_chip *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3);

 if (VAR_3->cmnd[3] == 1) {
  struct xd_info *VAR_6 = &VAR_4->xd_card;
  struct sd_info *VAR_7 = &VAR_4->sd_card;
  struct ms_info *VAR_8 = &VAR_4->ms_card;
  u8 VAR_9;

  switch (VAR_3->cmnd[4]) {
  case 128:
   VAR_9 = (u8)(VAR_6->xd_clock);
   break;

  case 129:
   VAR_9 = (u8)(VAR_7->sd_clock);
   break;

  case 130:
   VAR_9 = (u8)(VAR_8->ms_clock);
   break;

  default:
   FUNC_2(VAR_4, VAR_5,
           VAR_0);
   return VAR_1;
  }

  FUNC_1(&VAR_9, 1, VAR_3);
 } else if (VAR_3->cmnd[3] == 2) {
  u8 VAR_10 = VAR_4->blink_led;

  FUNC_1(&VAR_10, 1, VAR_3);
 } else {
  FUNC_2(VAR_4, VAR_5, VAR_0);
  return VAR_1;
 }

 return VAR_2;
}
