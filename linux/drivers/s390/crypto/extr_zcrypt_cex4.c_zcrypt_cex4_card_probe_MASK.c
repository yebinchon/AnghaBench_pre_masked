
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_card {char* type_string; int online; void* max_exp_bit_length; void* max_mod_size; void* min_mod_size; int speed_rating; void* user_space_type; struct ap_card* card; } ;
struct TYPE_4__ {int kobj; } ;
struct ap_device {TYPE_2__ device; } ;
struct TYPE_3__ {scalar_t__ device_type; } ;
struct ap_card {int functions; struct zcrypt_card* private; TYPE_1__ ap_dev; } ;
typedef int CEX7P_SPEED_IDX ;
typedef int CEX7C_SPEED_IDX ;
typedef int CEX7A_SPEED_IDX ;
typedef int CEX6P_SPEED_IDX ;
typedef int CEX6C_SPEED_IDX ;
typedef int CEX6A_SPEED_IDX ;
typedef int CEX5P_SPEED_IDX ;
typedef int CEX5C_SPEED_IDX ;
typedef int CEX5A_SPEED_IDX ;
typedef int CEX4P_SPEED_IDX ;
typedef int CEX4C_SPEED_IDX ;
typedef int CEX4A_SPEED_IDX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_19 ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int *,int *) ;
 struct ap_card* FUNC_3 (TYPE_2__*) ;
 struct zcrypt_card* FUNC_4 () ;
 int FUNC_5 (struct zcrypt_card*) ;
 int FUNC_6 (struct zcrypt_card*) ;
 int FUNC_7 (struct zcrypt_card*) ;

