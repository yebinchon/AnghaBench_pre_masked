
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int dev; int * clk; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_3(struct mcam_camera *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] != ((void*)0)) {



   VAR_2->clk[VAR_3] = FUNC_2(VAR_2->dev, VAR_1[VAR_3]);
   if (FUNC_0(VAR_2->clk[VAR_3]))
    FUNC_1(VAR_2->dev, "Could not get clk: %s\n",
      VAR_1[VAR_3]);
  }
 }
}
