
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (struct ucb1x00*,int ) ;
 int FUNC_3 (struct ucb1x00*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ucb1x00 *VAR_9)
{
 unsigned long VAR_10;

 VAR_10 = FUNC_1();




 FUNC_3(VAR_9, VAR_8, VAR_5);
 FUNC_3(VAR_9, VAR_7, VAR_5);
 FUNC_3(VAR_9, VAR_6, 0xffff);
 FUNC_3(VAR_9, VAR_6, 0);




 FUNC_3(VAR_9, VAR_0, VAR_3);
 FUNC_3(VAR_9, VAR_0, VAR_3 | VAR_4);




 while ((FUNC_2(VAR_9, VAR_1) & VAR_2) == 0);
 FUNC_3(VAR_9, VAR_0, 0);




 FUNC_3(VAR_9, VAR_8, 0);
 FUNC_3(VAR_9, VAR_7, 0);
 FUNC_3(VAR_9, VAR_6, 0xffff);
 FUNC_3(VAR_9, VAR_6, 0);




 return FUNC_0(VAR_10);
}
