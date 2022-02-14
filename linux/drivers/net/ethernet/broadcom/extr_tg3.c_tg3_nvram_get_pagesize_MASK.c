
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int nvram_pagesize; } ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct tg3 *VAR_1, u32 VAR_2)
{
 switch (VAR_2 & VAR_0) {
 case 133:
  VAR_1->nvram_pagesize = 256;
  break;
 case 129:
  VAR_1->nvram_pagesize = 512;
  break;
 case 134:
  VAR_1->nvram_pagesize = 1024;
  break;
 case 131:
  VAR_1->nvram_pagesize = 2048;
  break;
 case 130:
  VAR_1->nvram_pagesize = 4096;
  break;
 case 132:
  VAR_1->nvram_pagesize = 264;
  break;
 case 128:
  VAR_1->nvram_pagesize = 528;
  break;
 }
}
