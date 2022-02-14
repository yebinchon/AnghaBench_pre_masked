
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tridentfb_par*,int ) ;
 int FUNC_1 (struct tridentfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_0) & 0x8F;
 if (VAR_2 > 1024)
  VAR_3 |= 0x50;
 else if (VAR_2 > 768)
  VAR_3 |= 0x30;
 else if (VAR_2 > 600)
  VAR_3 |= 0x20;
 else if (VAR_2 > 480)
  VAR_3 |= 0x10;
 FUNC_1(VAR_1, VAR_0, VAR_3);
}
