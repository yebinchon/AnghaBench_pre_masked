
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int str; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
          u32 VAR_4, u8 *VAR_5)
{
 u8 *VAR_6 = VAR_5;
 int VAR_7;

 switch (VAR_4) {
 case 128:
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   FUNC_0(VAR_6, VAR_2[VAR_7].str,
          VAR_0);
   VAR_6 += VAR_0;
  }
  break;
 }
}
