
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;

 TYPE_3__* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_7, u32 VAR_8,
 u8 *VAR_9)
{
 unsigned int VAR_10;

 switch (VAR_8) {
 case 128:
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   FUNC_0(VAR_9, VAR_6[VAR_10].name, VAR_0);
   VAR_9 += VAR_0;
  }
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   FUNC_0(VAR_9, VAR_5[VAR_10].name, VAR_0);
   VAR_9 += VAR_0;
  }
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   FUNC_0(VAR_9, VAR_1[VAR_10].name, VAR_0);
   VAR_9 += VAR_0;
  }
  break;
 }
}
