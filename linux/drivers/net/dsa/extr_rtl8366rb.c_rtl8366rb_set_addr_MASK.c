
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct realtek_smi {int map; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct realtek_smi *VAR_4)
{
 u8 VAR_5[VAR_0];
 u16 VAR_6;
 int VAR_7;

 FUNC_1(VAR_5);

 FUNC_0(VAR_4->dev, "set MAC: %02X:%02X:%02X:%02X:%02X:%02X\n",
   VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5]);
 VAR_6 = VAR_5[0] << 8 | VAR_5[1];
 VAR_7 = FUNC_2(VAR_4->map, VAR_1, VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_6 = VAR_5[2] << 8 | VAR_5[3];
 VAR_7 = FUNC_2(VAR_4->map, VAR_2, VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_6 = VAR_5[4] << 8 | VAR_5[5];
 VAR_7 = FUNC_2(VAR_4->map, VAR_3, VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
