
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int version; } ;
struct TYPE_5__ {TYPE_1__ baseEepHeader; } ;
struct TYPE_6__ {TYPE_2__ map9287; } ;
struct ath_hw {TYPE_3__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ath_hw *VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_2->eeprom.map9287.baseEepHeader.version);

 return (VAR_3 & VAR_0) >>
  VAR_1;
}
