
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;

 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 int VAR_6;

 switch(VAR_4) {
 case 128:
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   FUNC_0(VAR_5 + VAR_6 * VAR_0,
   VAR_2[VAR_6].stat_string,
   VAR_0);
  }
  break;
 }
}
