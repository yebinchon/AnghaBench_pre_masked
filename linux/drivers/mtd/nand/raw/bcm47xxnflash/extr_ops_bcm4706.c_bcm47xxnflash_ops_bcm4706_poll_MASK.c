
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_drv_cc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct bcma_drv_cc *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (FUNC_0(VAR_5, VAR_0) & VAR_3) {
   if (FUNC_0(VAR_5, VAR_0) &
       VAR_1) {
    FUNC_1("Error on polling\n");
    return -VAR_2;
   } else {
    return 0;
   }
  }
 }

 FUNC_1("Polling timeout!\n");
 return -VAR_2;
}
