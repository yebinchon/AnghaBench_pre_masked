
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct npcm_wdt {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct npcm_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_4)
{
 struct npcm_wdt *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;

 if (VAR_4->timeout < 2)
  VAR_6 = 0x800;
 else if (VAR_4->timeout < 3)
  VAR_6 = 0x420;
 else if (VAR_4->timeout < 6)
  VAR_6 = 0x810;
 else if (VAR_4->timeout < 11)
  VAR_6 = 0x430;
 else if (VAR_4->timeout < 22)
  VAR_6 = 0x820;
 else if (VAR_4->timeout < 44)
  VAR_6 = 0xC00;
 else if (VAR_4->timeout < 87)
  VAR_6 = 0x830;
 else if (VAR_4->timeout < 173)
  VAR_6 = 0xC10;
 else if (VAR_4->timeout < 688)
  VAR_6 = 0xC20;
 else
  VAR_6 = 0xC30;

 VAR_6 |= VAR_3 | VAR_0 | VAR_2 | VAR_1;

 FUNC_1(VAR_6, VAR_5->reg);

 return 0;
}
