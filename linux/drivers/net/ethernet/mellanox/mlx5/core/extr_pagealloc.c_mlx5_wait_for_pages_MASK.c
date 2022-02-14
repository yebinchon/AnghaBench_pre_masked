
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,...) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(struct mlx5_core_dev *VAR_4, int *VAR_5)
{
 unsigned long VAR_6 = VAR_3 + FUNC_2(VAR_1);
 int VAR_7 = *VAR_5;


 if (VAR_4->state == VAR_2) {
  FUNC_1(VAR_4, "Skipping wait for vf pages stage");
  return 0;
 }

 FUNC_0(VAR_4, "Waiting for %d pages\n", VAR_7);
 while (*VAR_5) {
  if (FUNC_4(VAR_3, VAR_6)) {
   FUNC_1(VAR_4, "aborting while there are %d pending pages\n", *VAR_5);
   return -VAR_0;
  }
  if (*VAR_5 < VAR_7) {
   VAR_6 = VAR_3 + FUNC_2(VAR_1);
   VAR_7 = *VAR_5;
  }
  FUNC_3(50);
 }

 FUNC_0(VAR_4, "All pages received\n");
 return 0;
}
