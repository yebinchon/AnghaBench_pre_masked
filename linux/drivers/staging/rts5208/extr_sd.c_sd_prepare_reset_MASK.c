
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_clock; scalar_t__ sd_erase_status; scalar_t__ sd_lock_status; scalar_t__ capacity; scalar_t__ sd_data_buf_ready; scalar_t__ seq_mode; scalar_t__ sd_type; } ;
struct rtsx_chip {size_t* card2lun; scalar_t__ sd_io; scalar_t__* capacity; scalar_t__ asic_code; struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,size_t) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_8)
{
 struct sd_info *VAR_9 = &VAR_8->sd_card;
 int VAR_10;

 if (VAR_8->asic_code)
  VAR_9->sd_clock = 29;
 else
  VAR_9->sd_clock = VAR_1;

 VAR_9->sd_type = 0;
 VAR_9->seq_mode = 0;
 VAR_9->sd_data_buf_ready = 0;
 VAR_9->capacity = 0;






 VAR_8->capacity[VAR_8->card2lun[VAR_3]] = 0;
 VAR_8->sd_io = 0;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 != VAR_7)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_2, 0xFF, 0x40);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_0, VAR_5 | VAR_4,
         VAR_5 | VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_3);
 if (VAR_10 != VAR_7)
  return VAR_6;

 return VAR_7;
}
