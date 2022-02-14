
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_phy {scalar_t__ phy_wreg; int d11core; TYPE_1__* sh; } ;
struct TYPE_2__ {int corerev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_4(struct brcms_phy *VAR_6)
{
 u32 VAR_7;

 if (FUNC_1(VAR_6->sh->corerev, 24)) {
  u32 VAR_8, VAR_9, VAR_10;

  FUNC_3(VAR_6->d11core, FUNC_0(VAR_4), 0);
  VAR_8 = (u32) FUNC_2(VAR_6->d11core, FUNC_0(VAR_5));
  FUNC_3(VAR_6->d11core, FUNC_0(VAR_4), 1);
  VAR_9 = (u32) FUNC_2(VAR_6->d11core, FUNC_0(VAR_5));
  FUNC_3(VAR_6->d11core, FUNC_0(VAR_4), 2);
  VAR_10 = (u32) FUNC_2(VAR_6->d11core, FUNC_0(VAR_5));

  VAR_7 = ((VAR_8 & 0xf) << 28) | (((VAR_10 << 8) | VAR_9) << 12) | ((VAR_8 >> 4)
              & 0xf);
 } else {
  FUNC_3(VAR_6->d11core, FUNC_0(VAR_1), VAR_0);
  VAR_7 = (u32) FUNC_2(VAR_6->d11core, FUNC_0(VAR_3));
  VAR_7 |= (u32) FUNC_2(VAR_6->d11core,
     FUNC_0(VAR_2)) << 16;
 }
 VAR_6->phy_wreg = 0;
 return VAR_7;
}
