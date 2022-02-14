
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3 {TYPE_1__* dev; } ;
struct TYPE_2__ {int* dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tg3*,int*,int) ;
 scalar_t__ FUNC_1 (struct tg3*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  if (VAR_7 == 1 && VAR_5)
   continue;
  FUNC_0(VAR_4, VAR_4->dev->dev_addr, VAR_7);
 }

 if (FUNC_1(VAR_4) == VAR_0 ||
     FUNC_1(VAR_4) == VAR_1) {
  for (VAR_7 = 4; VAR_7 < 16; VAR_7++)
   FUNC_0(VAR_4, VAR_4->dev->dev_addr, VAR_7);
 }

 VAR_6 = (VAR_4->dev->dev_addr[0] +
       VAR_4->dev->dev_addr[1] +
       VAR_4->dev->dev_addr[2] +
       VAR_4->dev->dev_addr[3] +
       VAR_4->dev->dev_addr[4] +
       VAR_4->dev->dev_addr[5]) &
  VAR_3;
 FUNC_2(VAR_2, VAR_6);
}
