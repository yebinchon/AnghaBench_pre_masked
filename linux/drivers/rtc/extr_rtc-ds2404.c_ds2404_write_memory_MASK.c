
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;
struct TYPE_2__ {int gpio; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_5, u16 VAR_6,
    int VAR_7, u8 *VAR_8)
{
 int VAR_9;
 u8 VAR_10, VAR_11, VAR_12;

 FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_6 & 0xff);
 FUNC_3(VAR_5, (VAR_6 >> 8) & 0xff);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_3(VAR_5, VAR_8[VAR_9]);

 FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_2);

 VAR_10 = FUNC_1(VAR_5);
 VAR_11 = FUNC_1(VAR_5);
 VAR_12 = FUNC_1(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if (VAR_8[VAR_9] != FUNC_1(VAR_5)) {
   FUNC_0(VAR_5, "read invalid data\n");
   return;
  }
 }

 FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_10);
 FUNC_3(VAR_5, VAR_11);
 FUNC_3(VAR_5, VAR_12);

 FUNC_4(VAR_4[VAR_1].gpio);
 while (FUNC_5(VAR_4[VAR_1].gpio))
  ;
}
