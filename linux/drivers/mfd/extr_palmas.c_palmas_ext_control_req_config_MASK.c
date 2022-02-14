
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct palmas_pmic_driver_data {TYPE_1__* sleep_req_info; } ;
struct palmas {int dev; struct palmas_pmic_driver_data* pmic_ddata; } ;
typedef enum palmas_external_requestor_id { ____Placeholder_palmas_external_requestor_id } palmas_external_requestor_id ;
struct TYPE_2__ {int bit_pos; scalar_t__ reg_offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct palmas*,int ,int,int ,int ) ;

int FUNC_3(struct palmas *VAR_11,
 enum palmas_external_requestor_id VAR_12, int VAR_13, bool VAR_14)
{
 struct palmas_pmic_driver_data *VAR_15 = VAR_11->pmic_ddata;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18, VAR_19;

 if (!(VAR_13 & VAR_6))
  return 0;

 if (VAR_12 >= VAR_2)
  return 0;

 if (VAR_13 & VAR_5) {
  VAR_17 = VAR_7;
  VAR_16 = 0;
 } else if (VAR_13 & VAR_3) {
  VAR_17 = VAR_0;
  VAR_16 = 1;
 } else if (VAR_13 & VAR_4) {
  VAR_17 = VAR_1;
  VAR_16 = 2;
 }

 VAR_18 = VAR_15->sleep_req_info[VAR_12].bit_pos;
 VAR_17 += VAR_15->sleep_req_info[VAR_12].reg_offset;
 if (VAR_14)
  VAR_19 = FUNC_2(VAR_11, VAR_10,
    VAR_17, FUNC_0(VAR_18), FUNC_0(VAR_18));
 else
  VAR_19 = FUNC_2(VAR_11, VAR_10,
    VAR_17, FUNC_0(VAR_18), 0);
 if (VAR_19 < 0) {
  FUNC_1(VAR_11->dev, "Resource reg 0x%02x update failed %d\n",
   VAR_17, VAR_19);
  return VAR_19;
 }


 VAR_19 = FUNC_2(VAR_11, VAR_8,
   VAR_9, FUNC_0(VAR_16), 0);
 if (VAR_19 < 0) {
  FUNC_1(VAR_11->dev, "POWER_CTRL register update failed %d\n",
   VAR_19);
  return VAR_19;
 }
 return VAR_19;
}
