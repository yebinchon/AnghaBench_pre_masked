
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int core_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2, u64 VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_0(VAR_2->dev->core_rev < 3);

 VAR_4 = VAR_3;
 VAR_5 = (VAR_3 >> 32);


 FUNC_1(VAR_2, VAR_1, VAR_4);
 FUNC_1(VAR_2, VAR_0, VAR_5);
}
