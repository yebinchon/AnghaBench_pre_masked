
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_card {char* type_string; int online; int user_space_type; int speed_rating; void* max_exp_bit_length; void* max_mod_size; void* min_mod_size; struct ap_card* card; } ;
struct ap_device {int device; } ;
struct TYPE_2__ {scalar_t__ device_type; } ;
struct ap_card {struct zcrypt_card* private; int functions; TYPE_1__ ap_dev; } ;
typedef int CEX3A_SPEED_IDX ;
typedef int CEX2A_SPEED_IDX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int const*,int) ;
 struct ap_card* FUNC_2 (int *) ;
 struct zcrypt_card* FUNC_3 () ;
 int FUNC_4 (struct zcrypt_card*) ;
 int FUNC_5 (struct zcrypt_card*) ;

__attribute__((used)) static int FUNC_6(struct ap_device *VAR_11)
{




 static const int VAR_12[] = {
  800, 1000, 2000, 900, 1200, 2400, 0, 0};
 static const int VAR_13[] = {
  400, 500, 1000, 450, 550, 1200, 0, 0};

 struct ap_card *VAR_14 = FUNC_2(&VAR_11->device);
 struct zcrypt_card *VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_3();
 if (!VAR_15)
  return -VAR_8;
 VAR_15->card = VAR_14;
 VAR_14->private = VAR_15;

 if (VAR_14->ap_dev.device_type == VAR_0) {
  VAR_15->min_mod_size = VAR_5;
  VAR_15->max_mod_size = VAR_4;
  FUNC_1(VAR_15->speed_rating, VAR_12,
         sizeof(VAR_12));
  VAR_15->max_exp_bit_length = VAR_4;
  VAR_15->type_string = "CEX2A";
  VAR_15->user_space_type = VAR_9;
 } else if (VAR_14->ap_dev.device_type == VAR_1) {
  VAR_15->min_mod_size = VAR_5;
  VAR_15->max_mod_size = VAR_4;
  VAR_15->max_exp_bit_length = VAR_4;
  if (FUNC_0(&VAR_14->functions, VAR_3) &&
      FUNC_0(&VAR_14->functions, VAR_2)) {
   VAR_15->max_mod_size = VAR_6;
   VAR_15->max_exp_bit_length = VAR_6;
  }
  FUNC_1(VAR_15->speed_rating, VAR_13,
         sizeof(VAR_13));
  VAR_15->type_string = "CEX3A";
  VAR_15->user_space_type = VAR_10;
 } else {
  FUNC_4(VAR_15);
  return -VAR_7;
 }
 VAR_15->online = 1;

 VAR_16 = FUNC_5(VAR_15);
 if (VAR_16) {
  VAR_14->private = ((void*)0);
  FUNC_4(VAR_15);
 }

 return VAR_16;
}
