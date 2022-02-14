
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {int physhim; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0, 0x942, 0x7);
  FUNC_1(VAR_0, 0x93b, ((1 << 13) + 23));
  FUNC_1(VAR_0, 0x93c, ((1 << 13) + 1989));

  FUNC_1(VAR_0, 0x44a, 0x084);
  FUNC_1(VAR_0, 0x44a, 0x080);
  FUNC_1(VAR_0, 0x6d3, 0x2222);
  FUNC_1(VAR_0, 0x6d3, 0x2220);
 } else {
  FUNC_1(VAR_0, 0x942, 0x0);
  FUNC_1(VAR_0, 0x93b, ((0 << 13) + 23));
  FUNC_1(VAR_0, 0x93c, ((0 << 13) + 1989));
 }
 FUNC_0(VAR_0->sh->physhim, VAR_1);
}
