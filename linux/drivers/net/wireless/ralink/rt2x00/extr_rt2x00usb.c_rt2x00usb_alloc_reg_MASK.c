
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* cache; } ;
struct rt2x00_dev {void* rf; TYPE_2__* ops; void* eeprom; TYPE_1__ csr; } ;
struct TYPE_4__ {int rf_size; int eeprom_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rt2x00_dev*) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_3)
{
 VAR_3->csr.cache = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3->csr.cache)
  goto exit;

 VAR_3->eeprom = FUNC_0(VAR_3->ops->eeprom_size, VAR_2);
 if (!VAR_3->eeprom)
  goto exit;

 VAR_3->rf = FUNC_0(VAR_3->ops->rf_size, VAR_2);
 if (!VAR_3->rf)
  goto exit;

 return 0;

exit:
 FUNC_1("Failed to allocate registers\n");

 FUNC_2(VAR_3);

 return -VAR_1;
}
