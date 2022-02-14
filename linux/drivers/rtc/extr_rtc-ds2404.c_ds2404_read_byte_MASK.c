
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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u8 FUNC_4(struct device *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;

 FUNC_0(VAR_2[VAR_1].gpio);

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_2(VAR_2[VAR_0].gpio, 0);
  FUNC_3(10);
  if (FUNC_1(VAR_2[VAR_1].gpio))
   VAR_5 |= 1 << VAR_4;
  FUNC_2(VAR_2[VAR_0].gpio, 1);
  FUNC_3(10);
 }
 return VAR_5;
}
