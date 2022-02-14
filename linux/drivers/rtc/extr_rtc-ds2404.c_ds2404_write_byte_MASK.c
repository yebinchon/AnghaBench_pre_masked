
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct TYPE_2__ {int gpio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_3, u8 VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2[VAR_1].gpio, 1);
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  FUNC_1(VAR_2[VAR_1].gpio, VAR_4 & (1 << VAR_5));
  FUNC_2(10);
  FUNC_1(VAR_2[VAR_0].gpio, 1);
  FUNC_2(10);
  FUNC_1(VAR_2[VAR_0].gpio, 0);
  FUNC_2(10);
 }
}
