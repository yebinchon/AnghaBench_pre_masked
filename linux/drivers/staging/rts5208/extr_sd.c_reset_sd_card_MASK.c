
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_type; scalar_t__ capacity; } ;
struct rtsx_chip {size_t* card2lun; int sd_io; int sd_ctl; scalar_t__* capacity; scalar_t__ asic_code; scalar_t__ ignore_sd; struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct rtsx_chip*,size_t) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct rtsx_chip*,size_t) ;
 int FUNC_5 (struct sd_info*,int ,int) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*,int ,int,int) ;
 scalar_t__ FUNC_10 (struct rtsx_chip*,int ) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*,int ) ;
 int FUNC_15 (struct rtsx_chip*) ;

int FUNC_16(struct rtsx_chip *VAR_10)
{
 struct sd_info *VAR_11 = &VAR_10->sd_card;
 int VAR_12;

 FUNC_12(VAR_10);

 FUNC_5(VAR_11, 0, sizeof(struct sd_info));
 VAR_10->capacity[VAR_10->card2lun[VAR_5]] = 0;

 VAR_12 = FUNC_4(VAR_10, VAR_5);
 if (VAR_12 != VAR_9)
  return VAR_8;

 if (VAR_10->ignore_sd && FUNC_0(VAR_10) &&
     !FUNC_1(VAR_10)) {
  if (VAR_10->asic_code) {
   VAR_12 = FUNC_13(VAR_10);
   if (VAR_12 != VAR_9)
    return VAR_8;
  } else {
   VAR_12 = FUNC_9(VAR_10, VAR_0,
           VAR_1 |
           0x20, 0);
   if (VAR_12 != VAR_9)
    return VAR_8;
  }
  VAR_12 = FUNC_2(VAR_10, VAR_5);
  if (VAR_12 != VAR_9)
   return VAR_8;

  VAR_10->sd_io = 1;
  return VAR_8;
 }

 VAR_12 = FUNC_11(VAR_10);
 if (VAR_12 != VAR_9)
  return VAR_8;

 if (VAR_10->sd_ctl & VAR_4) {
  VAR_12 = FUNC_6(VAR_10);
  if (VAR_12 != VAR_9) {
   if (FUNC_10(VAR_10, VAR_7))
    return VAR_8;

   VAR_12 = FUNC_7(VAR_10);
   if (VAR_12 != VAR_9)
    return VAR_8;
  }
 } else {
  VAR_12 = FUNC_7(VAR_10);
  if (VAR_12 != VAR_9) {
   if (FUNC_10(VAR_10, VAR_7))
    return VAR_8;

   if (VAR_10->sd_io)
    return VAR_8;
   VAR_12 = FUNC_6(VAR_10);
   if (VAR_12 != VAR_9)
    return VAR_8;
  }
 }

 VAR_12 = FUNC_14(VAR_10, VAR_6);
 if (VAR_12 != VAR_9)
  return VAR_8;

 VAR_12 = FUNC_9(VAR_10, VAR_3, 0xFF, 0);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_9(VAR_10, VAR_2, 0xFF, 2);
 if (VAR_12)
  return VAR_12;

 VAR_10->capacity[VAR_10->card2lun[VAR_5]] = VAR_11->capacity;

 VAR_12 = FUNC_15(VAR_10);
 if (VAR_12 != VAR_9)
  return VAR_8;

 FUNC_3(FUNC_8(VAR_10), "sd_card->sd_type = 0x%x\n", VAR_11->sd_type);

 return VAR_9;
}
