
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ channel; } ;
struct TYPE_3__ {scalar_t__ channel_at_start; } ;
struct b43legacy_wldev {TYPE_2__ phy; TYPE_1__ noisecalc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_2)
{
 FUNC_1(VAR_2, 0x7F7F7F7F);
 FUNC_3(VAR_2, VAR_1,
     FUNC_2(VAR_2, VAR_1)
     | VAR_0);
 FUNC_0(VAR_2->noisecalc.channel_at_start !=
       VAR_2->phy.channel);
}
