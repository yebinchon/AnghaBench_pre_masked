
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ddb_link {int overtemperature_error; int* temp_tab; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ddb_link*,int ) ;
 int FUNC_1 (struct ddb_link*,int,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct ddb_link *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 if ((FUNC_0(VAR_5, VAR_0) &
     VAR_1) != 0) {
  FUNC_2(VAR_5->dev->dev, "Over temperature condition\n");
  VAR_5->overtemperature_error = 1;
 }
 VAR_6 = (FUNC_0(VAR_5, VAR_3) >> 8) & 0xFF;
 if (VAR_6 & 0x80)
  VAR_6 = 0;
 VAR_7 = (FUNC_0(VAR_5, VAR_4) >> 8) & 0xFF;
 if (VAR_7 & 0x80)
  VAR_7 = 0;
 if (VAR_7 > VAR_6)
  VAR_6 = VAR_7;

 VAR_8 = (FUNC_0(VAR_5, VAR_2) >> 8) & 0x0F;
 if (VAR_8 > 10)
  VAR_8 = 10;

 if (VAR_6 >= VAR_5->temp_tab[VAR_8]) {
  while (VAR_8 < 10 && VAR_6 >= VAR_5->temp_tab[VAR_8 + 1])
   VAR_8 += 1;
 } else {
  while (VAR_8 > 1 && VAR_6 < VAR_5->temp_tab[VAR_8 - 2])
   VAR_8 -= 1;
 }
 FUNC_1(VAR_5, (VAR_8 << 8), VAR_2);
}
