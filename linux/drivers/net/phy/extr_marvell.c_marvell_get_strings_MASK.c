
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct phy_device {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_2, u8 *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_1(VAR_3 + VAR_5 * VAR_0,
   VAR_1[VAR_5].string, VAR_0);
 }
}
