
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4, u32 VAR_5,
         u8 *VAR_6)
{
 int VAR_7;

 if (VAR_5 != VAR_2)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_0(VAR_6 + VAR_7 * VAR_1,
   VAR_3[VAR_7].name, VAR_1);
}
