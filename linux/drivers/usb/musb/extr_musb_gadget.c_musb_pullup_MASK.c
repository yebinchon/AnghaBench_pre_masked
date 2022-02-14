
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb {int mregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct musb*,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct musb *VAR_2, int VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_1(VAR_2->mregs, VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;



 FUNC_0(VAR_2, "gadget D+ pullup %s",
  VAR_3 ? "on" : "off");
 FUNC_2(VAR_2->mregs, VAR_0, VAR_4);
}
