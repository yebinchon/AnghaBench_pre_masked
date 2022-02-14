
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_host {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct meson_host *VAR_8)
{
 u32 VAR_9 = 0;

 VAR_9 |= FUNC_0(VAR_3,
     FUNC_1(VAR_7));
 VAR_9 |= FUNC_0(VAR_2, FUNC_1(VAR_6));
 VAR_9 |= FUNC_0(VAR_0, FUNC_1(VAR_5));


 VAR_9 |= VAR_1;

 FUNC_2(VAR_9, VAR_8->regs + VAR_4);
}
