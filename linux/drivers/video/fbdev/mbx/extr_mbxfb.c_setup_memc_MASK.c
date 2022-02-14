
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int screen_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct fb_info *VAR_14)
{
 unsigned long VAR_15;
 int VAR_16;



 FUNC_6((VAR_2 | VAR_3 | VAR_4 |
  VAR_1),
        VAR_0);

 FUNC_6(VAR_6, VAR_5);


 FUNC_6((FUNC_1(7) | FUNC_4(3) | FUNC_3(3) |
  FUNC_2(9) | FUNC_0(2)),
        VAR_8);

 FUNC_6(0xc2b, VAR_7);

 FUNC_6((VAR_11 | VAR_10 | VAR_13 |
  VAR_12),
        VAR_9);

 FUNC_6(VAR_6, VAR_5);

 for ( VAR_16 = 0; VAR_16 < 16; VAR_16++ ) {
  VAR_15 = FUNC_5(VAR_14->screen_base);
 }
}
