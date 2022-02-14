
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int blue; int green; int red; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,scalar_t__) ;
 int FUNC_3 (int,int ,int ,int ) ;

void FUNC_4(int VAR_10)
{
 int VAR_11;
 u8 VAR_12;

 if (VAR_10 == VAR_4) {

  FUNC_2(VAR_5, VAR_8, 0x00, VAR_0);

  FUNC_2(VAR_6, VAR_8, 0x00, VAR_2 + VAR_1);
  for (VAR_11 = 0; VAR_11 < 256; VAR_11++) {
   FUNC_3(VAR_11, VAR_9[VAR_11].red,
          VAR_9[VAR_11].green,
          VAR_9[VAR_11].blue);
  }

  FUNC_2(VAR_6, VAR_8, 0xC0, VAR_2 + VAR_1);
 } else {
  VAR_12 = FUNC_0(VAR_7, VAR_3);

  FUNC_2(VAR_3, VAR_7, 0x40, VAR_1);
  FUNC_2(VAR_5, VAR_8, 0x01, VAR_0);
  for (VAR_11 = 0; VAR_11 < 256; VAR_11++) {
   FUNC_3(VAR_11, VAR_9[VAR_11].red,
          VAR_9[VAR_11].green,
          VAR_9[VAR_11].blue);
  }

  FUNC_2(VAR_5, VAR_8, 0x00, VAR_0);
  FUNC_1(VAR_3, VAR_7, VAR_12);
 }
}
