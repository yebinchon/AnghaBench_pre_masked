
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {scalar_t__ _rifs_phy; } ;


 int FUNC_0 (struct brcms_phy*,int,int) ;

void FUNC_1(struct brcms_phy *VAR_0, u8 VAR_1)
{
 u16 VAR_2, VAR_3;

 if (VAR_1) {

  VAR_2 = 0x10;
  VAR_3 = 0x258;
 } else {

  VAR_2 = 0x15;
  VAR_3 = 0x320;
 }

 FUNC_0(VAR_0, VAR_2, VAR_3);

 if (VAR_0->sh && (VAR_0->sh->_rifs_phy != VAR_1))
  VAR_0->sh->_rifs_phy = VAR_1;
}