__attribute__((used)) static int FUNC_8(struct ap_device *VAR_20)
{




 static const int VAR_21[] = {
   14, 19, 249, 42, 228, 1458, 0, 0};
 static const int VAR_22[] = {
    8, 9, 20, 18, 66, 458, 0, 0};
 static const int VAR_23[] = {
    6, 9, 20, 17, 65, 438, 0, 0};
 static const int VAR_24[] = {
    6, 8, 17, 15, 54, 362, 0, 0};

 static const int VAR_25[] = {
   59, 69, 308, 83, 278, 2204, 209, 40};
 static const int VAR_26[] = {
   24, 31, 50, 37, 90, 479, 27, 10};
 static const int VAR_27[] = {
   16, 20, 32, 27, 77, 455, 24, 9};
 static const int VAR_28[] = {
   14, 16, 26, 23, 64, 376, 23, 8};

 static const int VAR_29[] = {
    0, 0, 0, 0, 0, 0, 0, 50};
 static const int VAR_30[] = {
    0, 0, 0, 0, 0, 0, 0, 10};
 static const int VAR_31[] = {
    0, 0, 0, 0, 0, 0, 0, 9};
 static const int VAR_32[] = {
    0, 0, 0, 0, 0, 0, 0, 8};

 struct ap_card *VAR_33 = FUNC_3(&VAR_20->device);
 struct zcrypt_card *VAR_34;
 int VAR_35 = 0;

 VAR_34 = FUNC_4();
 if (!VAR_34)
  return -VAR_14;
 VAR_34->card = VAR_33;
 VAR_33->private = VAR_34;
 if (FUNC_0(&VAR_33->functions, VAR_3)) {
  if (VAR_33->ap_dev.device_type == VAR_0) {
   VAR_34->type_string = "CEX4A";
   VAR_34->user_space_type = VAR_16;
   FUNC_1(VAR_34->speed_rating, VAR_21,
          sizeof(VAR_21));
  } else if (VAR_33->ap_dev.device_type == VAR_1) {
   VAR_34->type_string = "CEX5A";
   VAR_34->user_space_type = VAR_17;
   FUNC_1(VAR_34->speed_rating, VAR_22,
          sizeof(VAR_22));
  } else if (VAR_33->ap_dev.device_type == VAR_2) {
   VAR_34->type_string = "CEX6A";
   VAR_34->user_space_type = VAR_18;
   FUNC_1(VAR_34->speed_rating, VAR_23,
          sizeof(VAR_23));
  } else {
   VAR_34->type_string = "CEX7A";



   VAR_34->user_space_type = VAR_18;
   FUNC_1(VAR_34->speed_rating, VAR_24,
          sizeof(VAR_24));
  }
  VAR_34->min_mod_size = VAR_10;
  if (FUNC_0(&VAR_33->functions, VAR_7) &&
      FUNC_0(&VAR_33->functions, VAR_5)) {
   VAR_34->max_mod_size = VAR_9;
   VAR_34->max_exp_bit_length =
    VAR_9;
  } else {
   VAR_34->max_mod_size = VAR_8;
   VAR_34->max_exp_bit_length =
    VAR_8;
  }
 } else if (FUNC_0(&VAR_33->functions, VAR_4)) {
  if (VAR_33->ap_dev.device_type == VAR_0) {
   VAR_34->type_string = "CEX4C";



   VAR_34->user_space_type = VAR_15;
   FUNC_1(VAR_34->speed_rating, VAR_25,
          sizeof(VAR_25));
  } else if (VAR_33->ap_dev.device_type == VAR_1) {
   VAR_34->type_string = "CEX5C";



   VAR_34->user_space_type = VAR_15;
   FUNC_1(VAR_34->speed_rating, VAR_26,
          sizeof(VAR_26));
  } else if (VAR_33->ap_dev.device_type == VAR_2) {
   VAR_34->type_string = "CEX6C";



   VAR_34->user_space_type = VAR_15;
   FUNC_1(VAR_34->speed_rating, VAR_27,
          sizeof(VAR_27));
  } else {
   VAR_34->type_string = "CEX7C";



   VAR_34->user_space_type = VAR_15;
   FUNC_1(VAR_34->speed_rating, VAR_28,
          sizeof(VAR_28));
  }
  VAR_34->min_mod_size = VAR_12;
  VAR_34->max_mod_size = VAR_11;
  VAR_34->max_exp_bit_length = VAR_11;
 } else if (FUNC_0(&VAR_33->functions, VAR_6)) {
  if (VAR_33->ap_dev.device_type == VAR_0) {
   VAR_34->type_string = "CEX4P";
   VAR_34->user_space_type = VAR_16;
   FUNC_1(VAR_34->speed_rating, VAR_29,
          sizeof(VAR_29));
  } else if (VAR_33->ap_dev.device_type == VAR_1) {
   VAR_34->type_string = "CEX5P";
   VAR_34->user_space_type = VAR_17;
   FUNC_1(VAR_34->speed_rating, VAR_30,
          sizeof(VAR_30));
  } else if (VAR_33->ap_dev.device_type == VAR_2) {
   VAR_34->type_string = "CEX6P";
   VAR_34->user_space_type = VAR_18;
   FUNC_1(VAR_34->speed_rating, VAR_31,
          sizeof(VAR_31));
  } else {
   VAR_34->type_string = "CEX7P";



   VAR_34->user_space_type = VAR_18;
   FUNC_1(VAR_34->speed_rating, VAR_32,
          sizeof(VAR_32));
  }
  VAR_34->min_mod_size = VAR_12;
  VAR_34->max_mod_size = VAR_11;
  VAR_34->max_exp_bit_length = VAR_11;
 } else {
  FUNC_5(VAR_34);
  return -VAR_13;
 }
 VAR_34->online = 1;

 VAR_35 = FUNC_6(VAR_34);
 if (VAR_35) {
  VAR_33->private = ((void*)0);
  FUNC_5(VAR_34);
  goto out;
 }

 if (FUNC_0(&VAR_33->functions, VAR_4)) {
  VAR_35 = FUNC_2(&VAR_20->device.kobj,
     &VAR_19);
  if (VAR_35)
   FUNC_7(VAR_34);
 }

out:
 return VAR_35;
}
