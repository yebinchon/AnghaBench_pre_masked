
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int current_addend; } ;
struct ravb_private {TYPE_1__ ptp; struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct ravb_private *VAR_4, u32 VAR_5)
{
 struct net_device *VAR_6 = VAR_4->ndev;





 u32 VAR_7 = (VAR_4->ptp.current_addend >> 20) + 1;
 u32 VAR_8;

 if (VAR_5 < VAR_7)
  VAR_5 = VAR_7;
 else if (VAR_5 > 0 - VAR_7)
  VAR_5 = 0 - VAR_7;

 VAR_8 = FUNC_0(VAR_6, VAR_1);
 if (VAR_8 & VAR_2)
  return -VAR_0;
 FUNC_1(VAR_6, VAR_5, VAR_3);
 FUNC_1(VAR_6, VAR_8 | VAR_2, VAR_1);

 return 0;
}
