
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm63xx_udc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bcm63xx_udc*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct bcm63xx_udc *VAR_8, bool VAR_9)
{
 u32 VAR_10;

 FUNC_1(VAR_8, 0, VAR_7);

 VAR_10 = FUNC_0(VAR_6) |
       FUNC_0(VAR_3) |
       FUNC_0(VAR_1) |
       FUNC_0(VAR_2) |
       FUNC_0(VAR_5);
 FUNC_1(VAR_8, VAR_9 ? VAR_10 : 0, VAR_0);
 FUNC_1(VAR_8, VAR_10, VAR_4);
}
