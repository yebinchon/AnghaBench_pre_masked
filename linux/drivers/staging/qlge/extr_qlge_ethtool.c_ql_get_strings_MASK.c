
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
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 int VAR_8;
 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_7, *VAR_4, VAR_2 * VAR_0);
  break;
 case 129:
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   FUNC_0(VAR_7 + VAR_8 * VAR_0,
    VAR_3[VAR_8].stat_string,
    VAR_0);
  }
  break;
 }
}
