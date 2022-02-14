
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rcar_canfd_global {int base; scalar_t__ fdmode; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rcar_canfd_global *VAR_3, u32 VAR_4)
{






 u32 VAR_5;
 u16 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = 0;
 VAR_7 = 1;
 VAR_8 = 2;
 if (VAR_3->fdmode)
  VAR_9 = 7;
 else
  VAR_9 = 0;

 VAR_5 = (FUNC_4(VAR_6) | FUNC_2(VAR_7) |
  VAR_0 | FUNC_1(VAR_8) |
  FUNC_3(VAR_9) | VAR_1);
 FUNC_6(VAR_3->base, FUNC_0(VAR_4, VAR_2), VAR_5);

 if (VAR_3->fdmode)

  FUNC_6(VAR_3->base,
     FUNC_5(VAR_4, VAR_2), 0);
}
