
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6, u32 VAR_7, u8 *VAR_8)
{
 u8 *VAR_9 = VAR_8;
 int VAR_10;

 if (VAR_7 != VAR_1)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  FUNC_0(VAR_9, VAR_5[VAR_10].name, VAR_0);
  VAR_9 += VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  FUNC_0(VAR_9, VAR_4[VAR_10].name, VAR_0);
  VAR_9 += VAR_0;
 }
}
