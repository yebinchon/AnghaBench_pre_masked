
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sys_powerdown { ____Placeholder_sys_powerdown } sys_powerdown ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(enum sys_powerdown VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;




 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
  VAR_10 = FUNC_1(VAR_6[VAR_9]);
  VAR_10 |= (VAR_5 |
   VAR_4);
  FUNC_2(VAR_10, VAR_6[VAR_9]);
 }




 VAR_10 = FUNC_1(VAR_0);
 VAR_10 |= VAR_3;
 FUNC_2(VAR_10, VAR_0);




 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7); VAR_9++) {
  VAR_10 = FUNC_1(VAR_7[VAR_9]);
  VAR_10 &= ~(VAR_1 |
    VAR_2);
  FUNC_2(VAR_10, VAR_7[VAR_9]);
 }
}
