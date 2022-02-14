
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct realtek_smi {int dev; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct realtek_smi*,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct realtek_smi *VAR_3)
{
 int VAR_4 = 10;
 u32 VAR_5;
 int VAR_6;

 FUNC_1(VAR_3, VAR_2,
        VAR_1);
 do {
  FUNC_3(20000, 25000);
  VAR_6 = FUNC_2(VAR_3->map, VAR_2, &VAR_5);
  if (VAR_6)
   return VAR_6;

  if (!(VAR_5 & VAR_1))
   break;
 } while (--VAR_4);

 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "timeout waiting for the switch to reset\n");
  return -VAR_0;
 }

 return 0;
}
