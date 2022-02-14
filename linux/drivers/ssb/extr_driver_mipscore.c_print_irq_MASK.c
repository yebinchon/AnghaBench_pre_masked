
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coreid; } ;
struct ssb_device {TYPE_1__ id; int dev; } ;


 int FUNC_0 (int ,char*,int ,char const*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_1(struct ssb_device *VAR_0, unsigned int VAR_1)
{
 static const char *VAR_2[] = {"2(S)", "3", "4", "5", "6", "D", "I"};
 FUNC_0(VAR_0->dev,
  "core 0x%04x, irq : %s%s %s%s %s%s %s%s %s%s %s%s %s%s\n",
  VAR_0->id.coreid,
  VAR_2[0], VAR_1 == 0 ? "*" : " ",
  VAR_2[1], VAR_1 == 1 ? "*" : " ",
  VAR_2[2], VAR_1 == 2 ? "*" : " ",
  VAR_2[3], VAR_1 == 3 ? "*" : " ",
  VAR_2[4], VAR_1 == 4 ? "*" : " ",
  VAR_2[5], VAR_1 == 5 ? "*" : " ",
  VAR_2[6], VAR_1 == 6 ? "*" : " ");
}
