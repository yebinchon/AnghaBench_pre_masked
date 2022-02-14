
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_2, int VAR_3)
{
 if (VAR_3 == 0) {
  FUNC_0(VAR_2, VAR_1, "mlx5_async");
  return;
 }

 FUNC_0(VAR_2, VAR_1, "mlx5_comp%d",
   VAR_3 - VAR_0);
 return;
}
