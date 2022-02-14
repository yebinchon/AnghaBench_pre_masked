
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct b43_phy {TYPE_1__* ops; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct TYPE_2__ {int (* switch_channel ) (struct b43_wldev*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct b43_wldev*,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct b43_wldev*,unsigned int) ;

int FUNC_5(struct b43_wldev *VAR_5, unsigned int VAR_6)
{
 struct b43_phy *VAR_7 = &(VAR_5->phy);
 u16 VAR_8, VAR_9;
 int VAR_10;




 VAR_8 = VAR_6;
 if (FUNC_0(VAR_5->wl) == VAR_4)
  VAR_8 |= VAR_3;

 if (0)
  VAR_8 |= VAR_2;
 VAR_9 = FUNC_1(VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_5, VAR_0, VAR_1, VAR_8);


 VAR_10 = VAR_7->ops->switch_channel(VAR_5, VAR_6);
 if (VAR_10)
  goto err_restore_cookie;


 FUNC_3(8);

 return 0;

err_restore_cookie:
 FUNC_2(VAR_5, VAR_0,
   VAR_1, VAR_9);

 return VAR_10;
}
