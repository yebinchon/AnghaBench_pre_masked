
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_hw {scalar_t__ eeprom_blob; TYPE_2__* dev; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct ath9k_platform_data {int use_eeprom; } ;
struct TYPE_4__ {struct ath9k_platform_data* platform_data; } ;
struct TYPE_3__ {int (* eeprom_read ) (struct ath_common*,int ,int *) ;} ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (struct ath9k_platform_data*,int ,int *) ;
 int FUNC_3 (struct ath_common*,int ,char*,int ) ;
 int FUNC_4 (struct ath_common*,int ,int *) ;

bool FUNC_5(struct ath_hw *VAR_1, u32 VAR_2, u16 *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_1);
 struct ath9k_platform_data *VAR_5 = VAR_1->dev->platform_data;
 bool VAR_6;

 if (VAR_1->eeprom_blob)
  VAR_6 = FUNC_1(VAR_1->eeprom_blob, VAR_2, VAR_3);
 else if (VAR_5 && !VAR_5->use_eeprom)
  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3);
 else
  VAR_6 = VAR_4->bus_ops->eeprom_read(VAR_4, VAR_2, VAR_3);

 if (!VAR_6)
  FUNC_3(VAR_4, VAR_0,
   "unable to read eeprom region at offset %u\n", VAR_2);

 return VAR_6;
}
