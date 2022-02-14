
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_6__ {TYPE_1__* spurChans; } ;
struct TYPE_7__ {TYPE_2__ modalHeader; } ;
struct TYPE_8__ {TYPE_3__ map9287; } ;
struct ath_hw {TYPE_4__ eeprom; } ;
typedef int __le16 ;
struct TYPE_5__ {int spurChan; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct ath_hw *VAR_0,
         u16 VAR_1, bool VAR_2)
{
 __le16 VAR_3 = VAR_0->eeprom.map9287.modalHeader.spurChans[VAR_1].spurChan;

 return FUNC_0(VAR_3);
}
