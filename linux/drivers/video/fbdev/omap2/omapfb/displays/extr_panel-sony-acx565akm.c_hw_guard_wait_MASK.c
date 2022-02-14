
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {unsigned long hw_guard_end; unsigned long hw_guard_wait; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct panel_drv_data *VAR_2)
{
 unsigned long VAR_3 = VAR_2->hw_guard_end - VAR_1;

 if ((long)VAR_3 > 0 && VAR_3 <= VAR_2->hw_guard_wait) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_3);
 }
}
