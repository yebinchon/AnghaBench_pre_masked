
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_card {char* type_string; int online; void* max_exp_bit_length; void* max_mod_size; int min_mod_size; int speed_rating; int user_space_type; struct ap_card* card; } ;
struct ap_device {int device; } ;
struct TYPE_2__ {int device_type; } ;
struct ap_card {struct zcrypt_card* private; TYPE_1__ ap_dev; } ;
typedef int CEX3C_SPEED_IDX ;
typedef int CEX2C_SPEED_IDX ;




 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int const*,int) ;
 struct ap_card* FUNC_1 (int *) ;
 struct zcrypt_card* FUNC_2 () ;
 int FUNC_3 (struct zcrypt_card*) ;
 int FUNC_4 (struct zcrypt_card*) ;

__attribute__((used)) static int FUNC_5(struct ap_device *VAR_8)
{




 static const int VAR_9[] = {
  1000, 1400, 2400, 1100, 1500, 2600, 100, 12};
 static const int VAR_10[] = {
  500, 700, 1400, 550, 800, 1500, 80, 10};

 struct ap_card *VAR_11 = FUNC_1(&VAR_8->device);
 struct zcrypt_card *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_2();
 if (!VAR_12)
  return -VAR_5;
 VAR_12->card = VAR_11;
 VAR_11->private = VAR_12;
 switch (VAR_11->ap_dev.device_type) {
 case 129:
  VAR_12->user_space_type = VAR_6;
  VAR_12->type_string = "CEX2C";
  FUNC_0(VAR_12->speed_rating, VAR_9,
         sizeof(VAR_9));
  VAR_12->min_mod_size = VAR_1;
  VAR_12->max_mod_size = VAR_0;
  VAR_12->max_exp_bit_length = VAR_0;
  break;
 case 128:
  VAR_12->user_space_type = VAR_7;
  VAR_12->type_string = "CEX3C";
  FUNC_0(VAR_12->speed_rating, VAR_10,
         sizeof(VAR_10));
  VAR_12->min_mod_size = VAR_3;
  VAR_12->max_mod_size = VAR_2;
  VAR_12->max_exp_bit_length = VAR_2;
  break;
 default:
  FUNC_3(VAR_12);
  return -VAR_4;
 }
 VAR_12->online = 1;

 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13) {
  VAR_11->private = ((void*)0);
  FUNC_3(VAR_12);
 }

 return VAR_13;
}
