
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_dev {int * ptp_clock; } ;


 int FUNC_0 (struct mlx4_en_dev*,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx4_en_dev *VAR_0)
{
 if (VAR_0->ptp_clock) {
  FUNC_1(VAR_0->ptp_clock);
  VAR_0->ptp_clock = ((void*)0);
  FUNC_0(VAR_0, "removed PHC\n");
 }
}
