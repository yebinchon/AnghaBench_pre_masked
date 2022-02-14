
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int * clk; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mcam_camera *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!FUNC_0(VAR_1->clk[VAR_2]))
   FUNC_1(VAR_1->clk[VAR_2]);
 }
}
