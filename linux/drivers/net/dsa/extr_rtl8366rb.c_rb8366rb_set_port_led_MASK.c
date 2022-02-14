
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct realtek_smi {int dev; int map; scalar_t__ leds_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct realtek_smi *VAR_6,
      int VAR_7, bool VAR_8)
{
 u16 VAR_9 = VAR_8 ? 0x3f : 0;
 int VAR_10;

 if (VAR_6->leds_disabled)
  return;

 switch (VAR_7) {
 case 0:
  VAR_10 = FUNC_1(VAR_6->map,
      VAR_1,
      0x3F, VAR_9);
  break;
 case 1:
  VAR_10 = FUNC_1(VAR_6->map,
      VAR_1,
      0x3F << VAR_2,
      VAR_9 << VAR_2);
  break;
 case 2:
  VAR_10 = FUNC_1(VAR_6->map,
      VAR_3,
      0x3F, VAR_9);
  break;
 case 3:
  VAR_10 = FUNC_1(VAR_6->map,
      VAR_3,
      0x3F << VAR_4,
      VAR_9 << VAR_4);
  break;
 case 4:
  VAR_10 = FUNC_1(VAR_6->map,
      VAR_0,
      VAR_5,
      VAR_8 ? VAR_5 : 0);
  break;
 default:
  FUNC_0(VAR_6->dev, "no LED for port %d\n", VAR_7);
  return;
 }
 if (VAR_10)
  FUNC_0(VAR_6->dev, "error updating LED on port %d\n", VAR_7);
}
