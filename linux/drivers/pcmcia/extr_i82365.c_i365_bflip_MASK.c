
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(u_short VAR_0, u_short VAR_1, u_char VAR_2, int VAR_3)
{
    u_char VAR_4 = FUNC_0(VAR_0, VAR_1);
    if (VAR_3)
 VAR_4 |= VAR_2;
    else
 VAR_4 &= ~VAR_2;
    FUNC_1(VAR_0, VAR_1, VAR_4);
}
