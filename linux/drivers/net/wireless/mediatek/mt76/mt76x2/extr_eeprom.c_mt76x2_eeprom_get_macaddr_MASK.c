
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; } ;
struct TYPE_4__ {int macaddr; TYPE_1__ eeprom; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int ) ;

__attribute__((used)) static int
FUNC_1(struct mt76x02_dev *VAR_2)
{
 void *VAR_3 = VAR_2->mt76.eeprom.data + VAR_1;

 FUNC_0(VAR_2->mt76.macaddr, VAR_3, VAR_0);
 return 0;
}
