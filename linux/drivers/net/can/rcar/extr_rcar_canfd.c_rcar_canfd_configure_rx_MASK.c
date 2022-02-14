
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rcar_canfd_global {int base; scalar_t__ fdmode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rcar_canfd_global *VAR_3, u32 VAR_4)
{

 u32 VAR_5;
 u16 VAR_6, VAR_7;


 u32 VAR_8 = VAR_4 + VAR_2;

 VAR_6 = 2;
 if (VAR_3->fdmode)
  VAR_7 = 7;
 else
  VAR_7 = 0;

 VAR_5 = (VAR_1 | FUNC_1(VAR_6) |
  FUNC_2(VAR_7) | VAR_0);
 FUNC_3(VAR_3->base, FUNC_0(VAR_8), VAR_5);
}
