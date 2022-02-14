
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int format; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5,
      u32 VAR_6, uint8_t *VAR_7)
{
 int VAR_8, VAR_9;

 switch (VAR_6) {
 case 128:
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   FUNC_0(VAR_7 + (VAR_8 * VAR_0),
          VAR_3[VAR_8].format);
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++, VAR_8++)
   FUNC_0(VAR_7 + (VAR_8 * VAR_0),
          VAR_4[VAR_9].format);
  break;
 }
}
